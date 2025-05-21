# Linguagem C

## Tipos de dados básicos

### Variáveis

Sempre que desejamos guardar um valor que, por qualquer razão, não seja fixo, devemos fazê-los utilizando variáveis.

Nota:

    Uma variável é nada mais que um nome que damos a uma determinada posição de memória para conter um valor de um determinado tipo.

Como o seu próprio nome indica, o valor contido em uma variável pode variar ao longo da execução de um programa.

Uma variável deve ser sempre definida antes de ser usada. A definição de uma variável indica ao compilador qual o tipo de dado que fica atribuído ao nome que indicarmos para essa variável.

A definição de variáveis é feita utilizando a seguinte sintaxe:

    tipo var1 [, var2, ..., var(n)];

**Exemplos:**

    int i;          /* i é uma variável do tipo inteiro */
    char ch1, novo_char;        /* ch1 e novo_char são vars do tipo char */
    float pi, raio, perimetro;
    double total, k123;

Nota:

    A declaração de variáveis tem que ser sempre realizada antes de sua utilização e antes de qualquer instrução.

    main ()
    {
        Declaração de variáveis <-

        Instrução1;
        Instrução2;
    }

As variáveis são sempre armazenadas em memória, e são uma forma simples de referenciar posições de memória. O tipo que lhes está associado indica o número de *bytes* que serão utilizados para guardar um valor nessa variável.

### Nomes de Variáveis

O nome que se vai atribuir a variáveis em C implica observar um número reduzido de regras:

- O nome de uma variável pode ser constituído por letras do alfabeto (minúsculas ou maiúsculas), dígitos (0...9) e ainda pelo caractere undercore(_).
- O primeiro caractere não pode ser um dígito. Terá que ser uma letra ou o caractere undercore. No entanto, é desaconselhável a utilização deste último como primeira letra idenficada de uma variável.
- Maiúsculas e minúsculas representam caracteres diferentes, logo variáveis distintos.
- Uma variável não pode ter por nome uma palavra reservada da própria Linguagem C. Assim, não podemos ter uma variável denominada `float`, `if` ou `for`, uma vez que essas palavras são instruções ou tipos da própria linguagem.

Não é possível a utilização de caracteres acentuadas (ã, õ, á, é, etc.) no nome das variáveis, pois a grande maioria dos compiladores não aceita como caracteres admissíveis.

O caractere *underscore*(_) é habitualmete utilizado para fazer a separação entre palavras que representam um única variável. Ex: *Num_Cliente, Id_Fatura, Vou_Continuar etc*.

**Exercício:**

Indique quais são as variáveis que têm nomes corretos e incorretos na seguinte lista::

    int idade;          /* Correto */
    int Num_Cliente;    /* Correto */
    float a1b2c3;       /* Correto */
    float 7a2b3c;       /* Incorreto: primeito caractere é um dígito */
    char float;         /* Incorreto: utilizou-se uma palavra reservada */
    double vinte%;      /* Incorreto: utilizou-se caractere inadmissível */
    char sim?não;       /* Incorreto: utilizou-se caractere inadmissível */
    int _alfa;      /* Correto, mas não aconselhável */
    int _123;       /* Correto, mas não aconselhável */
                    /* Notar que o primeiro caractere não é um dígito */
                    /* mas sim o underscore */
    char Num, NUM;  /* Correto, pois o C é case sensetive. */
                    /* Será aconselhável ??? */

O número de caracteres que o nome de uma variável pode conter depende do compilador, mas é normal que sejam permitidos nomes de variáveis com até 32 caracteres (ou mais).

### Nomes das variáveis (Cuidado a seguir)

- O nome de uma variável deve ser descritivo daquilo que ela armazena.

    Ex: 
        **xxx, yyy** vs. **Id_Cliente, num_fatura**

- O nome de uma variável não deve ser todo escrito em maiúsculas, pois identificadores totalmente escritos em maiúsculas são tradicionalmente utilizadas pelos programadores de C para referenciar constantes.

