/*Desenvolva um algoritmo que some todos os números inteiros
compreendidos entre 1 e 10 (inclusive).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int soma, i;

    soma = 0;

    for ( i = 1; i <= 10; i++){
       soma = soma + i;
    }
    
    printf("Soma: %d.\n", soma);

}