# Arquivos

## Operações Básicas sobre Arquivos

Para processar um arquivo qualquer, a primeira operação a ser realizada é ligar uma variável do nosso programa a esse arquivo. A essa operação dá-se o nome de **Abertura do Arquivo**.

A **Abertura do Arquivo** consiste em associar uma variável do nosso programa ao arquivo que pretendemos processar, ou, em outras palavras, representar internamente o nome físico do arquivo atráves de um nome lógico, que corresponde à variável do nosso programa que irá representa-ló.

Evita-se, assim, estar permanentemente escrevendo o nome completo do arquivo sempre que precisamos nos referir a ele.

Depois de aberto um arquivo, podemos realizar todas as operações que pretendermos sobre o conteúdo desse arquivo - **ler** dados, **escrever** dados, **posicionarmo-nos** ao longo do arquivo, etc. - o que corresponde, na realidade, ao processamento que queremos realizar sobre esse arquivo.

Depois de processado o arquivo, se já não necessitamos dele devemos então retirar a ligação que existia entre a variável do programa e o arquivo que esta representa. Diz-se que vamos **fechar o Arquivo**.

As operações de **Abertura** e **Fechamento** traduzem-se em inglês por **open** e **close**. No entanto, em C, todas as funções de processamento de arquivos são precedidas por um **f**, de forma a melhor indicar que se tratam de funções sobre arquivos (tal como as funções que operam *strings* são precedidas por **str** - *strcpy*, *strlen*). Dessa forma, as funções que permitem abrir e fechar um arquivo em C chamam-se `fopen` e `fclose`.

## Abertura de um Arquivo

Como dissemos anteriormente, a abertura de um arquivo permite associar um arquivo existente num suporte magnético a uma variável do nosso programa. No entanto, C tem apenas os tipos *char*, *int*, *float* e *double*, os quais não se referem a arquivos.

Para podermos utilizar um arquivo tem-se que declarar uma variável do tipo `FILE` (ou, mais propriamente, um ponteiro para o tipo `FILE`).

Nota:

    A declaração de variáveis para o processamento de arquivos faz-se usando o tipo FILE definido no arquivo <stdio.h>. (Notar que FILE é escrito em maiúsculas para reforçar a idéia de que não se trata de um tipo básico da própria linguagem).

Como se pode observar, a declaraão de uma variável do tipo `FILE *` faz com que esta seja um ponteiro para o tipo `FILE`. A sua declaração é feita tal como para qualquer outra variável.

    ```c
    int x,y;
    float k;
    FILE *fp;       /* fp - file pointer */
    ```

A abertura de um arquivo é realizada utilizando a função `fopen`, cujo protótipo se encontra no arquivo **stdio.h**, pois se trata de uma operação-padrão (normal) de entrada/saída. A sua sintaxe é a seguinte:

    FILE * fopen (const char *filename, const char *mode)

A função recebe, assim, dois parâmetros:

**filename**    String contendo o Nome físico do arquivo(Ex: "DADOS.DAT").
**mode**        String contendo o Modo de Abertura do arquivo.

## Nome de um Arquivo

O nome de um arquivo é armazenado numa *string* e deve representar fielmente e na totalidade o nome do arquivo tal como é visto pelo sistema operacional em que se está operando. Este pode estar contido numa *string* constante ou num ponteiro para uma *string* em outra posição na memória.

## Modos de Abertura

Existem três modos distintos de abertura de um arquivo:

`r`     **read**(Abertura do arquivo para leitura) Abre o arquivo para leitura, caso não possa abrir, a função devolve NULL.

`w`     **write**(Abertura do arquivo para Escrita) Abre o arquivo para a escrita. Assim, é criado um novo arquivo com o nome passado à função. Notar que se já existir algum arquivo com o mesmo nome este é apgado e criado um novo arquivo, perdendo-se assim toda a informação nele contida. Caso não possa cria-lo, a função devolve NULL.

`a`     **append**(Abertura do arquivo para Acrescentar) Abre o arquivo para Acrescentar. Se o arquivo não existir, ele é criado e funciona tal a qual o modo **w**. Se o arquivo já existir, coloca-se no final deste, de forma a permitir a escrita dos dados de forma sequencial a partir dos dados já existentes.

Para além desses três modos básicos existe ainda a possibilidade de abrir um arquivo de forma a permitir simultaneamente operações de leitura e escrita colocando um sinal de `+` após o modo.

