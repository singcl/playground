const puppeteer = require('puppeteer');
const chalk = require('chalk');

(async () => {
  const browser = await puppeteer.launch();
  const page = await browser.newPage();
  try {
    await page.goto('http://http://myvipgifts.com/qn/common?funid=139');
    await page.screenshot({ path: 'imcoco.png', fullPage: true });
  } catch (error) {
    console.error(chalk.bold.underline.red(error.message));
    console.error(chalk.gray(error.stack));
  }
  await browser.close();
})();
