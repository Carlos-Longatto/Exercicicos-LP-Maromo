#include <stdio.h>
#include <stdlib.h>
#define V 5
int main()
{
    int Vetor[V], maior, menor;
    float media = 0, soma = 0;
    int i;

        printf("Vamos entrar com 5 valores e depois mostrar tds valores junto com o maior, menor e a media\n\n");

    for(i=0; i<V; i++){
        printf("Entre com o valor %d: ",i+1);
        scanf("%d", &Vetor[i]);
        maior = Vetor[i];
        menor = Vetor[i];
        soma+=Vetor[i];
        }
        for(i=0; i<V; i++){
        if (Vetor[i] < menor){
            menor = Vetor[i];
        }if (Vetor[i] > maior){
            maior = Vetor[i];
        }
    }
    media = (soma/V);
    printf("\nOs valores digitados sao:\n");
    for(i=0; i<V; i++){
            printf("%d \n", Vetor[i]);
    }
    printf("\nO maior valor digitado e %d, o menor  %d e a media e %.2f\n", maior, menor, media);
    return 0;
}
