#include <stdio.h>
#include <stdlib.h>
#define V 5
int main()
{
    int Vetor[V], maior, posMaior, menor, posMenor, i;


        printf("Vamos entrar com 5 valores e depois mostrar a posicao do maior valor e a do menor\n\n");

    for(i=0; i<V; i++){
        printf("Entre com o valor %d: ",i+1);
        scanf("%d", &Vetor[i]);
        maior = Vetor[i];
        menor = Vetor[i];
        }

        for(i=0; i<V; i++){
        if (Vetor[i] <= menor){
            menor = Vetor[i];
            posMenor = i;
        }else if(Vetor[i] >= maior){
            posMaior = i;
            maior = Vetor[i];
        }
    }

    printf("A posicao do maior valor e %d e o valor e %d, ja a posicao do menor e %d e o valor e %d\n",posMaior+1, maior,posMenor+1,menor);
    return 0;
}