- Caso o nome de uma variável use mais do que uma palavrea, utilize o caractere *underscore* ou a diferença entre minúsculas e maiúsculas para as separar, facilitando assim a leitura.

    **Exemplos:**

        nomeprincipalcliente
        nome_principal_cliente
        NomePrincipalCliente
        Nome_Principal_Cliente

- Não utilize o caractere *underscore*(_) para iniciar o nome de uma variável.

### Atribuição

Sempre que uma variável é declarada, estamos solicitando ao compilador para reservar espaço em memória para armazená-la. Esse espaço passará a ser referenciado através do nome da variável.

No caso do inteiro, o espaço em bytes que lhe é reservado varia com as arquiteturas em que é utilizado.
Em microcomputadores o seu valor é normalmente de 2 bytes, enquanto em máquinas maiores é habitu-
almente de 4 bytes.

Independentemente do número de bytes que ocupe, o nome da variável referencia a totalidade do espaço
ocupado pela variável.

Sempre que uma variável é definida, um conjunto de bytes fica associado a ela. Ora, esses bytes têm bits
com valor **1** e outros bits com **0**, constituindo um número qualquer. Dessa forma, quando uma variável é
criada fica automaticamente com um valor que não é **0** nem **1**, nem qualquer valor predefinido, mas sim
um valor qualquer aleatório que resulta da disposição dos bits que se encontram nos bytes reservados
para a representação dessa variável.

Nota:

    Quando uma variável é declarada fica sempre com um valor, o qual resulta do estado aleatório dos bits que a constituem.

Desse modo, uma variável poderá ser iniciada com um valor através de uma operação de atribuição.

A atribuição de um valor só pode ser realizada para variáveis. Ao realizar uma atribuição o valor anterior
presente na variável é eliminado, ficando nela o novo valor que lhe foi atribuído.

É essa capacidade que certos objetos têm de possuir diferentes valores que lhes confere o nome de **variáveis**, isto é, o seu conteúdo pode variar ao longo da execução de um programa.

    variável = expressão;

A atribuição de valores em C é realizada através do sinal de `=`, sendo a variável a alterar **SEMPRE** colocada no lado esquerdo da atribuição, e o valor a atribuir no lado direito.

**Exemplo:** Para colocar o valor -17 na variável `num` faz-se:

    int num;        /* Declaração da variável num */
    num = -17;      /* num passa a ter o valor -17 */

Nota:

    Uma variável pode ser automaticamente iniciada quando se faz a sua declaração.



Uma atribuição é realizada obedecendo à seguinte sintaxe

### Reais -- `float` e `double`

As variáveis declaradas do tipo `float` ou `double` são utilizadas para armazenar valores numéricos com parte fracionária. São também frequentemente denominadas reais ou ponto flutuante (Ex.: 3.14, 0.000024514, 1.0).

A diferença entre uma variável do tipo `float` e uma outra do tipo `double` é o número de bytes que reserva para armazenar o valor. A dimensão do float é normalmente de quatro *bytes*, enquanto a do double é de oito *bytes*. Habitualmente pode-se dizer que esses dois tipos também armazenam números com precisão simples (float) ou com dupla precisão (double).

![imagem da representação de ponto flutuante](./imagens/ponto_flutuante1.png)

`Exemplo:` Escreva um programa que calcule o perímetro e a área de uma circunferência.


```
    #include <stdio.h>

    int main()
    {
        float raio, perimetro;
        double Pi = 3.1415927, area;

        printf("Introduza o Raio da Circunferência: ");
        scanf("%f", &raio);
        area = Pi * raio * raio;
        perimetro = 2 * Pi * raio;

        printf("Área = %f\nPerimetro = %f\n", area, perimetro);
    }
```
Nota:

    O formato de leitura e escrita para números reais é %f

A atribuição, a leitura e a escrita de números reais poderm ser realizadas usando a notação cientéfica, especificando uma base e expoente. Neste caso, o formato do número deve ser:

![imagem da representação do ponto flutuante em notação cientifica](./imagens/ponto_flutuante2.png)

O número armazenado nesse exemplo é `123.46 * 10⁷⁸`.

