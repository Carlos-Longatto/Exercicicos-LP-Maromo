#include <stdio.h>
#include <stdlib.h>

int verificar_sinal(int valor){
    if (valor > 0){
    printf("[1]");
    }else if(valor < 0){
        printf("[-1]");
        }else{
        printf("[0]");
        }
return (valor);
}



int main()
{
    int valor;
    printf("Entre com um numero e vamos ver se e positivo [1], negativo[-1] ou [0]\n");
    scanf("%d",&valor);

    printf("\n\n", verificar_sinal(valor));
    return 0;
}