`r+`        Abertura do arquivo para **Leitura e Escrita**. Se o arquivo não existir, é criado. Se o arquivo já existir, os novos dados serão colocados a partir do início do arquivo, por cima, isto é, apagando os dados anteriores.

`w+`        Abertura do arquivo para Leitura e Escrita. Se o arquivo não existir, é criado. Se o arquivo já
existir, é apagado e criado um novo com o mesmo nome.

`a+`        Abertura do arquivo para Leitura e Escrita. Se o arquivo não existir, é criado. Se o arquivo já
existir, os novos dados serão colocados a partir do final do arquivo.

O modo de abertura pode ainda ser combinado com o tipo de processamento que se pretende dar ao arquivo, considerando-o um arquivo de texto (**t**) ou um arquivo binário (**b**)

## Modo de Texto e Modo Binário

Por padrão, a abertura de um arquivo é realizada considerando este como um arquivo de texto. Para abrir um arquivo em modo binário é necessário acrescentar um **b** ao modo de abertura anteriomente apresentado (Ex: `rb`, `wb`, `ab`, `a+b`,etc.)

Um arquivo é considerado de texto quando é constituido por caracteres que são perceptíveis por nós. Normamente são constituídos pelas letras do alfabeto, por números, alguns caracteres vulgares na nossa escrita &%$#().;:, e ainda pelos separadores espaço em branco, tab e NewLine, isto é, são normalmente constituídos pelos caracteres existentes no nosso teclado. Em geral, um arquivo de texto é formatado apenas pelo caractere NewLine, que indica onde termina cada uma das linhas.

Os arquivos binários, por seu turno, podem ser constituídos por qualquer caractere existente na tabela
ASCII, podendo conter caracteres de controle, caracteres especiais ou mesmo caracteres sem represen-
tação visível.

Ainda assim, a maior diferença entre os dois processamentos está no tratamento do caractere NewLine
que, no MS-DOS, é constituído não por um, mas por dois caracteres.

A representação do NewLine é feita em C através da sequência \n. Quando a linguagem C pretende es-
crever essa sequência (seja em arquivo, seja para a tela), converte-a nos dois caracteres que representam
no MS-DOS o NewLine. O mesmo acontece quando C realiza a leitura de caracteres, convertendo os dois
caracteres (CR+LF) na sequência ‘\n’ que representa um único caractere.

A diferença entre o processamento de um arquivo aberto (por exemplo, para leitura) em modo de texto e
aberto em modo binário é que em modo de texto sempre que a sequência CR+LF é encontrada, é lida como se se tratasse de um único caractere, enquanto se o arquivo for processado em modo binário é lido
um caractere (byte) de cada vez.


Nota:

    A função fopen é responsável pela abertura de arquivos em C. Se por qualquer razão o arquivo não puder ser aberto, a função devolve NULL, não sendo o programa abortado como acontece em outra linguagens. É da responsabilidade do programador o tratamento dos problemas que possa encontrar quando processa arquivos.

Foi dito anteriormente que a abertura de um arquivo consistia na associação do nome do arquivo a uma variável do nosso programa. E, pelo que vimos até agora, essa associação ainda não foi apresenta.

Nota:

    Se função fopen conseguir abrir um arquivo com sucesso, cria em memória uma estrutura (do tipo FILE) que representa toda a informação necessária relativa ao arquivo que estiver processando, retornando o endereço em que essa estrutura foi criada. Caso não tenha conseguido abrir o arquivo NULL, isto é, o endereço ZERO de memória.

A associação entre o nome físico de um arquivo e a variável do nosso programa é realizada através do
valor de retomo da função fopen.

|**Modo de Abertura**|**Breve Descrição**|**Permite Leitura**|**Permite Escrita**|**Se o Arquivo Não Existe**|**Se o Arquivo já Existe**|**Posição Inicial**|
|--------|-----------|----------|-------|----|----|----|
|r  |Leitura    |Sim|Não|NULL|OK|Início|
|w  |Escrita    |Não|Sim|Cria|Recria|Início|
|a  |Acrescenta |Não|Sim|Cria|OK|Fim|
|r+ |Leitura/Escrever   |Sim|Sim|Cria|Permite Alterar Dados|Início|
|w+ |Leitura/Escrever   |Sim|Sim|Cria|Recria|Início|
|a+ |Leitura/Escrever   |Sim|Sim|Cria|Permite Alterar Dados|Fim|

Nota:

    Caso exista algum erro de abertura, a função fopen retorna o valor NULL.