`Exemplo:`Escreva um programa que realize a conversão de toneladas para quilos e gramas escrevendo o resultado em notação tradicional *(aaaaa,bbb)* e científica *(aaa E+_bb)*.


```
    #include <stdio.h>

    int main()
    {
        float quilos = 1.0E3; /* Uma tonelada são 1000 quilos */
        double gramas = 1.0e6; /* Uma tonelada são 1 000 000 de gramas */
        float n_toneladas;

        printf("Quantas toneladas comprou: ");
        scanf("%f", &n_toneladas);
        printf("N° de Quilos = %f = %e\n", n_toneladas * quilos, n_toneladas * quilos);
        printf("N° de gramas = %f = %E\n", n_toneladas * quilos, n_toneladas * quilos);
    }
```

Nota:

    Os valores, quando são armazenados em números em números de ponto flutuane, podem comportar algum erro mínimo, resultante de arrendondamentos ou do formato inteiro de representação do mesmo.

No exemplo anterior utilizaram-se dois formatos de escrita para a notação científica, `%e` e `%E`. A diferença está na forma como os valores são depois apresentados (com **e** minúsculo 1.2e+5 ou com **E** maiúsculo 1.2E+5).


### Operações sobre Reais

Qualquer operação que inclua um dos operandos do tipo real obtém um resultado do tipo real. A diferença entre um inteiro e um número real está na presença ou na ausência do **ponto**, que é o separador das partes inteira e fracionária.

```
    10      Inteiro     10
    -10     Inteiro     -10
    10.     Real        10.0 (pois tem o ponto)
    10.0    Real        10.0 (idêntico ao anterior)
    10.25   Real        10.25
```
O conjunto de operações disponíveis para os números de ponto flutuante é igual ao dos números inteiros (à exceção do operador % -- Módulo).

|**Operação**|**Descrição**|**Exemplo**|**Resultado**|
|-------------|-------------|-----------|-------------|
|`+`|Soma|21.3 + 4.1|25.4|
|`-`|Subtração|21.7 - 4.8|16.9|
|`*`|Multiplicação|21.2 * 4.7|99.64|
|`/`|Divisão Real|21.0/4.0|5.25|
|`%`|Não faz sentido aplicar a reais|`n.a`|`n.a`|

Nota:

    Qualquer operação em que menos um dos operandos seja real produz um resultado do tipo real. Se um dos operandos for, por exemplo, inteiro e um outro real, o inteiro é alterado para o tipo real (4 -> 4.0), para que se possa realizar a operação entre dois reais.

```
Exemplos:

    21      /  4     -> 5 /* Divisão inteira */
    21.0     /  4    -> 5.25 /* Como 21.0 é um real, o valor 4 é alterado para 4.0 */
    21      /   4.   -> /* Como 4. é um real, o valor 21 é alterado para 21.0 */
    21.0    /   4.0     -> 5.25 /* Divisão real */
```

Assim, da divisão entre 21 e 4 não irá resultar 5.25, como se poderia pensar, uma vez que o resultado de uma operação entre dois inteiros (21 e 4) tem sempre como resultado um inteiro. Para que o resultado tenha casas decimais, pelo menos um dos operandos terá que ser do tipo real.

O resto da divisão(**% - Módulo**) não pode ser aplicado a reais, pois não faz sentido aplicar um operador cujo resultado seja sempre zero.

Esse operador % não poder se aplicar a reais porque (salvo os erros de arredondamento inerentes às proprias operações) o resto da divisão entre dois reais é sempre zero, pois o quociente de uma divisão real contém as casas decimais que permitem representar o resultado da divisão de forma tão apurada quanto possível.

Caso se tente aplicar o operador % em um dos operandos seja real, o compilador apresenta o respectivo erro e suspende o processo de compilação.


### Caracteres -- char

O tipo `char` permite armazenar **UM ÚNICO CARACTERE** numa variável desse tipo.

A razão por que dei tanta ênfase à expressão **UM ÚNICO CARACTERE** é que um dos erros mais comuns de programação em C é pensar que o tipo *char* permite armazenar *strings* ou conjuntos de caracteres numa variável do tipo *char*.

Volto a repetir que uma variável do  tipo `char` pode conter apenas um único caractere.

