# Memória Dinâmica

## Introdução

Até agora, para trabalharmos com strings ou vetores ou outros tipos de dados, mais ou menos complexos era  absolutamente necessário que soubémessemos, de início, qual o número de elementos de que iríamos necessitar.

Por exemplo, para criarmos duas strings iguais com um valor a ser introduzido pelo usuário declaravam-se as duas strings com uma dimensão suficientemente grande, de tal modo que a string introduzida pelo usuário pudesse ser copiada para o outro vetor.

**Exemplo:**

***prog1201.c***
´´´´C
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[200], outra[200];
    
    printf("Qual a sua String? ");
    fgets(s, sizeof(s), stdin);

    strcpy(outra, s);

    printf("String Original: %s\nCópia: %s\n", s, outra);
    
    return 0;
}
```

Por que é a string que irá conter a cópia tem que ser declarada a priori com uma determinada dimensão? Uma vez que seu objetivo é conter uma cópia da outra string, então podemos criar a string **outra** apenas depois de saber qual o espaço ocupado pela string introduzida pelo operador.

No entanto, tal coisa é proibida em C, pois a declaração de variáveis é feita no início dos programas/funções.

Este capítulo irá, assim, abordar a forma como se pode transpor esse problema, criando memória apenas quando se precisa dela, liberando-a assim que ela não seja mais necessária.

Poupa-se assim memória, ao evitar a alocação de grandes espaços de memória que só seriam novamente liberados quando terminasse o programa ou a função onde forma declarados.

Todas as funções que tratam da alocação dinâmica de memória encontram-se acessíveis através do **#include<stdlib.h>**.

## Alocação de Memória

A alocaçõa dinâmica de memória é normalmente realizada recorrendo-se as duas funções mais ou menos semelhantes: a função **malloc** e a função **calloc**.

A sua sintaxe é a seguinte:

    void *mallloc(size_int n_Bytes)

Ora, size_t é norma