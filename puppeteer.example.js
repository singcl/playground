const puppeteer = require('puppeteer');

(async () => {
  const browser = await puppeteer.launch();
  const page = await browser.newPage();
  await page.goto('https://imcoco.top');
  await page.screenshot({ path: 'imcoco.png' });

  await browser.close();
})();
