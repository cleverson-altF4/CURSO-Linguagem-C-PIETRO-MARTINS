/*Crie um menu com as opções:
1. Celsius para Fahrenheit
2. Fahrenheit para Celsius
3. Sair*/
//Fórmula: F = (C * 9/5) + 32


        
#include <stdio.h>

int main() {
    int opcao = 0;
    float celsius = 0.0, fahr = 0.0;
    
    do {
        printf("\n###### Conversor de Temperatura ######\n");
        printf(" 1 - Celsius para Fahrenheit\n");
        printf(" 2 - Fahrenheit para Celsius\n");
        printf(" 3 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        // Limpar o buffer do teclado
        while (getchar() != '\n');

        switch (opcao) {
            case 1:
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &celsius);
                fahr = (celsius * 9.0/5.0) + 32.0;
                printf("%.2f °C = %.2f °F\n", celsius, fahr);
                break;
                
            case 2:
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &fahr);
                celsius = (fahr - 32.0) * 5.0/9.0;
                printf("%.2f °F = %.2f °C\n", fahr, celsius);
                break;
                
            case 3:
                printf("Saindo...\n");
                break;
                
            default:
                printf("Opção inválida! Digite 1, 2 ou 3.\n");
                break;
        }
        
       
        while (getchar() != '\n');
        
    } while (opcao != 3);

    return 0;
}