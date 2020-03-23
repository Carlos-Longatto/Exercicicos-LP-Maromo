#include <stdio.h>
#include <stdlib.h>
#define V 3
int main()
{
    int vetor[V], i, n;

    for (i=0; i<V; i++){
        printf("Entre com um numero par: ");
        scanf("%d", &n);
        if (n % 2 == 0){
            vetor[i]==n;
        }else{
        printf("Este valor nao e valido, tente novamente!!\n");
        continue;
        }
    }
    printf("Os valores na ordem inversa que digitou sao:\n");
        for(i = V-1; i >= 0; i--){
        printf("%d \n",vetor[i]);
    }
    return 0;
}
