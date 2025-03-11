#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 30

void inverterString(char *string);

int main(){

    char string[TAM];
    int tamString = 0;

    do{
    printf("Digite uma palavra de até %d letras: ", TAM);
    scanf("%[^\n]",string);
    getchar();
    }while(strlen(string) > TAM);

    printf("Palavra Inicial : %s\n",string);
    
    inverterString(string);

    printf("Inversão: %s", string);

    return 0;
}

void inverterString(char *string){
    
    int tam = strlen(string);
    for(int i = 0; i < tam/2; i++){
       char temp = string[i];
       string[i] = string[tam - i - 1];
       string[tam - i - 1] = temp;
    }
    
}
