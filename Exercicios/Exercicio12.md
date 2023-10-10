/* Faça um programa que carregue um vetor e nove elementos
numéricos inteiros, calcule e mostre os números primos e 
suas respectivas posições...*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int vet[9], i, j, cont;

    for (i=0; i<9; i++){
        printf("Insira um número inteiro:\n");
    scanf("%d", &vet[i]);
    }
    
    for ( j = 1; j <= vet[i]; j++){
        cont = 0;
        if (vet[i] % j == 0){
            cont++;
        }
    }
    if (cont == 2){
        printf("%d é primo, posição: i.\n", vet[i], i);
    }
}