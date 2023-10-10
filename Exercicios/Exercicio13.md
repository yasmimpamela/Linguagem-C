/*Desemvova um algoritmo que preencha uma matriz num�rica de dimens�es 3x3.
Ap�s preencher toda a matriz, o usu�rio deve inserir uma chave de busca x.
Caso exista algum n�mero igual a x, dentro da matriz, o algoritmo deve mostrar,
na tela, os �ndices da linha e da coluna da posis�o na qual x foi encontrado
pela primeira vez. Caso contr�rio, o algoritmo deve se encerrar com uma
�nica mensagem, dizendo "Chave n�o encontrada."...*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portugue_Brazil");

    int mat[3][3];
    int i, j, x, lin, col, achou;

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            printf("Insira o elemento da linha %d, coluna %d:\n");
            scanf("%d", &mat[i][j]);    
            }
    }
    printf("Insira a chave de busca:\n");
    scanf("%d", &x);

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            if (mat[i][j] == x){
                achou = 1;
                lin = i;
                col = j;
                break;
            }
            if (achou == 1){
                break;
            }
            if (achou == 1){
                 printf("O elemento %d foi encontrado na linha %d, coluna %d.\n", x, i, j);
            } else{
                printf("Chave n�o encontrada: \n");}
        }
    }
}