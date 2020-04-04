#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Essa função retorna o expoente da base. Por exemplo, potencia(3, 4) deve retornar
81. Assuma que expoente é um inteiro maior ou igual a 1.
*/

int potencia(int base, int expoente){
    int baseexpoente;
    while (expoente <= 0){
        printf("\nValor invalido, digite um numero maior que 0: ");
        scanf("%d", &expoente);
    }

    baseexpoente = pow(base,expoente);

    return (baseexpoente);
}

int main()
{
    int n1, n2;

    printf("Funcao para calcular a potencia de um numero\n\n ");
    printf("Entre com o valor da base: ");
    scanf("%d",&n1);

    printf("\nEntre com o valor do expoente: ");
    scanf("%d",&n2);

    printf("o resuldado e: %d\n", potencia(n1,n2));

    return 0;
}
