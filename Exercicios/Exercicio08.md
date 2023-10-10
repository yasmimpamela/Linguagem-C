/*FaÃ§a um programa que mostre os oito primeiros termos da 
sequÃªncia de Finonacci.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    int i, ant1, ant2, atual;
    ant1 = 1;
    ant2 = 0;

    printf("Série de Fibonaccci (8 primeiros números:)\n");
    printf("%d", ant2);
    printf("%d", ant1);

    for ( i = 3; i <= 8; i++){
        atual = ant1+ ant2;
        printf("%d", atual);
        ant2 = ant1;
        ant1 = atual;
    }
}