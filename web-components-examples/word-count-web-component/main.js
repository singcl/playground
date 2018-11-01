customElements.define(
  'word-count',
  class extends HTMLParagraphElement {
    constructor() {
      super();

      const wcParent = this.parentNode;

      function countWords(node) {
        const text = node.innerText || node.textContent;
        return text.split(/\s+/g).length;
      }

      const count = `Words: ${countWords(wcParent)}`;

      const shadowRoot = this.attachShadow({ mode: 'open' });
      const span = document.createElement('span');
      span.textContent = count;

      shadowRoot.appendChild(span);

      setInterval(() => {
        const count = `Words: ${countWords(wcParent)}`;
        span.textContent = count;
      }, 200);

      // Update count when element content changes
    }
  },
  { extends: 'p' },
);
