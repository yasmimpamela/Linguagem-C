// Faça um programa que receba dois números e mostre o maior deles. Caso eles sejam iguais, deve-se mostrar a mensagem "Os números são iguais".

#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1, n2;

    printf("Insira o primeiro numero:\n");
    scanf("%f", &n1);
    printf("Insira o segundo numero:\n");
    scanf("%f", &n2);

    if (n1 > n2){
        printf("Maior:%f.\n", n1);
    }
    if (n1 < n2){
        printf("Maior:%f.\n", n2);
    }
    if (n1 == n2){
        printf("Os numeros sao iguais: \n");
    }    
}

