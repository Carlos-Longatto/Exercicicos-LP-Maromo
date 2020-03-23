#include <stdio.h>
#include <stdlib.h>
#define V 5
int main()
{
    float Vetor[V], negativo=0, positivo=0;
    int i;

        printf("Vamos entrar com 10 valores reais\n");

    for(i=1; i<=V; i++){
        printf("Entre com o valor %d: ",i);
        scanf("%f", &Vetor[i]);
        if (Vetor[i] <= 0){
            negativo++;
        }else{
        positivo+=i;
        }
    }
    printf("A quantidade de numeros negativos e: %.2f, e a soma dos numeros positivos e: %.2f\n", negativo, positivo);
    return 0;
}
