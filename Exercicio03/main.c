#include <stdio.h>
#include <stdlib.h>
#define V 10
int main()
{
    int vetor[V], i;

    printf("Vamos entrar com 10 valores aleatorios e depois imprimir a ordem inversa q foi entrado\n\n");

    for (i=0; i<V; i++){
        printf("Entre com o valor desejado: ");
        scanf("%d", &vetor[i]);
    }
    printf("Os valores na ordem inversa que digitou sao:\n");
    for(i = V-1; i >= 0; i--){
    printf("%d \n",vetor[i]);
    }
    return 0;
}
