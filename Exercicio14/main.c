#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 9
#define C 9
#define K 81

int main()
{
    int matriz [L][C], i, j, k;
    int vetor[K];

    srand( (unsigned)time(NULL) );

    for (i=0; i<L; i++){
        for (j=0; j<C; j++){
            matriz[i][j] = ((rand() % 5000) * 2 + 1);
            printf("\t[%3d]", matriz[i][j]);
        }
        printf("\n\n");
    }
    for (i=0; i<L; i++){
        for (j=0; j<C; j++){
            vetor[K]=matriz[i][j];
            printf("\t[%d]\n", vetor[K]);
            k++;
        }
    }
    return 0;
}
