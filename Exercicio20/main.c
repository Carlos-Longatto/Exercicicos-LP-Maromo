#include <stdio.h>
#include <stdlib.h>

int main()
{
   int soma=0,dobro,n,i;

	printf("Entre com um numero para checarmos se ele e perfeito ou nao: ");
	scanf("%d",&n);

	dobro=2*n;/*Dobro é igual a 2 vezes o numero digitado,no seu codigo você pois que dobro era 2 vezes o contador i*/
	for (i=1;i<=n;i++)// laço repete até chegar no numero digitado
	{
		if(n % i == 0)// Se o resto da divisao do numero digitado por i for igual a 0
		  {
			  soma=soma+i; // soma recebe o numero que feiz a divisao dar resto 0
		  }
	}
  if(soma==dobro)//Se soma dos numeros divisiveis for igual ao dobro
		  printf("%d e um numero perfeito ",n);
  else
	  printf ("%d nao e um numero perfeito",n);

  printf("\n\n");

      return 0;
}
