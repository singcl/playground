// 二叉树的存储结构 - 二叉链表 ：1个数据域 2个指针域（分别指向左右孩子）

typedef struct BiTNode
{
    ElemType data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

//二叉树的建立，按前序遍历的方式建立二叉树，当然也可以以中序或后序的方式建立二叉树

void CreateBiTree(BiTree *T)
{
    ElemType ch;
    cin >> ch;

    if (ch == '#')
        *T = NULL; //保证是叶结点
    else
    {
        *T = (BiTree)malloc(sizeof(BiTNode));
        //if (!*T)
        //exit(OVERFLOW); //内存分配失败则退出。
        (*T)->data = ch;             //生成结点
        CreateBiTree(&(*T)->lchild); // 构造左子树
        CreateBiTree(&(*T)->rchild); // 构造右子树
    }
}