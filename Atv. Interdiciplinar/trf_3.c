#include <stdio.h>
#include <math.h>

int main()
{
    int value_1[3], value_2[3], sum[4];
    
    printf("\nInforme o primeiro número a ser calculado:");
    scanf("%i", &value_1);

    printf("\nInforme o segundo número a ser calculado:");
    scanf("%i", &value_2);

    sum = (value_1 + value_2);    

    printf("O total da soma é: %i", sum);

    return 0;
}
