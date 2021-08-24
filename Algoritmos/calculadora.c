#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "Portuguese");

    int menu, cont, check, lim;
    float num1, num2, resp, oc;

    printf("\nBem vindo á nossa calculadora em C.\n");

    do{
        printf("As opções são:\n [ 1 ] soma.\n [ 2 ] subtração.\n [ 3 ] divisão\n [ 4 ] multiplicação\n");
        printf(" [ 5 ] potência\n [ 6 ] raiz\n [ 7 ] média\n [ 8 ] \n [ 9 ] \n");
        printf("\nEscolha a operação que deseja realizar:\n");
        scanf("%d", &menu);

        oc = 0;

        if(menu == 1){
            printf("\nInforme o primeiro número: ");
            scanf("%f", &num1);
            printf("\nInforme o número que deseja somar: ");
            scanf("%f", &num2);

            resp = (num1 + num2);
            printf("A soma entre %.2f e %.2f � %.2f.", num1,num2,resp);
        };
        if(menu == 2){
            printf("\nInforme o primeiro n�mero: ");
            scanf("%f", &num1);
            printf("\nInforme o número que deseja subtrair: ");
            scanf("%f", &num2);

            resp = (num1 - num2);
            printf("A subtração entre %.2f e %.2f é:\n %.2f.", num1,num2,resp);
        };
        if(menu == 3){
            printf("\nInforme o dividendo: ");
            scanf("%f", &num1);
            printf("\nInforme o divisor: ");
            scanf("%f", &num2);

            resp = (num1 / num2);
            printf("A divisão entre %.2f e %.2f �: %.2f.", num1,num2,resp);
        };
        if(menu == 4){
            printf("\nInforme o primeiro fator: ");
            scanf("%f", &num1);
            printf("\nInforme o segundo fator: ");
            scanf("%f", &num2);

            resp = (num1 * num2);
            printf("O produto entre %.2f e %.2f �: %.2f.", num1,num2,resp);
        };
        if(menu == 5){
            printf("\nInforme a base: ");
            scanf("%f", &num1);
            printf("\nInforme o expoente: ");
            scanf("%f", &num2);

            resp = pow(num1,num2);
            printf("O resultado da potencia base %.2f e expoente %.2f �: \n%.2f.", num1,num2,resp);
        };
        if(menu == 6){
            printf("\nInforme o primeiro número: ");
            scanf("%f", &num1);
            printf("\nInforme o n�mero que deseja subtrair: ");
            scanf("%f", &num2);

            resp = (num1 - num2);
            printf("A subtração entre %.2f e %.2f � %.2f.", num1,num2,resp);
        };
        if(menu == 7){
            do{
                printf("\nInsira o número:\n");
                scanf("%f", &num1);
                oc = num1 + oc;
                lim++;
                printf("\nQuer continuar? \n[1]Sim\n[2]Não");
                scanf("%i", &check);
            
            }while(check == 1);
            resp = (oc / lim);
            printf("A foram inseridos %.0f números e a média deles foi: %.2f.", num1,resp);
        };
        if(menu == 8){
            printf("\nInforme o primeiro fator: ");
            scanf("%f", &num1);
            printf("\nInforme o segundo fator: ");
            scanf("%f", &num2);

            resp = (num1 * num2);
            printf("O produto entre %.2f e %.2f � %.2f.", num1,num2,resp);
        };
                if(menu == 9){
            printf("\nInforme o primeiro fator: ");
            scanf("%f", &num1);
            printf("\nInforme o segundo fator: ");
            scanf("%f", &num2);

            resp = (num1 * num2);
            printf("O produto entre %.2f e %.2f � %.2f.", num1,num2,resp);
        };

        printf("\n");
        printf("\nPara sair entre [ 99 ], para continuar entre [ 00 ]\n");
        scanf("%i", &cont);

    }while(cont != 99);
}
