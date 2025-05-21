
#include <stdio.h>

int main()
{
   unsigned idade;
   unsigned montante;
   unsigned long int numero_conta;

   printf("Preencha os da seguinte forma: idade montante a depositar n° da conta\n");
   printf("Dados: ");
   scanf("%u%u%lu", &idade, &montante, &numero_conta);

   /**
    *    O formato de leitura e escrita de variáveis shor e long
    *    nas funções scanf e printf deve ser precedida dos prefixos
    *    h (short) e l (long).
    *    */

   printf("\n%s\n%s\n%s\t=\t%u\n",
         "------------------------",
         "Dados da conta:",
         "Idade",
         idade);
   printf("%s\t=\t%u\n", "Montante a depositar", montante);
   printf("%s\t=\t%lu\n", "N° da conta", numero_conta);

   /* Signed e Unsigned 
    *
    * Caso deseja que a variável contenha apenas valores positivos,
    * deverá ser declarada com o prefixo: Unsigned
    * -> por padrão o int é Signed, não é necessário usar quando o nosso valore
    *  vai poder conter valores positivos como negativos
    */

   /*
    * O formato de leitura e escrita de variáveis inteiros sem sinal (Unsigned)
    * utilizando as funções scanf e printf, é %u em vez de %d
    */

    /*
    * Quando atribuido um valor negativo a uma variável unsigned em C,
    * ocorre uma conversão implicita seguindo a regra do wrapping (modular arithmetic).
    * O valor negativo é convertido em um valor postivo, seguindo a lógica do complemento de 2.
    */

    unsigned int idade1 = -1;
    unsigned long int saldo = -5000;

    printf("Idade (unsigned int) = %u\n", idade1);    // Saída: 4294967295 (32-bit)
    printf("Saldo (unsigned long int) = %lu\n", saldo); // Saída: 18446744073709551615 (64-bit)

    /**
     * Por que isso acontece?
     * 
     * Variáveis unsigned não têm sinal, então o bit mais significativo (que em
     * signed indica negativo) é tratado como parte do valor.
     * -> A conversão segue a regra:
     *  - Valor unsigned = valor máximo + valor negativo + 1
     */
}

