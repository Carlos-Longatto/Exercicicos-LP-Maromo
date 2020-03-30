#include <stdio.h>
#include <stdlib.h>
#define V 7

int main()
{
    int m[V][V]={{0}};
    int i, j;

    printf("  Matriz Identidade \n\n");

    for(i=0; i<V; i++){
        m[i][i] = 1;
    }
    for(i=0; i<V; i++){
        for(j=0; j<V; j++){
            printf(" %d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
