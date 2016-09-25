// AUTOR:     Samuel Victor Silveira de Lima
// PROBLEMA:  1015 - Distância Entre Dois Pontos
// SUBMISSÃO: 08/03/13 00:49:21

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int x1, x2, y1, y2;
  float z;
  scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
  z = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
  printf("%.4f\n", z);
  return 0;
}
