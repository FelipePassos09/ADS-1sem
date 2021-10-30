#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int list[3]={21, 36, 19};
    int total = 0;
    int value;

    while (total < 3)
    {
        printf("\nInsira um valor: ");
        scanf("%d", &list[total]);

        ///ist[total] = value;//
        
        printf("\nO valor inserido foi: %i", list[total]);

        total++;

    };

    printf("\n\n\nOs valores inseridos foram: ");
    for (int i = 0; i < 3; i++){
 
    
        if(i<2) {
        printf("%i, ", list[i]);
        } else {
            printf("e %i.", list[i]);
        };

    };

    printf("\n\nTenha um bom dia!");
    
    return 0;
}

