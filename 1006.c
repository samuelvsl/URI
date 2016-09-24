// AUTOR:     Samuel Victor Silveira de Lima
// PROBLEMA:  1006 - Média 2
// SUBMISSÃO: 06/03/13 09:41:40

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float A,B,C,MEDIA;
  scanf("%f%f%f",&A,&B,&C);
  MEDIA=(A*2+B*3+C*5)/10;
  printf("MEDIA = %.1f\n",MEDIA);
  return 0;
}
