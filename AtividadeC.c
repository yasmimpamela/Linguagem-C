/* Enigma de Martin Gardner

*Persistência de um número é o número de passos necessérios para reduzi-lo a um único dígito multiplicando todos 
os seus algarismos para obter um segundo número, depois multiplicando todos os dígitos deste número para se obter
um terceiro número, e assim por diante, até que um número de um dígito é obtido. Por exemplo, 77 tem uma persistência 
de quatro, porque requer quatro etapas para reduzi-lo a um dígito: 77-49-36-18-8. O menor número de persistência 
de 1 é 10, o menor de persistência 2 é 25, o menor de persistência 3 é 39, e o menor de persistência 4 é 77.*

**Crie um algoritmo em C, que obtenha o menor número de persistência cinco!*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calculatePersistenceOfNumber(int n){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int persistence = 0;
// Usando o do-while para que ele repita a conta até achar o número desejado
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
    int num = 10; // Usando 10 como número de inicio pós é o menor número com dois dígitos

    while (calculatePersistenceOfNumber(num) != targetPersistence) {
        num++;
    }

    return num;
}

int main(){
    int targetPersistence = 5;
    int result = findNumberWithPersistence(targetPersistence);

    printf("O menor número de persitência %d é: %d\n", targetPersistence, result);

    return 0;
}
// 679-378-168-48-32-6