Se em relação aos inteiros e reais pode existir alguma dúvida quanto à dimensão (n° de *bytes*) reservada para representá-los, no caso do *char*, independentemente da arquitetura utilizada, sempre se armazena num único *byte*.

Nota:

    Um char é sempre armazenaado num byte.

Assim, o número de caracteres possíveis de representar é 256, pois é o número de combinações possíveis de representar num único *byte* (0...255).

![Limites dos valores representado em inteiros](./imagens/caracteres1.png)

A declaração de uma variável do tipo ***char*** segue a sintaxe já conhecida:

```
    char var1, ch, var2;
```

Para realizar uma carga automática de uma variável (atribuição de valor) do tipo ***char*** deverá ser colocado o caractere a atribuir entre **Aspas simples** (Ex.: 'A'), e não entre **Aspas**.

**Nota:** A representação de um caractere individual é sempre realizada entre aspas simples('A' , '2', '\n').

A utilização de aspas para a representação de um caractere "A" é um erro comum, está totalmente incorreta e pode levar a algumas surpresas não muito agradáveis.

Nota:

    A representação de caracteres em C faz-se utilizando aspas simples ('A') e não aspas ("A").

A representação de caracteres está particularmente facilitada, uma vez que a maior parte dos caracteres
de uso mais comum está presente no nosso teclado, bastando para isso pressionar a tecla correspondente
ao caractere que queremos escrever e colocá-lo entre aspas simples para que ele possa ser utilizado.
Existem, no entanto, outros caracteres que são particularmente úteis, mas que não são possíveis de es-
crever com o nosso teclado. O exemplo mais flagrante é o caractere New Line.

No caso do New Line, este está associado à tecla **ENTER** ou **RETURN**. Se desejar escrever um New Line num printf, não basta clicar na tecla
**ENTER** enquanto se escreve a string do printf uma vez que o **ENTER** é uma tecla especial de
edição de texto que tem normalmente por função abrir uma nova linha no seu editor.

Esse e outros caracteres especiais podem ser representados entre aspas simples por mais de um caractere,
desde que sejam precedidos do caractere \ (Backslash). O caractere \ indica que o caractere seguinte deve
ser considerado de forma especial.

**Exemplo:**

    'n' -- Caractere 'n'
    '\n' -- Caractere especial (New Line)

A seguir apresenta-se a lista de todos os caracteres especiais:

| Representação | Significado |
|---------|----------------------------------|
| **\7** | Bell (sinal sonoro do computador) |
| **\a** | Bell (sinal sonoro do computador) |
| **\b** | Backspace |
| **\n** | New Line (mudança de linha) |
| **\r** | Carriage Return |
| **\t** | Tabulação Horizontal |
| **\v** | Tabulação Vertical |
| **\\\\** | Caractere \ (forma de representar o próprio caractere especial \\) |
| **\'** | Caractere ' (aspas simples) |
| **\"** | caractere " (aspas) |
| **\?** | Caractere ? (ponto de interrogação) |
| **\ooo**|Caractere cujo código ***ASCII*** em Octal é *ooo*|
| **\xyy** | Caractere cujo código ***ASCII*** em Hexadecimal é *yy* |


    O formato de leitura e escrita para caracteres é %c.

O programa seguinte é uma outra forma de escrever *Hello World* na tela.

***prog0209.c***

```
    #include <stdio.h>

    int main()
    {
        printf("%cello, Wo%cld%c", 'H', 'r' ,'\n');
    }
```

Repare que cada um dos `%c` é substituído pelo caractere correspondente, escrevendo no final a famosa
frase ***Hello World***.

![Ilustração do que acontece quando é substituido o %c](./imagens/caracteres2.png)

**Exemplo:** Escreva um programa que leia um caractere e a seguir o escreva na tela.

***prog0210.c***

```
    #include <stdio.h>

    int main()
    {
        char ch;

        printf ("Introduza um Caractere: ");
        scanf("%c", &ch);
        printf ("O caractere introduzido foi '%c'\n", ch);
    }
```

