// AUTOR:     Samuel Victor Silveira de Lima
// PROBLEMA:  1013 - O Maior
// SUBMISSÃO: 25/09/16 18:59:34

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    
    scanf("%d%d%d", &a, &b, &c);
    d = (a + b + abs(a - b)) / 2;
    printf("%d eh o maior\n", (c + d + abs(c - d)) / 2);
    
    return 0;
}
