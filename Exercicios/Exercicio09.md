/*Desenvolva um algoritmo que mostre a tabuada de todos os 
números inteiros compeendidos entre 1 e 1o (inclusive)*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    int i, j, res;

    for ( j = 1; j <= 10; j++){ 
        for ( i = 1; i <= 10; i++){
            res = j * i;
            printf("%d x %d = %d\n", j, i, res);
    }    
    printf("\n");
    }
    
}