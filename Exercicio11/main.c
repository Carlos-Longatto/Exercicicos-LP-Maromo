#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valA = -1, valB = -1, va[4], vb[4], i;

    while(valA >= 10000 || valA < 0)
    {
        printf("Insira o Valor de A: ");
        scanf("%d",&valA);
        if(valA >= 10000 || valA < 0)
        {
            printf("Insira um valor Valido. \n");
        }
    }

    while(valB >= 10000 || valB < 0)
    {
        printf("Insira o Valor de B: ");
        scanf("%d",&valB);
        if(valB >= 10000 || valB < 0)
        {
            printf("Insira um valor Valido. \n");
        }
    }

    va[0] = valA % 10;
    va[1] = (valA % 100) / 10;;
    va[2] = (valA % 1000) / 100;
    va[3] = (valA % 10000) / 1000;

    vb[0] = valB % 10;
    vb[1] = (valB % 100) / 10;;
    vb[2] = (valB % 1000) / 100;
    vb[3] = (valB % 10000) / 1000;
    printf("Vetor A:    Vetor B: \n");
    for(i=0;i<4;i++)
    {
        printf("[%d]    [%d] \n", va[i], vb[i]);
    }

    return 0;
}
