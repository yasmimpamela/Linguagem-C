/* Faça um programa que receba o número de horas trabalhadas por um gestor e o
valor do salário mínimo vingente. crie uma função que calcule o salároio 
a receber do gestor, seguindo as regras abaixo:

I - a hora trabalhada vale a metade do salário mínimo;
II - o salário bruto equivale ao número de horas trabalhadas multiplicado
pelo valor da hora trabalhada;
III - o imposto equivale a 3% do sálario bruto;
IV - o salárioa receber equivale ao salário bruto menos o imposto

Crie um algoritmo que invoque a sequinte função e mostre o solário a recebe.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcSalRec( float numero_hrs, float salario_min){
    float hrs_trabalhadas, salario_bruto, imposto, salario_recebido;
    hrs_trabalhadas = salario_min / 2.0;
    salario_bruto = numero_hrs * hrs_trabalhadas;
    imposto = salario_bruto * 3/100;
    salario_recebido = salario_bruto - imposto;
    return salario_recebido;
}

int main(){
     setlocale(LC_ALL, "Portuguese_Brazil");

     float horas_trab, sal_min, sal_recb;

     printf("Insira o n�mero de horas trabalhadas:\n");
     scanf("%f", &horas_trab);
     printf("Insira o sal�rio m�nimo:\n");
     scanf("%f", &sal_min);

     sal_recb = calcSalRec(horas_trab, sal_min);

     printf("Sal�rio a receber: R$ %.2f.\n", sal_recb);
}
