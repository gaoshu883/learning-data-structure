#include <stdio.h>
#include <stdlib.h>
typedef struct tree
{
  /* data */
  int data;
  struct tree *left;
  struct tree *right;
} node, *pnode;

pnode createTreeNode(int data)
{
  pnode n = (pnode)malloc(sizeof(node));
  n->data = data;
  n->left = NULL;
  n->right = NULL;
  return n;
}
void treeTravel(pnode p)
{
  if (NULL == p)
  {
    return;
  }
  treeTravel(p->left);
  printf("%d   ", p->data);
  treeTravel(p->right);
}
void main()
{
  pnode root = NULL;

  pnode p1 = NULL, p2 = NULL, p3 = NULL, p4 = NULL, p5 = NULL, p6 = NULL, p7 = NULL, p8 = NULL, p9 = NULL;

  p1 = createTreeNode(7);
  p2 = createTreeNode(1);
  p3 = createTreeNode(9);
  p4 = createTreeNode(5);
  p5 = createTreeNode(8);
  p6 = createTreeNode(3);
  p7 = createTreeNode(6);
  p8 = createTreeNode(2);
  p9 = createTreeNode(4);

  p1->left = p2;
  p1->right = p3;
  p2->right = p4;
  p3->left = p5;
  p4->left = p6;
  p4->right = p7;
  p6->left = p8;
  p6->right = p9;

  root = p1;
  treeTravel(root);
  getchar();
}