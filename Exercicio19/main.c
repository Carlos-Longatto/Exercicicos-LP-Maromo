#include <stdio.h>
#include <stdlib.h>

int validar_data(int dia, int mes, int ano){


    //checar ano
    if (ano >= 1900 && ano <= 9999)
    {
        //checar mes
        if (mes >= 1 && mes <= 12)
        {
            //checar dias
            if ((dia >= 1 && dia <= 31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12))
                printf("\n[1]\n");
            else if ((dia >= 1 && dia <= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11))
                printf("\n[1]\n");
            else if ((dia >= 1 && dia <= 28) && (mes == 2))
                printf("\n[1]\n");
                //checar ano bisixto
            else if (dia == 29 && mes == 2 && (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)))
                printf("\n[1]\n");
            else
                printf("\n[0]\n");
        }
        else
        {
            printf("\n[0]\n");
        }
    }
    else
    {
        printf("\n[0]\n");
    }
    return ;
}


int main()
{
    int dd, mm, aaaa;
    printf("Entre com o dia: ");
    scanf("%d", &dd);
    printf("Entre com o mes: ");
    scanf("%d", &mm);
    printf("Entre com o ano: ");
    scanf("%d", &aaaa);

    /*
    outra forma da entrada da data
    printf("Entre com a data DD/MM/AAAA: ");
    scanf("%d/%d/%d", &dd, &mm, &aaaa);
    */

      printf("\n", validar_data(dd,mm,aaaa));

    return 0;
}
