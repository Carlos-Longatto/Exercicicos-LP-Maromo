#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//essa fun��o cacula a en�sima pot�ncia de uma vari�vel

int calcular_pot(int x, int n){
    int resultado;

    resultado = pow(x,n);

    return (resultado);
}

int main()
{
    int n1, n2;

    printf("Vamos calcular a funcao => x: f(x, n) = x ^ n\n\n ");
    printf("\nEntre com o valor de x: ");
    scanf("%d",&n1);

    printf("\nEntre com o valor de n: ");
    scanf("%d",&n2);

    printf("\n O resuldado e: %d\n", calcular_pot(n1,n2));

    return 0;
}
