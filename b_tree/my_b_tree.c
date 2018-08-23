//    ��������ʵ�֣�C���ԣ�
//    �����ݹ�ʵ��
//    ���뻷����visual studio code
//    ����ϵͳ��win7+

// ������������������Ļ� ���Խ����ļ�����ΪGBK �ٱ��롣

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef char Elementtype;      // �����������ͣ��ɸ�����Ҫ���ж���
typedef struct TreeNode *Node; // Node�൱�� struct TreeNode *
typedef struct TreeNode
{
    Elementtype Element;
    Node left;  // ���ڵ�����ӽڵ�
    Node right; // ���ڵ�����ӽڵ�
} TREE, *PTREE;

// ��������
void CreateTree(PTREE *); // �������򴴽�����
void PreOrderTree(PTREE); // ����ǰ���������
void InOrderTree(PTREE);  // ���������������

// ������
int main()
{
    PTREE Root;
    printf("����������������Ľڵ�����(�磺QWERT******)�� ");
    CreateTree(&Root);

    printf("\nǰ��������Ϊ��");
    PreOrderTree(Root);

    printf("\n����������Ϊ��");
    InOrderTree(Root);

    return 0;
}

// ���������򴴽�����
void CreateTree(PTREE *Root)
{
    char val = 0;    // ��������������
    val = getchar(); // ��������ֵ
    // �������'*'����ָ��Ϊ��
    if (val == '*')
        (*Root) = NULL;
    // ��������'*'�����������ֵ
    else
    {
        (*Root) = (PTREE)malloc(sizeof(TREE)); // �����ڴ�ռ�
        if ((*Root) == NULL)
        {
            printf("�����ڵ�ʧ�ܣ��޷���������ڴ�...");
            exit(-1);
        }
        else
        {
            (*Root)->Element = val; // ���ڵ�������ֵ
            CreateTree(&(*Root)->left);
            CreateTree(&(*Root)->right);
        }
    }
}

// ����ǰ�������������
void PreOrderTree(PTREE Root)
{
    if (Root == NULL)
    {
        return;
    }
    else
    {
        putchar(Root->Element);
        PreOrderTree(Root->left);
        PreOrderTree(Root->right);
    }
}

// �������������������
void InOrderTree(PTREE Root)
{
    if (Root == NULL)
    {
        return;
    }
    else
    {
        InOrderTree(Root->left);
        putchar(Root->Element);
        InOrderTree(Root->right);
    }
}