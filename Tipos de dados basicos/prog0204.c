/*******************************************
 * PROG:    Tipos de dados básicos         *
 * AUTOR:   Cláudio Kulembe                *
 * DATA:    16/05/2025                     *
 *******************************************/

#include <stdio.h>

/**
 * As variáveis declaradas do tipo float ou double são utilizadas para armazenar valores numéricos
 * com parte fracionária. São também frequentemente denominadas reais ou ponto flutuante (ex.: 3.14, 0.00000024514, 1.0).
*/

/**
 * A diferença entre uma variável do tipo float e uma outra do tipo double é o número de bytes que reserva
 * para armazenar o valor. A dimensão do float é normalmente de quatro bytes, enquanto a do double é de oito bytes.
 * Habitualmente pode-se dizer que esses tipos também armazenam números com precisão simples (float) ou com dupla precisão (double).
 */

 /**
  * Um flat pe representado por uma parte inteira e por outra decimal, separadas por um ponto (e não por uma vírgula -- como é
  * habitual em nosso uso do dia-a-dia).
 */


int main()
{
    /* Escreva um programa que calcule o perímetro e a área de uma circunferência.*/
    float raio, perimetro;
    double PI = 3.1415927, area;

    printf("Introduza o Raio da Circunferência: ");
    scanf("%f", &raio);
    area = PI * raio * raio;
    perimetro = 2 * PI * raio;

    printf("Área = %f\nPerímetro = %f\n", area, perimetro);

    /* O formato de leitura e escrita para números reais é %f */
}