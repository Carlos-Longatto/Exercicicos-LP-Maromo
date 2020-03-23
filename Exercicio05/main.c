#include <stdio.h>
#include <stdlib.h>
#define V 15
int main()
{
    int Vetor[V],i, total=0;
    float media;

        printf("Vamos calcular a media da nota de 15 alunos\n");
    for(i=1; i<=V; i++){
        printf("Entre com a nota %d: ",i);
        scanf("%d", &Vetor[i]);
        total+=Vetor[i];
    }
    media = total / V;
    printf("A media geral das notas e: %.2f\n", media);
    return 0;
}
