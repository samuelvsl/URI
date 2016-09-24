// AUTOR:     Samuel Victor Silveira de Lima
// PROBLEMA:  1008 - Salário
// SUBMISSÃO: 07/03/13 00:04:35

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b;
  float c, d;
  scanf("%d%d%f", &a, &b, &c);
  d = b * c;
  printf("NUMBER = %d\nSALARY = U$ %.2f\n", a, d);
  return 0;
}
