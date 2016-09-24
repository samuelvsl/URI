// AUTOR:     Samuel Victor Silveira de Lima
// PROBLEMA:  1009 - Salário com Bônus
// SUBMISSÃO: 21/09/15 19:13:33

#include <stdio.h>

int main(){
  char nome[50];
  double fixo;
  double vendas;
  scanf("%s%lf%lf", &nome, &fixo, &vendas);
  printf("TOTAL = R$ %.2lf\n", (fixo + 0.15 * vendas));
  return 0;
}
