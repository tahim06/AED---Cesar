#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *esquerda;
    struct No *direita;
} no;

no *criarNo(int valor);
void preOrdem(no* raiz);
void emOrdem(no* raiz);
void posOrdem(no* raiz);

int main(){
    int raizValor, esquerdaValor, direitaValor, esquerdaDireitaValor;
    
    printf("Digite o valor da raiz: ");
    scanf("%d", &raizValor);
    printf("Digite o valor do filho esquerdo da raiz: ");
    scanf("%d", &esquerdaValor);
    printf("Digite o valor do filho direito da raiz: ");
    scanf("%d", &direitaValor);
    printf("Digite o valor do filho esquerdo do filho direito da raiz: ");
    scanf("%d", &esquerdaDireitaValor);
    
    no* raiz = criarNo(raizValor);
    raiz->esquerda = criarNo(esquerdaValor);
    raiz->direita = criarNo(direitaValor);
    raiz->direita->esquerda = criarNo(esquerdaDireitaValor);
    
    printf("Pré-Ordem:\n");
    preOrdem(raiz);
    printf("\nEm-Ordem:\n");
    emOrdem(raiz);
    printf("\nPós-Ordem:\n");
    posOrdem(raiz);
    printf("\n");
    
    free(raiz->direita->esquerda);
    free(raiz->direita);
    free(raiz->esquerda);
    free(raiz);
    
    return 0;
}

no *criarNo(int valor){
    no *novoNo = (no*)malloc(sizeof(no));
    if (novoNo == NULL) {
        printf("Erro ao alocar memória.\n");
        return;
    }
    novoNo->valor = valor;
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;
    return novoNo;
}

void preOrdem(no* raiz){
    if(raiz != NULL){
        printf("%d ", raiz->valor);
        preOrdem(raiz->esquerda);
        preOrdem(raiz->direita);
    }
}

void emOrdem(no* raiz){
    if(raiz != NULL){
        emOrdem(raiz->esquerda);
        printf("%d ", raiz->valor);
        emOrdem(raiz->direita);
    }
}

void posOrdem(no* raiz){
    if(raiz != NULL){
        posOrdem(raiz->esquerda);
        posOrdem(raiz->direita);
        printf("%d ", raiz->valor);
    }
}