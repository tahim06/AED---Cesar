#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 30

void inverterStringRecursivo(char string[],int inicio, int fim);

int main(){

    char string[TAM];
    int tamString = 0;

    do{
    printf("Digite uma palavra de até %d letras: ", TAM);
    scanf("%[^\n]",string);
    getchar();
    }while(strlen(string) > TAM);

    int inicio = 0, fim = strlen(string) - 1;

    printf("Palavra Inicial : %s\n",string);
    
    inverterStringRecursivo(string,inicio,fim);

    printf("Inversão: %s", string);

    return 0;
}

void inverterStringRecursivo(char string[],int inicio, int fim){

    if(inicio >= fim){
        return;
    }
    char temp = string[inicio];
    string[inicio] = string[fim];
    string[fim] = temp;
    inverterStringRecursivo(string,inicio + 1, fim - 1);
    
}
