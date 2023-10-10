/*A nota final de um estudante é calculada a partir de três notas 
atribuídas respectvamente a um trabalho de laboratório, a uma avaliação
semestral e a um exame final. A média das três notas mencionadas
anteriormente obedece aos pesos a seguir

Nota                           peso
Trabalaho de Laboratório         2
Avaliação semestral              3
Exame Final                      5

Faça um programa que receba as três notas, calcule e, mostre a média
ponderada e o conceito que a tabela abaixo:

Média ponderada       Conceito
8,0 ~ 10,0               A
7,0 ~ 8,0                B
6,0 ~ 7,0                C
5,0 ~ 6,0                D
0,0 ~ 5,0                E*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    float trab, aval, exam, med;

    printf("Insira a nota do trabalho:\n");
    scanf("%f", &trab);
    printf("Insira a nota da Avaliação Semestral:\n");
    scanf("%f", &aval);
    printf("Insira a nota do Exame Final:\n");
    scanf("%f", &exam);

    med = (trab*2 + aval*3 + exam*5)/10;
    printf("Media: %.2f\n", med);

    if (med >= 8.0 && med < 10.0)
    {
        printf("Conceito A. \n");
    }

    if (med >= 7.0 && med < 8.0)
    {
        printf("Conceito B. \n");
    }
    
    if (med >= 6.0 && med < 7.0)
    {
        printf("Conceito C. \n");
    }

    if (med >= 5.0 && med < 6.0)
    {
        printf("Conceito D. \n");
    }

    if (med >= 0.0 && med < 5.0)
    {
        printf("Conceito E. \n");
    }
    system("pause");
}