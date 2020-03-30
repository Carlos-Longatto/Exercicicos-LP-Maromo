#include <stdio.h>
#include <stdlib.h>
#define ALUNOS 5
#define QUESTOES 10

int main()
{
    char respostas[QUESTOES]= {'a', 'c', 'b', 'e', 'd', 'a', 'd', 'c', 'a', 'b'};
    char matriz[ALUNOS][QUESTOES];
    int resultado[QUESTOES] = {0};
    char i, j, correto;

    //preenchimento da matriz com char
    for (i=0; i<ALUNOS; i++){
        for (j=0; j<QUESTOES; j++){
            fflush(stdin);
            printf("Candidato %d, digite o valor da questao %d\n", i+1, j+1);
            scanf("%c", &matriz[i][j]);
        }
    }
    //leitura da matriz com cahr
    for (i=0; i<ALUNOS; i++){
        for(j=0; j<QUESTOES; j++){
            fflush(stdin);
            printf("[%c]", matriz[i][j]);
        }
        printf("\n");
    }


    //verifica as respostas dos alunos e alimenta o vetor 'respostas' com o indice de respostas corretas
    for (i=0; i<ALUNOS; i++){
            correto=0; //zera o correto após terminar a leitura das questoes do aluno 'i'
        for (j=0; j<QUESTOES; j++){
            if (matriz[i][j]==respostas[j]){
             correto++;
             resultado[i]=correto;
            }

        }
    }

    printf("\nNOTAS!!!\n");

    //demonstra o resultado da comparação
    for (i=0; i<ALUNOS; i++){
            fflush(stdin);
            printf("aluno %d: nota [%d]\n", i+1,  resultado[i]);
        }
        printf("\n");
    return 0;
}
