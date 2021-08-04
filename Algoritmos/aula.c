#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    char nome[30];
    char endereco[30];
    int idade;  

    printf("Informe seu nome: \n");
    scanf("%s", &nome);

    printf("Informe o endereço: \n");
    scanf("%s", &endereco);

    printf("Informe sua idade: \n");
    scanf("%i",&idade);

    printf("\nOlá, prazer em conhecê-lo, %s",nome);
    printf("\nEntão você mora no endereço: %s", endereco);
    printf("\nE tem %i",idade);
    printf(" anos. \n");

    return 0;
}