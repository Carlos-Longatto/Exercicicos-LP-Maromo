#include <stdio.h>
#include <stdlib.h>
#define V 5

int main()
{
    int i, impar=0, par=0;
    int vetor[V];

    for (i=0; i<V; i++){
        printf("Entre com um numero: ");
        scanf("%d", &vetor[i]);
    }
    for (i=0; i<V; i++){
        if (vetor[i] % 2 == 0){
            par= par + vetor[i];
            }else{
                impar = impar + vetor[i];
            }
        }
    printf(" total dos valores pares = %d \n total dos valores impares = %d \n",par, impar);
    printf(" valor total de par + impar = %d \n porcentagem de impar %d %%", (par+impar), (impar*100)/100);

    return 0;
}


