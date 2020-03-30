#include <stdio.h>
#include <stdlib.h>
#define L 4
#define C 2

int main()
{
    int mata[L][C], matb[L][C], matc[L][C], i, j;

    printf("Vanos entrar com valores para a matriz A, depois a B e no final faremos a soma das 2 matrizes\n\n");

    for (i=0; i < L; i++){
              for (j=0; j < C; j++){
        printf("Digite os valores da matriz a: ");
        scanf("%d", &mata[i][j]);
            }
    }

    for (i=0; i < L; i++){
              for (j=0; j < C; j++){
        printf("Digite os valores da matriz b: ");
        scanf("%d", &matb[i][j]);
            }
    }
    for (i=0; i < L; i++){
              for (j=0; j < C; j++){
              matc[i][j] = mata[i][j] + matb[i][j];
              printf(" %d ", matc[i][j]);
              }
            printf("\n");

    }
    return 0;
}
