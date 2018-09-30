customElements.define(
  'open-shadow',
  class extends HTMLElement {
    constructor() {
      super();

      const pElement = document.createElement('p');
      pElement.textContent = this.getAttribute('text');

      const shadowRoot = this.attachShadow({ mode: 'open' });
      shadowRoot.appendChild(pElement);
    }
  },
);

customElements.define(
  'closed-shadow',
  class extends HTMLElement {
    constructor() {
      super();

      const pElement = document.createElement('p');
      pElement.textContent = this.getAttribute('text');
      // open外部可访问（通过element.shadowRoot, e.composedPath()等），closed则不能
      const shadowRoot = this.attachShadow({ mode: 'closed' });
      shadowRoot.appendChild(pElement);
    }
  },
);

document.querySelector('html').addEventListener('click', (e) => {
  // Event 接口的只读属性 composed 返回一个 Boolean 值，用来指示该事件是否可以从 Shadow DOM 传递到一般的 DOM。
  console.log(e.composed);
  // 如果e.composed返回的 Boolean 值为 true，
  // 表明当事件到达 shadow DOM 的根节点（也就是 shadow DOM 中事件开始传播的第一个节点）时，事件可以从 shadow DOM 传递到一般 DOM。
  // 当然，事件要具有可传播性，即该事件的 bubbles 属性必须为 true。你也可以通过
  // 调用 composedPath() 来查看事件从 shadow DOM 传播到普通 DOM 的路径
  console.log(e.composedPath());
});

// [p, document - fragment, open-shadow, body, html, document, Window]      open-shadow元素的传播路径
// [closed-shadow, body, html, document, Window]                            closed-shadow元素传播路径
// [h1, body, html, document, Window];                                      h1元素的传播路径
