/* Enigma de Martin Gardner

*Persist�ncia de um n�mero � o n�mero de passos necess�rios para reduzi-lo a um �nico d�gito multiplicando todos 
os seus algarismos para obter um segundo n�mero, depois multiplicando todos os d�gitos deste n�mero para se obter
um terceiro n�mero, e assim por diante, at� que um n�mero de um d�gito � obtido. Por exemplo, 77 tem uma persist�ncia 
de quatro, porque requer quatro etapas para reduzi-lo a um d�gito: 77-49-36-18-8. O menor n�mero de persist�ncia 
de 1 � 10, o menor de persist�ncia 2 � 25, o menor de persist�ncia 3 � 39, e o menor de persist�ncia 4 � 77.*

**Crie um algoritmo em C, que obtenha o menor n�mero de persist�ncia cinco!*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calculatePersistenceOfNumber(int n){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int persistence = 0;
// Usando o do-while para que ele repita a conta at� achar o n�mero desejado
    do {
        int result = 1;
        while (n > 0) {
            result *= n % 10;
            n /= 10;
        }
        n = result;
        persistence++;
    } while (n >= 10);

    return persistence;
}

int findNumberWithPersistence(int targetPersistence){
    int num = 10; // Usando 10 como n�mero de inicio p�s � o menor n�mero com dois d�gitos

    while (calculatePersistenceOfNumber(num) != targetPersistence) {
        num++;
    }

    return num;
}

int main(){
    int targetPersistence = 5;
    int result = findNumberWithPersistence(targetPersistence);

    printf("O menor n�mero de persit�ncia %d �: %d\n", targetPersistence, result);

    return 0;
}
// 679-378-168-48-32-6