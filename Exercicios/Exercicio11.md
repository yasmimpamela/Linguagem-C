/* sabe-se que o quilowatt de energia custa um milésimo do salário mínimo.
Faça um procedimento que receba o valor do salário mínimo e quantidade de
quilowatts consumidapor uma residência.
O procedimento deve calcular e retornar através de passagem de parâmetros
por referência:


a) o valor, em reais, de cada quilowatts;
b) o valor, em reais, a ser pago por essa residência;
c) o valor, em reais, a ser pago com desconto de 15%.

Sabendo disso, desenvolva um algoritmo que peça para o usuário inserir o
valor do salário mínimo e a quantidade de quilowatts consumida.
Invoque o respectivo procedimento e mostre, na tela, as informações 
dos itens a), b), c).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calckw(float v_sal, float q_kw, float *v_kw, float *v_rs, float *v_desc){
    *v_kw = v_sal / 1000;
    *v_rs = *v_kw * q_kw;
    *v_desc = *v_rs * 0.85; 
}

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    float val_salario, quantidade_kw, valor_kw, valor_reais, val_desconto;

    printf("Insira o sal�rio m�nimo:\n");
    scanf("%f", &val_salario);
    printf("Insira a quantidade de KW gastos:\n");
    scanf("%f", &quantidade_kw);

    calckw(val_salario, quantidade_kw, &valor_kw, &valor_reais, &val_desconto);

    printf("valor de 1 KW (em R$): %.2f.\n", valor_kw);
    printf("Valor a ser pago pela resid�ncia (em R$): %.2f.\n", valor_reais);
    printf("Valor com desconto (em R$): %.2f.\n", val_desconto);

    return 0;
}