Como se pode observar, o programa é em tudo semelhante aos programas anteriormente apresentados.
Note, no entanto, que na linha 7 o printfnão necessitava de aspas simples em tomo do formato %c. As
aspas simples são, dentro de uma string, um caractere como qualquer outro.

Desejava-se que o caractere, ao aparecer na tela, ficasse entre aspas simples, isto é, antes e depois de rea-lizada a substituição de %c pelo valor de ch é escrita uma aspa simples.

Vejamos qual a saída produzida por essas duas versões diferentes da sétima linha.

```
    7:  printf("O caractere introduzido foi '%c'\n", ch)
    O caractere introduzido foi 'A'

    7:  printf ("O caractere introduzido foi %c\n",ch);
    O caractere introduzido foi A
```

A leitura de caracteres pode ser realizada sem ter que se recorrer à função scanf. Pode-se utilizar uma
outra função desenhada unicamente para a leitura de um caractere — a função ***getchar()***.

A função getchar é invocada sem qualquer parâmetro. Ela lê um caractere e devolve o caractere obtido
como resultado da função, evitando a escrita de parâmetros, formatos, &ch etc.

```
    caractere lido <- getchar();
```

O programa anterior poderia ser escrito da seguinte forma:

***prog0211.c***

```
    #include <stdio.h>

    int main()
    {
        char ch;

        printf ("Introduza um Caractere: ");
        ch = getchar();
        printf ("O caractere introduzido foi '%c'\n", ch);
    }
```

A oitava linha do programa invoca a função getchar(), a qual é responsável por ler um caractere introdu-
zido pelo usuário. Depois de lido, a função devolve esse mesmo caractere, que é atribuído à variável *ch*.

### getchar() vs. scanf()

Como se pode observar, a utilização da função **getchar()** evita a presença do formato de leitura(%c), pois o **scanf()** é uma função genérica de leitura, enquanto o **getchar** é uma função especificamente dedicada à leitura de caracteres. Como a variável não é passada como parâmetro à função **getchar**, não precisa ser precedida pelo **&**.

O tratamento de caracteres pode, no entanto, apresentar algumas surpresas. Observe com atenção o se-
guinte exemplo.

**Exemplo:** Escreva um programa que solicite, através da função scanf, um caractere ao usuário e, em se-
guida, peça outro. Depois de introduzidos ambos os caracteres, tal programa deverá mostrar os dois ca-
racteres lidos entre aspas simples.

**É muito importante experimentar o seguinte programa!**

**prog0212.c**

```
    #include <stdio.h>

    int main()
    {
        char ch1, ch2;

        printf ("Introduza um Caractere: ");
        scanf("%c", &ch1);
        printf ("Introduza outro Caractere: ");
        scanf(" %c", &ch2);
        printf ("Os caracteres introduzidos foram '%c' e '%c'\n", ch1, ch2);    
    }
```

### Caracteres e Inteiros

Ao contrário da maioria das linguagens de programação, os caracteres em C não são mais do que valores inteiros guardados num único *byte*. Dessa forma, todas as operações anteriormente realizadas sobre os inteiros são também aplicadas ao tipo *char*.

Depois de declarada uma variável do tipoo *char*

    char ch;

existem diversas formas de colocar o caractere 'A' nessa variável.

**Exemplo:**

```
    ch = 'A';   /* Formato tradicional */
    ch = 65;    /* Formato cujo código ASCII é 65 */
    ch = '\101'     /* Caracter cujo código ASCII escrito em octal é 101 */
    ch = '\x41';    /* Caractere cujo código ASCII escrito em hexadecimal é 41 */
```

As quatro instruções anteriores são equivalentes, pois trabalhar em C com caracteres ou com o seu código
ASCII é exatamente o mesmo. Sendo o código ASCII de um caractere um valor numérico, podem ser rea-
lizadas com ele todas as operações que poderiam ser realizadas com um inteiro.

Observe agora o seguinte programa:

***prog0213.c***

```
    #include <stdio.h>

    int main()
    {
        char ch;

        printf ("Introduza um Caractere: ");
        scanf ("%c", &ch);
        printf ("O caractere '%c' tem o ASCII n° %d\n", ch, ch);
    }
```

