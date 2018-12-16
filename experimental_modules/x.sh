
export NODE_OPTIONS='--experimental-modules --loader ./custom-loader.mjs'
node custom-loader-file.js

# 列出当前所有的环境变量
# export -p

# export 定义一个变量时可以在子shell中被调用，而不需要重复去定义
# Linux export命令用于设置或显示环境变量。
# export可新增，修改或删除环境变量，供后续执行的程序使用
# 不使用export定义的变量只在当前shell有效
