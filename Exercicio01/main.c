#include <stdio.h>
#include <stdlib.h>
#define V 5

int main()
{
    int i, impar=0, par=0;
    int vetor[V];

    printf("Vamos entar com 5 elementos e no final apresentar: a soma dos valores pares, a soma dos impares\n"
           "a soma do total e a porcentagem de numeros impares em relacao aos pares\n\n");

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
    printf("\nTotal dos valores pares = %d \n\n total dos valores impares = %d \n",par, impar);
    printf("\nvalor total de par + impar = %d \n\n porcentagem de impar %d %%\n\n", (par+impar), (impar*100)/100);

    return 0;
}


