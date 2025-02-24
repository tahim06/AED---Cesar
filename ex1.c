#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Data{
    int dia;
    char mes[10];
    int ano;
} data;

typedef struct Funcionario{
    char nome[50];
    int idade;
    float salario;
    data dtNasc;
} Func;

int main(){
    Func colaboradores[3];

    for (int i = 0; i < 3; i++) {
        printf("Informe o nome do Funcionario %d: ", i + 1);
        fgets(colaboradores[i].nome, sizeof(colaboradores[i].nome), stdin);
        colaboradores[i].nome[strcspn(colaboradores[i].nome, "\n")] = '\0';  // Remove o '\n' do final

        printf("Informe a idade do Funcionario %d: ", i + 1);
        scanf("%d", &colaboradores[i].idade);

        printf("Informe o salario do Funcionario %d: ", i + 1);
        scanf("%f", &colaboradores[i].salario);

        printf("Informe o dia de nascimento do Funcionario %d: ", i + 1);
        scanf("%d", &colaboradores[i].dtNasc.dia);

        printf("Informe o mes de nascimento do Funcionario %d: ", i + 1);
        getchar();
        fgets(colaboradores[i].dtNasc.mes, sizeof(colaboradores[i].dtNasc.mes), stdin);
        colaboradores[i].dtNasc.mes[strcspn(colaboradores[i].dtNasc.mes, "\n")] = '\0';

        printf("Informe o ano de nascimento do Funcionario %d: ", i + 1);
        scanf("%d", &colaboradores[i].dtNasc.ano);

        getchar();
    }

    for (int i = 0; i < 3; i++) {
        printf("\nFuncionario %d:\n", i + 1);
        printf("Nome: %s\n", colaboradores[i].nome);
        printf("Idade: %d\n", colaboradores[i].idade);
        printf("Salario: %.2f\n", colaboradores[i].salario);  
        printf("Data de nascimento: %d/%s/%d\n", colaboradores[i].dtNasc.dia, colaboradores[i].dtNasc.mes, colaboradores[i].dtNasc.ano);
    }

    return 0;
}
