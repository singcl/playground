# coffee中嵌入 js代码

hi = `
return [document.title, "Hello Javascript"].join(":");
`

markdown = `
return \`In Markdown, write code like \\\`this\\\`\`;
`

```
function time() {
  return `The time is ${new Date().toLocaleTimeString()}`;
}
```