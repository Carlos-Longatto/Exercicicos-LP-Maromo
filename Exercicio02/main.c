#include <stdio.h>
#include <stdlib.h>
#define V 5
int main()
{
    int vetorA [V], vetorB [V], i;

    printf("Vamos entrar com 10 valores aleatorios, depois se o indice for par iremos multiplicar por 5,\n"
           "se for impar multiplicar, e no final mostraremos na forma invertida\n"
           "que foram digitados os numeros \n\n");
    for (i=0; i<V; i++){
        printf("Entre com o valor desejado: ");
        scanf("%d", &vetorA[i]);
        if (i % 2 == 0){
            vetorB[i] = vetorA[i] * 5;
        }else{
            vetorB[i] = vetorA[i] + 5;
        }
    }
    for(i = V-1; i >=0; i--){
        printf("vetorA[%d] = %d <-> vetorB[%d] = %d\n", i, vetorA[i], i, vetorB[i]);
    }
    return 0;
}
