# Playground Singcl

vscode 配置 C/C++智能提示的三种方法：https://github.com/Microsoft/vscode-cpptools/blob/master/Documentation/Getting%20started%20with%20IntelliSense%20configuration.md

### windows C/C++ CMake make

#### 1. 当前 shell 切换到 cmd

比如从 git-bash, sh, cmder 等切换到 cmd

当然你也可以直接打开 cmd， cd 到当前目录
![cmd](./img/cmd.png)

#### 2. 确定生成什么类型的 Makefile

MinGW 和 CMake 完全是无关的两个工具，所以，只需要安装后，把工具的路径加入到系统的 Path，就可以直接在 cmd.exe 中来使用。

因为 windows 版的 CMake 支持很多的编译器，而且其默认的一般是最新的 Visual Studio 20xx 工具,
相当于：`cmake -G "Visual Studio 15 2017" ../`. 这种不会生成 Makefile 文件，所有构建时使用`cmake --build ./`而不是`make`命令。

所以，需要指定 Makefile 的格式.以 MinGW 为例`cmake -G "MinGW Makefiles" ./`

![cmake](./img/cmake-G-MinGW-Makefiles.png)

输入`cmake -G`查看参数更多详情；输入`cmake --build`查看 build 更多详情

### 3.make

MinGW 中 make 为 mingw32-make
![mingw32-make](./img/mingw32-make.png)

### #define VS const

![define-const](./img/const_define.png)

## Babel 直接运行 ES6 代码

https://babeljs.io/docs/en/6.26.3/babelrc

```sh
# babel-node
npx babel-node rx/example1.js
```

## NPM

```sh
但不是说~就行^就不行
"express":"^4.16.3"意思是安装4.x.x
"express":"~4.16.3"意思是安装4.16.x
一般4.x.x是兼容的，当然这规范的执行取决于这个package，而4.16.x相当于fix版本，你很难说明不符合前面那个规范的package一定会符合后面这个规范。
如果不是很确定，你可以使用npm install xx -E固定版本
```

~~~u