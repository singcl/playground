customElements.define(
  'person-details',
  class extends HTMLElement {
    constructor() {
      super();

      const template = document.getElementById('person-template');
      // content HTMLTemplateElement 的属性
      // https://developer.mozilla.org/zh-CN/docs/Web/API/HTMLTemplateElement
      const templateContent = template.content;

      const shadowRoot = this.attachShadow({ mode: 'open' });

      const style = document.createElement('style');
      style.textContent = `
        div { padding: 10px; border: 1px solid gray; width: 200px; margin: 10px; }
        h2 { margin: 0 0 10px; }
        ul { margin: 0; }
        p { margin: 10px 0; }
      `;

      shadowRoot.appendChild(style);
      // https://developer.mozilla.org/zh-CN/docs/Web/API/Node
      // appendChild 将指定的childNode参数作为最后一个子节点添加到当前节点。如果参数引用DOM树上的现有节点，则节点将从当前位置分离，并附加到新位置。
      // 所有这里我们深度克隆一个副本 而不是直接使用 否则templateContent 会从 template元素中移除
      shadowRoot.appendChild(templateContent.cloneNode(true));
    }
  },
);

customElements.define(
  'edit-word',
  class extends HTMLElement {
    constructor() {
      super();

      const shadowRoot = this.attachShadow({ mode: 'open' });
      const form = document.createElement('form');
      const input = document.createElement('input');
      const span = document.createElement('span');

      const style = document.createElement('style');

      style.textContent = 'span { background-color: #eef; padding: 0 2px }';

      shadowRoot.appendChild(style);
      shadowRoot.appendChild(form);
      shadowRoot.appendChild(span);

      span.textContent = this.textContent;

      // getComputedStyle 和 element.style 的相同点就是二者返回的都是 CSSStyleDeclaration 对象，
      // 取相应属性值得时候都是采用的 CSS 驼峰式写法，均需要注意 float 属性。
      // 而不同点就是：
      // element.style 读取的只是元素的“内联样式”，即 写在元素的 style 属性上的样式；
      // 而 getComputedStyle 读取的样式是最终样式，包括了“内联样式”、“嵌入样式”和“外部样式”。
      // element.style 既支持读也支持写，我们通过 element.style 即可改写元素的样式。而 getComputedStyle 仅支持读并不支持写入。
      // 我们可以通过使用 getComputedStyle 读取样式，通过 element.style 修改样式

      form.appendChild(input);
      form.style.display = 'none';
      span.style.display = 'inline-block';
      input.style.width = `${span.clientWidth}px`;

      this.setAttribute('tabindex', '0');
      input.setAttribute('required', 'required');
      this.style.display = 'inline-block';

      this.addEventListener('click', () => {
        span.style.display = 'none';
        form.style.display = 'inline-block';
        input.focus();
      });

      form.addEventListener('submit', (e) => {
        e.preventDefault();
      });

      function updateDisplay() {
        span.style.display = 'inline-block';
        form.style.display = 'none';
        span.textContent = input.value;
        input.value = '';
        input.style.width = `${span.clientWidth}px`;
      }
      input.addEventListener('change', updateDisplay);
    }
  },
);
