#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float media(float x, float y);

typedef struct Aluno{
    char nome[50];
    float notaMat;
    float notaFis;
    float media;
} Aluno;

int main(){
    Aluno aluno1;
    Aluno aluno2;
    Aluno aluno3;

    printf("Informe o nome do Aluno 1:\n ");
    scanf("%[^\n]s", aluno1.nome);
    getchar();
    printf("Informe a nota de fisica do Aluno 1:\n ");
    scanf("%f", &aluno1.notaFis);
    printf("Informe a nota de matematica do Aluno 1:\n ");
    scanf("%f", &aluno1.notaMat);
    aluno1.media = media(aluno1.notaFis, aluno1.notaMat);

    getchar();
    printf("Informe o nome do Aluno 2:\n ");
    scanf("%[^\n]s", aluno2.nome);
    getchar();
    printf("Informe a nota de fisica do Aluno 2:\n ");
    scanf("%f", &aluno2.notaFis);
    printf("Informe a nota de matematica do Aluno 2:\n ");
    scanf("%f", &aluno2.notaMat);
    aluno2.media = media(aluno2.notaFis, aluno2.notaMat);

    getchar();
    printf("Informe o nome do Aluno 3:\n ");
    scanf("%[^\n]s", aluno3.nome);
    getchar();
    printf("Informe a nota de fisica do Aluno 3:\n ");
    scanf("%f", &aluno3.notaFis);
    printf("Informe a nota de matematica do Aluno 3:\n ");
    scanf("%f", &aluno3.notaMat);
    aluno3.media = media(aluno3.notaFis, aluno3.notaMat);

    printf("\n");
    printf("Resultado dos alunos:\n");
    printf("Aluno 1:\n");
    printf("Nome: %s\n", aluno1.nome);
    printf("Nota de Física: %.2f\n", aluno1.notaFis);
    printf("Nota de Matemática: %.2f\n", aluno1.notaMat);
    printf("Média: %.2f\n", aluno1.media);

    printf("\n");
    printf("Aluno 2:\n");
    printf("Nome: %s\n", aluno2.nome);
    printf("Nota de Física: %.2f\n", aluno2.notaFis);
    printf("Nota de Matemática: %.2f\n", aluno2.notaMat);
    printf("Média: %.2f\n", aluno2.media);

    printf("\n");
    printf("Aluno 3:\n");
    printf("Nome: %s\n", aluno3.nome);
    printf("Nota de Física: %.2f\n", aluno3.notaFis);
    printf("Nota de Matemática: %.2f\n", aluno3.notaMat);
    printf("Média: %.2f\n", aluno3.media);

    return 0;
}

float media(float x, float y){
    float med = (x + y) / 2;
    return med;
}
