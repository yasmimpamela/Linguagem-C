/* Desenvolva um algoritmo que simule uma calculadora.
Você deve dar a opção de o usuário escolher entre:
1 - somar; 2 - Subtrair; 3 - Multiplicar; 4 - Dividir.
O usuário só conseguirá processar dois números inteiros por vez.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int op;
    float n1, n2, res;

    printf("Digite 1 para somar:\n");
    printf("Digite 2 para subtrair:\n");
    printf("Digite 3 para multiplicar:\n");
    printf("Digite 4 para dividir:\n");
    scanf("%d", &op);

    printf("Insira o primeiro numero:\n");
    scanf("%f", &n1);
    printf("Insira o segundo numero:\n");
    scanf("%f", &n2);

    if (op == 1){
        res = n1 + n2;
        printf("soma: %f.\n", res);
    }
    if (op == 2)
    {
        res = n1 - n2;
        printf("subtr: %f.\n", res);
    }
     if (op == 3)
    {
        res = n1 * n2;
        printf("Mult: %f.\n", res);
    }
     if (op == 4)
    {
        res = n1 / n2;
        printf("Div: %f.\n", res);
    }
}