#include <stdio.h>
#define MaxVertices 100 // 定义最大容量

typedef struct
{
  int Vertices[MaxVertices];          // 顶点信息的数组
  int Edge[MaxVertices][MaxVertices]; // 边信息的二维数组
  int numV;                           // 顶点数
  int numE;                           // 边数
} AdjMatrix;

void CreateGraph(AdjMatrix *G)
{
  int n, e, vi, vj, w, i, j;
  printf("请输入图的顶点数和边数（以空格分隔）：");
  scanf("%d%d", &n, &e);
  G->numV = n;
  G->numE = e;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (i == j)
      {
        G->Edge[i][j] = 0;
      }
      else
      {
        G->Edge[i][j] = 32767;
      }
    }
  }
  for (i = 0; i < n; i++)
    for (i = 0; i < G->numV; i++) //将顶点存入数组中
    {
      printf("请输入第%d个顶点的信息(整型)：", i + 1);
      scanf("%d", &G->Vertices[i]);
    }
  printf("\n");
  for (j = 0; j < G->numE; j++)
  {
    printf("请输入边的信息i,j,w（以空格分隔）：");
    scanf("%d%d%d", &vi, &vj, &w);

    G->Edge[vi - 1][vj - 1] = w;
    G->Edge[vj - 1][vi - 1] = w;
  }
}

int main()
{
  AdjMatrix G;
  CreateGraph(&G);
};