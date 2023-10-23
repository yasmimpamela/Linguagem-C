#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define max_clients 50
#define max_page 5

struct Client {
    char name[50];
    int age;
    char cpf[15];
    char email[50];
};
//Estrutura para cadastrar um cliente
void createClient(struct Client clients[], int *totalclients) {
    if (*totalclients < max_clients) {
        struct Client newClient;
        printf("Adicione o nome do cliente:\n");
        scanf("%s", newClient.name);
        printf("Adicione a idade do cliente:\n");
        scanf("%d", &newClient.age);  
        printf("Adicione o CPF do cliente:\n");
        scanf("%s", newClient.cpf);
        printf("Adicione o email do cliente:\n");
        scanf("%s", newClient.email);
        clients[*totalclients] = newClient;
        (*totalclients)++;
        printf("Cliente criado com sucesso!\n");
    } else {
        printf("Capacidade máxima de clientes atingida!\n");
    }
}
//Estrutura para editar cadastros
void editClient(struct Client clients[], int totalClients) {
    char name[50];
    int found = 0;

    printf("Digite o nome do cliente que você deseja editar:\n");
    scanf("%s", name);

    for (int i = 0; i < totalClients; i++) {
        if (strcmp(clients[i].name, name) == 0) {
            printf("Adicione o novo nome do cliente:\n");
            scanf("%s", clients[i].name);

            printf("Adicione a nova idade do cliente:\n");
            scanf("%d", &clients[i].age);

            printf("Adicione o novo CPF do cliente:\n");
            scanf("%s", clients[i].cpf);

            printf("Adicione o novo email do cliente:\n");
            scanf("%s", clients[i].email);

            printf("Cadastro do cliente editado com sucesso!\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Cliente não encontrado!\n");
    }
}
//Estrutura para lista de clientes
void displayClients(struct Client clients[], int totalClients, int currentPage, int itemsPerPage) {
    int start = (currentPage - 1) * itemsPerPage;
    int end = start + itemsPerPage;

    if (start < totalClients) {
        printf("\nClients (Page %d):\n", currentPage);
        for (int i = start; i < end && i < totalClients; i++) {
            printf("Name: %s, Age: %d, CPF: %s, Email: %s\n", clients[i].name, clients[i].age, clients[i].cpf, clients[i].email);
        }
    }

    printf("\n      PÁGINA %d DE %d     \n\n", currentPage, (totalClients + itemsPerPage - 1) / itemsPerPage);

    printf("Pressione 'P' para ir à próxima página, 'A' para a página anterior ou qualquer outra tecla para retornar ao menu inicial:");

    char option;
    scanf(" %c", &option);  

    if (option == 'P' || option == 'p') {
        currentPage++;

        if (end >= totalClients) {
            currentPage--;
        }
    } else if (option == 'A' || option == 'a') {
        currentPage--;

        if (currentPage < 1) {
            currentPage++;
        }
    } else {
        printf("\nPágina não encontrada.\n");
    }
}
// Estrutura para excluir cliente
void deleteClient(struct Client clients[], int *totalClients) {
    char name[50];
    int found = 0;

    printf("Digite o nome do cliente que você deseja excluir:\n");
    scanf("%s", name);

    for (int i = 0; i < *totalClients; i++) {
        if (strcmp(clients[i].name, name) == 0) {
            for (int j = i; j < *totalClients - 1; j++) {
                clients[j] = clients[j + 1]; 
            }
            (*totalClients)--;
            found = 1;
            printf("Cliente excluído com sucesso!\n");
            break;
        }
    }
    if (!found) {
        printf("Cliente não encontrado!\n");
    }
}
// Função principal
int main() {
    setlocale(LC_ALL, "Portuguese_brazil");

    struct Client clients[max_clients];

    int totalClients = 0;
    int choice;
    int currentPage = 1;
    int itemsPerPage = 10;

    do {
        printf("\n         MENU       \n\n:");
        printf("1. Cadastrar novo cliente\n");
        printf("2. Editar informações do cliente\n");
        printf("3. Lista de clientes\n");
        printf("4. Excluir cadastro\n");
        printf("5. Sair\n");
        printf("Escolha uma opção:\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createClient(clients, &totalClients);
            case 2:
                editClient(clients, totalClients);
                break;  
            case 3:                
                displayClients(clients, totalClients, currentPage, itemsPerPage);
                break;
            case 4:
                deleteClient(clients, &totalClients);
                break;
            case 5:
                printf("Encerrando programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (choice != 5);

    return 0;
}

