#include <stdio.h>
#include <stdlib.h>
#define V 10
int main()
{
    float Vetor[V], negativo = 0, positivo = 0;
    int i;

        printf("Vamos entrar com 10 valores reais\ne contar os numeros negativos e somar os positivos\n");

    for(i=0; i<V; i++){
        printf("Entre com o valor %d: ",i+1);
        scanf("%f", &Vetor[i]);
        if (Vetor[i] >= 0){
            positivo+=Vetor[i];

        }else if (Vetor[i] < 0) {
            negativo++;
        }
    }
    printf("A quantidade de numeros negativos e: %.2f, e a soma dos numeros positivos e: %.2f\n", negativo, positivo);
    return 0;
}
