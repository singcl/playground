// C++ 二叉树实现

#include <iostream>
#include <stdlib.h>

using namespace std;

typedef char ElemType;

//二叉树的二叉链表结构，也就是二叉树的存储结构，1个数据域，2个指针域（分别指向左右孩子）
typedef struct BiTNode
{
    ElemType data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

//二叉树的建立，按前序遍历的方式建立二叉树，当然也可以以中序或后序的方式建立二叉树
void CreateBiTree(BiTree *T)
{
    ElemType ch;
    // cin是istream类的对象，它从标准输入设备(键盘) 获取数据，
    // 程序中的变量通过流提取符“>>”从流中提取数据。
    // 流提取符“>>”从流中提取数据时通常跳过输入流中的空格、tab键、换行符等空白字符。
    // @see http://c.biancheng.net/cpp/biancheng/view/2229.html
    cin >> ch;
}

// 未完...
// http://www.cnblogs.com/liuamin/p/6269950.html