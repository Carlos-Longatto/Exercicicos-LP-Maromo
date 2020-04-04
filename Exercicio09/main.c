#include <stdio.h>
#include <stdlib.h>
#define T 5
#define C 5

int main()
{
    printf("Criandro uma matriz triangular superior 5x5 \n\n");
    int m[T][T]={{0}};
    int i, j;
    for(i=0; i<T; i++){
            for(j=0; j<T; j++){
        m[i][i] = 1;
        if (i < j){
            m[i][j] = 1;
        }
        }
    }
    for(i=0; i<T; i++){
        for(j=0; j<T; j++){
            printf("  %d  ", m[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
