#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *prox;
} no;

no *inserir_inicio(no *head, int valor);
no *inserir_final(no *head, int valor);
void imprimir_lista(no *head);

int main() {
    no *head = NULL;
    int menu = 1;

    while (menu) {
        int opcao, valor;
        printf("\nQUAL OPÇÃO DESEJA?\n 0- Sair\n 1- Inserir no início\n 2- Inserir no Final\n 3- Imprimir\n ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                menu = 0;
                break;
            case 1:
                printf("Digite o valor: ");
                scanf("%d", &valor);
                head = inserir_inicio(head, valor);
                break;
            case 2:
                printf("Digite o valor: ");
                scanf("%d", &valor);
                head = inserir_final(head, valor);
                break;
            case 3:
                imprimir_lista(head);
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    }

    return 0;
}

no *inserir_inicio(no *head, int valor) {
    no *novo = (no*)malloc(sizeof(no));
    if (novo == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    novo->valor = valor;
    novo->prox = head;
    return novo;
}

no *inserir_final(no *head, int valor) {
    no *novo = (no*)malloc(sizeof(no));
    if (novo == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    novo->valor = valor;
    novo->prox = NULL;

    if (head == NULL) {
        return novo;
    }

    no *temp = head;
    while (temp->prox != NULL) {
        temp = temp->prox;
    }
    temp->prox = novo;
    return head;
}

void imprimir_lista(no *head) {
    no *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->valor);
        temp = temp->prox;
    }
    printf("NULL\n");
}
