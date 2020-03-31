#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potencia(int base, int expoente){
    int baseexpoente;

    baseexpoente = pow(base,expoente);

    return (baseexpoente);
}

int main()
{
    int n1, n2;

    printf("Funcao para calcular a potencia de um numero\n ");
    printf("Entre com o valor da base: ");
    scanf("%d",&n1);

    printf("Entre com o valor do expoente: ");
    scanf("%d",&n2);

    printf("o resuldado e: %d\n", potencia(n1,n2));

    return 0;
}
