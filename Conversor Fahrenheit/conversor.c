/*Crie um menu com as opções:
1. Celsius para Fahrenheit
2. Fahrenheit para Celsius
3. Sair*/
//Fórmula: F = (C * 9/5) + 32

#include <stdio.h>

int main(){
    int opcao;
    float celsius, fahr;
    do
    {
        printf("\n###### Conversor  Fahrenheit ######\n ");
        printf(" 1 - Celsius para Fahrenheit\n");
        printf(" 2 - Fahrenheit para Celsius\n");
        printf(" 3 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite um número em Celsius: ");
            scanf("%f", &celsius);
            fahr = (celsius * 9.0/5.0)+32.0;
            printf("celsius, °C = %.2f °F", fahr);
            break;

        case 2:
            printf("Digite um valor em Fahrenheit");
            scanf("%f", &fahr);
            celsius = (fahr - 32.0) * 5.0/9.0;
            printf("Para fahreinheit °F = %.2f\n", celsius);
            break;
        
        case 3:
            printf("Digite 0 p/ sair");
            break;
        default:
            printf("burro!");
            break;
        }


    } while (opcao != 0);

    if (opcao != 3)
    {
        getchar();
    }
    

    return 0;
        
}