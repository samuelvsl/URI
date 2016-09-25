// AUTOR:     Samuel Victor Silveira de Lima
// PROBLEMA:  1014 - Consumo
// SUBMISSÃO: 07/03/13 02:09:18

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x;
  float y, z;
  scanf("%d%f", &x, &y);
  z = x / y;
  printf("%.3f km/l\n", z);
  return 0;
}