Repare que declaramos uma única variável do tipo *char*.

Fazemos a sua leitura através da função *scanf*(podia-se ter feito ***ch = getchar();***).

Em seguida vamos escrever o caractere lido (%c) e também o seu código ASCII, que é armazenado internamente como se tratasse de um inteiro, embora ocupe só um *byte*.

![](./imagens/caracteres3.png)

Como se pode observar, o valor contido dentro da variável ch é escrito uma vez com o formato de caractere %c, mostrando o desenho do caractere, e na outra vez com o formato de inteiro %d mostrando o inteiro armazenado na variável ch (o seu código ASCII).

Embora esse programa funcione bem, não está escrito corretamente, pois oprintfestá esperando dois va-
lores,

![](./imagens/caracteres4.png)

um valor do tipo *char* para colocar em %c e outro do tipo int para colocar em %d. Mas no local das variáveis são enviados dois caracteres, e não um caractere e um inteiro, como seria de se esperar.

##### (Casting)

*Nota:*

```
    Sempre que numa variável ou expressão temos um valor de um determinado tipo e queremos modificar o tipo desse valor, alterando-o para um tipo maior ou para um tipo mais baixo, podemos indicar o tipo ao qual queremos "promover" esse valor colocando o tipo pretendido entre parênteses antes do valor.
```

No exemplo anterior, o que queriamos era o que terceiro parâmetro passado à função ***printf*** fosse do tipo ***int***, e não do tipo *char*. Para tal, devemos enviar não num caractere, mas antes o seu valor armazenado num inteiro, colocando antes de variável o prefixo (`int`), promovendo o valor da variável **temporariamente** a inteiro antes de ser enviado para o *printf*.

![](./imagens/caracteres5.png)

Nesse caso já existe correspondência entre os formatos de escrita e os tipos dos valores enviados para a
função *printf*.

![](./imagens/caracteres6.png)

**Exemplo:** Escreva um programa que solicite um inteiro (entre 0 e 255) ao usuário e mostre o inteiro se-
guinte e o caractere correspondente.

***prog0214.c***

```
    #include <stdio.h>

    int main()
    {
        int num;

        printf("Introduza um Inteiro: ");
        scanf("%d", &num);
        printf("Foi introduzido %d cujo caractere = '%c'\n", num, (char) num);
        printf("O caractere seguinte = '%c' tem o ASCII n° %d\n", (char) (num+1), num+1);
    }
```

Nesse exemplo, fazemos a leitura de um inteiro e vamos apresentar o caractere que ele tem armazenado.
Para escrevermos o seu código ASCII bastará escrever o próprio inteiro num. Para escrever o caractere
cujo código está guardado em num, bastará escrever esse valor com o formato %c. É, no entanto, aconselhável alterar a variável temporariamente de (int) para (char), de forma a serem enviados parâmetros dos
tipos correspondentes aos formatos de escrita do printf.

Para escrever o caractere seguinte e o seu respectivo código ASCII bastará somar uma unidade ao valor
armazenado em *num* e enviá-lo para *printf*, escrevendo-o também duas vezes com os formatos %c e %d.

Note que, no último *printf*, **num+1** aparece entre parênteses **(num+1)**, de forma que o resultado da soma
de **num+1** seja ***“promovido”*** a *char*.

### Formatos de leitura e Escrita (Resumo)

| **Tipo** | **Formato** | **Observações** |
|----------|-------------|-----------------|
|`char`| %c| Um único **caractere**|
|`int`|%d ou %i | Um inteiro (Base decimal) |
|`int`|%o|Um inteiro (Base octal) |
|`int`|%x ou %X| Um short inteiro (Base decimal) |
|`short int`|%hd|  Um short inteiro (Base decimal) |
|`long int`|%ld|Um long inteiro (Base decimal)|
|`unsigned short int`|%hu|short inteiro positivo|
|`unsigned int`|%u|inteiro positivo|
|`unsigned long int`|%lu|long inteiro positivo|
|`float`|%f ou %e ou %E| |
|`double`|%f ou %e ou %E| |
