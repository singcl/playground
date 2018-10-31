customElements.define(
  'summary-display',
  class extends HTMLElement {
    constructor() {
      super();

      const template = document.getElementById('summary-display-template');
      const templateContent = template.content;

      const shadowRoot = this.attachShadow({ mode: 'open' });
      shadowRoot.appendChild(templateContent.cloneNode(true));

      const items = Array.from(this.querySelectorAll('li'));
      const descriptions = Array.from(this.querySelectorAll('p'));

      items.forEach(item => handleClick(item));

      function handleClick(item) {
        item.addEventListener('click', () => {
          items.forEach((m) => {
            m.style.backgroundColor = 'white';
          });

          descriptions.forEach((description) => {
            updateDisplay(description, item);
          });
        });
      }

      function updateDisplay(desc, m) {
        desc.removeAttribute('slot');
        if (desc.getAttribute('data-name') === m.textContent) {
          desc.setAttribute('slot', 'choice');
          m.style.backgroundColor = '#bad0e4';
        }
      }

      // slotchange Event
      const slots = this.shadowRoot.querySelectorAll('slot');
      slots[1].addEventListener('slotchange', (e) => {
        const nodes = slots[1].assignedNodes();
        console.log(`Element in Slot "${slots[1].name}" changed to "${nodes[0].outerHTML}".`);
      });
    }
  },
);
