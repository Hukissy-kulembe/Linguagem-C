#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMS 49                 /* Total de N°s do Jogo */
#define MIN_APOSTA 6            /* Aposta Minima - 6 N°s */
#define NUM_LIN 7               /* N° de n°s apres. por linha no volante */

/*
 *  Indica o gerador de n°s aleatórios com um n° que depende
 *  da hora que se executa a função
 */
void inic_Random()
{
    long ultime;
    time(&ultime);
    srand((unsigned) ultime);
}

/* Inic. com ZERO o vetor de controle dos n°s selecionados */
void inic(int v[])
{
    int i;
    for (i=0; i<NUMS; i++)
        v[i]=0;
}

/*
 *  Lê o n° de Números a apostar. Aceita valores entre MIN_APOSTA e NUMS.
 *  Aceita o valor ZERO para indiar que se quer terminar o Prog.
*/
int Ler_Ns_Apostar()
{
    int n;
    do
    {
        printf("Quantos números quer apostar (0 - Terminar): ");
        scanf("%d", &n);
    } while ((n<MIN_APOSTA || n>NUMS) && n!=0);
    return n;
}

/**
 * Gera n números aleat. e coloca a respetiva posição do vetor
 * com o valor 1 que indica que esse n° foi selecionado.
*/
void Gerar(int *v, int n)
{
    int i, indice;
    for (i=1; i<=n; i++)
    {
        indice = rand()%NUMS;   /* Devolve n° aleatório entre 0 e NUMS-1 */
        if (v[indice] == 0)     /* Não foi selecionado */
            v[indice] = 1;
        else                    /* Este n° já tinha sido selecionado, */
            i--;                /* logo decrementa-se o contador para voltar a */
                                /* calcular mais uma vez o i-ésimo n°aleatório */
    }
}

void Apresentar(int res[])
{
    int i;
    for (i=0; i<NUMS; i++)
    {
        if (res[i] == 0)
            printf(" %2d", i+1);
        else
            printf(" XX");
        if ((i+1)%NUM_LIN==0)  putchar('\n');
    }
    putchar('\n');
}   

int main()
{
    int vetor[NUMS];
    int n_nums;     /* N° de Números para Jogar 6..49 */

    inic_Random();
    while (1)
    {
        inic(vetor);
        if ((n_nums = Ler_Ns_Apostar()) == 0)   break;
        Gerar(vetor, n_nums);       /* Gerar os N°s a Apostar */
        Apresentar(vetor);
    }
}