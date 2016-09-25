// AUTOR:     Samuel Victor Silveira de Lima
// PROBLEMA:  1010 - Cálculo Simples
// SUBMISSÃO: 07/03/13 01:20:05

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b, c, d;
  float e, f, g;
  scanf("%d %d %f\n%d %d %f", &a, &b, &e, &c, &d, &f);
  g = b*e + d*f;
  printf("VALOR A PAGAR: R$ %.2f\n", g);
  return 0;
}
