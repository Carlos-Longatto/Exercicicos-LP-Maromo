#include <stdio.h>
#include <stdlib.h>

int main()
{

     int valor,i;
   printf("Insira um valor para verificar os seus divisores: \n");
   scanf("%d", &valor);
   for (i = 1; i < valor; i++)
   {
       if (valor%i==0)
       {
           printf("E devisor %d \n", i);
       }
   }
   printf("E devisor %d \n", valor);
    return 0;
}
