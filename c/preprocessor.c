// C 预处理器不是编译器的组成部分，但是它是编译过程中一个单独的步骤。
// 简言之，C 预处理器只不过是一个文本替换工具而已，它们会指示编译器在实际编译之前完成所需的预处理。

#define MAX_ARRAY_LENGTH 20
#include <stdio.h>
#include "myheader.h"

#undef FILE_SIZE
#define FILE_SIZE 20

#ifndef MESSAGE
#define MESSAGE "hello world"
#endif // !MESSAGE

#ifdef DEBUG
/* Your debugging statements here */
#endif // DEBUG
