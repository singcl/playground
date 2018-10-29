customElements.define(
  'my-paragraph',
  class extends HTMLElement {
    constructor() {
      super();

      const template = document.getElementById('my-paragraph');
      // content HTMLTemplateElement 的属性
      // https://developer.mozilla.org/zh-CN/docs/Web/API/HTMLTemplateElement
      const templateContent = template.content;

      // https://developer.mozilla.org/zh-CN/docs/Web/API/Node
      // appendChild 将指定的childNode参数作为最后一个子节点添加到当前节点。如果参数引用DOM树上的现有节点，则节点将从当前位置分离，并附加到新位置。
      // 所有这里我们深度克隆一个副本 而不是直接使用 否则templateContent 会从 template元素中移除
      this.attachShadow({ mode: 'open' }).appendChild(templateContent.cloneNode(true));
    }
  },
);

const slottedSpan = document.querySelector('my-paragraph span');
console.log(slottedSpan.assignedSlot);
console.log(slottedSpan.slot);
