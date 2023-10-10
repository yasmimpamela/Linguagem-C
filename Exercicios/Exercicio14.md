/*Faça um programa que seja capaz de armazenar os dados de três pessoas:
Nome, Idade, Peso e Altura. Ao final, o algoritmo deve mostrar, na tela, 
o nome e a idade da primeira pessoa e o peso e a altura da ultima pessoa.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct t_pessoa
{
    char nome[200];
    int idade;
    float peso, altura;
};

    int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    struct t_pessoa lista[3];
    int i;

    for ( i = 0; i < 3; i++){
    
    printf("Insira o nome da pessoa da posição %d:\n", i);
    scanf("%199[^\n]s", &lista[i].nome);
    fflush(stdin);
    printf("Insira a idade da pessoa na posição %d:\n", i);
    scanf("%d", &lista[i].idade);
    fflush(stdin);
    printf("Insira o peso da pessoa da posição %d:\n", i);
    scanf("%f", &lista[i].peso);
    fflush(stdin);
    printf("Insira a altura da pessoa da posição %d:\n", i);
    scanf("%f", &lista[i].altura);
    fflush(stdin);
    }
    
    printf("Nome da primeira pessoa: %s.\n", lista[0].nome);
    printf("Idade da primeira pessoa: %d.\n", lista[0].idade);
    printf("Peso da primeira pessoa: %.2f.\n", lista[2].peso);
    printf("Altura da primeira pessoa: %.2f.\n", lista[2].altura);
}