#include <stdbool.h>

typedef struct _BitNode
{
  int data;
  struct _BitNode *lchild, *rchild;
} BitNode, *BiTree;

bool SearchBST(BiTree T, int key, BiTree pre, BiTree &n)
{
  if (!T)
  {
    n = pre;
    return false;
  }
  else if (key == T->data)
  {
    n = T;
    return true;
  }
  if (key < T->data)
  {
    SearchBST(T->lchild, key, T, n);
  }
  else
  {
    SearchBST(T->rchild, key, T, n);
  }
}