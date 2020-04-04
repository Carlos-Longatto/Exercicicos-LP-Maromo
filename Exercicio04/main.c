#include <stdio.h>
#include <stdlib.h>
#define V 10

int main()
{
    int vetor[V], i, n;

     printf("Entre com 10 valores inteiros pares: ");
     for (i=0; i<V; i++) {
		printf("\nInforme o %d numero: ", i+1);
		scanf("%d", &vetor[i]);
		while (vetor[i] % 2 != 0) {
			printf("\nO numero precisa ser par. Reinforme o %d numero: ", i+1);
			scanf("%d", &vetor[i]);
		}
	}

    printf("\nOs valores na ordem inversa que digitou sao:\n");
        for(i = V-1; i >= 0; i--){
        printf("%d \n",vetor[i]);
    }
    return 0;
}
