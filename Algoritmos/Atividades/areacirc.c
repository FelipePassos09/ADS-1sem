#include <stdio.h>
#include <math.h>

int main() 
{
    char nome[30];
    float raio, pi, area, potencia;

    printf("Informe o raio  do circulo a ser calculado:\n");
    scanf("%2f", &raio);

    pi = 3.1415;
    
    potencia = pow(raio, 2);
    area = pi * potencia;

    printf("A área do circulo é: %.2f", area);
    printf("\n");

    return 0;
}

// A fórmula para o círculo é A = pi * r², no caso as variáveis criadas foram: raio, pi e area, com um input para o raio a ser definido como parâmetro de cálculo.