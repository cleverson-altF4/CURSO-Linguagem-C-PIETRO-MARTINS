/*
 * MINI PROJETO: Definição e Representação de Algoritmos
 * Autor: Curso de Linguagem C - Pietro Martins
 * Descrição: Projeto educacional para iniciantes sobre conceitos básicos de algoritmos
 *
 * CONCEITOS ABORDADOS:
 * 1. O que é um algoritmo
 * 2. Representação em pseudocódigo
 * 3. Representação em fluxograma (conceitual)
 * 4. Implementação em C
 * 5. Exemplos práticos progressivos
 */

#include <stdio.h>
#include <stdlib.h>

// =============================================================================
// PARTE 1: CONCEITOS BÁSICOS
// =============================================================================

/*
 * DEFINIÇÃO DE ALGORITMO:
 * Um algoritmo é uma sequência finita de instruções bem definidas e não ambíguas,
 * cada uma das quais pode ser executada mecanicamente em um período de tempo finito.
 *
 * CARACTERÍSTICAS DE UM BOM ALGORITMO:
 * - Finitude: Deve terminar após um número finito de passos
 * - Definição: Cada passo deve ser preciso e inequívoco
 * - Entrada: Pode ter zero ou mais entradas
 * - Saída: Deve produzir pelo menos uma saída
 * - Efetividade: Cada operação deve ser básica o suficiente para ser executada
 */

// =============================================================================
// PARTE 2: PRIMEIRO ALGORITMO - SOMA DE DOIS NÚMEROS
// =============================================================================

/*
 * ALGORITMO EM PSEUDOCÓDIGO:
 *
 * INÍCIO
 *   ESCREVA "Calculadora Simples - Soma de Dois Números"
 *   ESCREVA "Digite o primeiro número: "
 *   LEIA numero1
 *   ESCREVA "Digite o segundo número: "
 *   LEIA numero2
 *   resultado = numero1 + numero2
 *   ESCREVA "A soma é: ", resultado
 * FIM
 *
 * FLUXOGRAMA (conceitual):
 *   [INÍCIO] → [Exibir mensagem] → [Ler numero1] → [Ler numero2]
 *   → [Calcular soma] → [Exibir resultado] → [FIM]
 */

void exemplo1_soma_basica()
{
    printf("\n=== EXEMPLO 1: SOMA DE DOIS NUMEROS ===\n");
    printf("Calculadora Simples - Soma de Dois Numeros\n");

    float numero1, numero2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    resultado = numero1 + numero2;
    printf("A soma e: %.2f\n", resultado);

    printf("Pressione ENTER para continuar...");
    getchar(); // Limpa o buffer
    getchar(); // Aguarda ENTER
}

// =============================================================================
// PARTE 3: ALGORITMO COM ESTRUTURA CONDICIONAL
// =============================================================================

/*
 * ALGORITMO EM PSEUDOCÓDIGO:
 *
 * INÍCIO
 *   ESCREVA "Verificador de Número Par ou Ímpar"
 *   ESCREVA "Digite um número: "
 *   LEIA numero
 *   resto = numero % 2
 *   SE resto = 0 ENTÃO
 *       ESCREVA "O número é PAR"
 *   SENÃO
 *       ESCREVA "O número é ÍMPAR"
 *   FIMSE
 * FIM
 *
 * FLUXOGRAMA (conceitual):
 *   [INÍCIO] → [Ler numero] → [Calcular resto] → [resto = 0?]
 *   → [É PAR] → [FIM]
 *   └→ [É ÍMPAR] → [FIM]
 */

void exemplo2_par_impar()
{
    printf("\n=== EXEMPLO 2: VERIFICADOR PAR OU IMPAR ===\n");
    printf("Verificador de Numero Par ou Impar\n");

    int numero, resto;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    resto = numero % 2;

    if (resto == 0)
    {
        printf("O numero %d e PAR\n", numero);
    }
    else
    {
        printf("O numero %d e IMPAR\n", numero);
    }

    printf("Pressione ENTER para continuar...");
    getchar();
    getchar();
}

// =============================================================================
// PARTE 4: ALGORITMO COM ESTRUTURA DE REPETIÇÃO
// =============================================================================

/*
 * ALGORITMO EM PSEUDOCÓDIGO:
 *
 * INÍCIO
 *   ESCREVA "Tabuada de um Número"
 *   ESCREVA "Digite um número para ver sua tabuada: "
 *   LEIA numero
 *   PARA i DE 1 ATÉ 10 FAÇA
 *       resultado = numero * i
 *       ESCREVA numero, " x ", i, " = ", resultado
 *   FIMPARA
 * FIM
 *
 * FLUXOGRAMA (conceitual):
 *   [INÍCIO] → [Ler numero] → [i = 1] → [i <= 10?]
 *   → [Calcular resultado] → [Exibir linha] → [i = i + 1]
 *   → [i <= 10?] → [FIM]
 */

void exemplo3_tabuada()
{
    printf("\n=== EXEMPLO 3: TABUADA ===\n");
    printf("Tabuada de um Numero\n");

    int numero, i, resultado;

    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &numero);

    printf("\nTabuada do %d:\n", numero);
    for (i = 1; i <= 10; i++)
    {
        resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
    }

    printf("Pressione ENTER para continuar...");
    getchar();
    getchar();
}

// =============================================================================
// PARTE 5: ALGORITMO MAIS COMPLEXO - SISTEMA DE MENU
// =============================================================================

/*
 * ALGORITMO EM PSEUDOCÓDIGO:
 *
 * INÍCIO
 *   REPETIR
 *       ESCREVA "=== CALCULADORA SIMPLES ==="
 *       ESCREVA "1 - Somar"
 *       ESCREVA "2 - Subtrair"
 *       ESCREVA "3 - Multiplicar"
 *       ESCREVA "4 - Dividir"
 *       ESCREVA "5 - Sair"
 *       ESCREVA "Escolha uma opcao: "
 *       LEIA opcao
 *
 *       SE opcao = 1 ENTÃO
 *           ESCREVA "Digite dois números: "
 *           LEIA a, b
 *           ESCREVA "Resultado: ", a + b
 *       SE opcao = 2 ENTÃO
 *           ESCREVA "Digite dois números: "
 *           LEIA a, b
 *           ESCREVA "Resultado: ", a - b
 *       SE opcao = 3 ENTÃO
 *           ESCREVA "Digite dois números: "
 *           LEIA a, b
 *           ESCREVA "Resultado: ", a * b
 *       SE opcao = 4 ENTÃO
 *           ESCREVA "Digite dois números: "
 *           LEIA a, b
 *           SE b != 0 ENTÃO
 *               ESCREVA "Resultado: ", a / b
 *           SENÃO
 *               ESCREVA "Erro: Divisão por zero!"
 *       FIMSE
 *   ATÉ opcao = 5
 *   ESCREVA "Obrigado por usar a calculadora!"
 * FIM
 */

void exemplo4_calculadora_menu()
{
    printf("\n=== EXEMPLO 4: CALCULADORA COM MENU ===\n");

    int opcao;
    float a, b, resultado;

    do
    {
        printf("\n=== CALCULADORA SIMPLES ===\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite dois numeros: ");
            scanf("%f %f", &a, &b);
            resultado = a + b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            printf("Digite dois numeros: ");
            scanf("%f %f", &a, &b);
            resultado = a - b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            printf("Digite dois numeros: ");
            scanf("%f %f", &a, &b);
            resultado = a * b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            printf("Digite dois numeros: ");
            scanf("%f %f", &a, &b);
            if (b != 0)
            {
                resultado = a / b;
                printf("Resultado: %.2f\n", resultado);
            }
            else
            {
                printf("Erro: Divisao por zero!\n");
            }
            break;
        case 5:
            printf("Obrigado por usar a calculadora!\n");
            break;
        default:
            printf("Opcao invalida! Tente novamente.\n");
        }

        if (opcao != 5)
        {
            printf("Pressione ENTER para continuar...");
            getchar();
            getchar();
        }

    } while (opcao != 5);
}

// =============================================================================
// FUNÇÃO PRINCIPAL
// =============================================================================

int main()
{
    printf("╔══════════════════════════════════════════════════════════════╗\n");
    printf("║           MINI PROJETO: DEFINIÇÃO DE ALGORITMOS             ║\n");
    printf("║                    Curso de Linguagem C                     ║\n");
    printf("║                   Pietro Martins                            ║\n");
    printf("╚══════════════════════════════════════════════════════════════╝\n");

    printf("\nBem-vindo ao nosso projeto sobre algoritmos!\n");
    printf("Neste projeto, voce vera diferentes formas de representar algoritmos:\n");
    printf("• Pseudocodigo (linguagem natural estruturada)\n");
    printf("• Fluxograma (representacao grafica conceitual)\n");
    printf("• Codigo em C (implementacao pratica)\n");

    printf("\nVamos explorar exemplos progressivos, do mais simples ao mais complexo!\n");

    // Executar todos os exemplos
    exemplo1_soma_basica();
    exemplo2_par_impar();
    exemplo3_tabuada();
    exemplo4_calculadora_menu();

    printf("\n╔══════════════════════════════════════════════════════════════╗\n");
    printf("║                  PROJETO CONCLUÍDO!                         ║\n");
    printf("║                                                              ║\n");
    printf("║  Parabens! Você explorou os conceitos fundamentais de       ║\n");
    printf("║  algoritmos e suas diferentes formas de representação.      ║\n");
    printf("║                                                              ║\n");
    printf("║  Próximos passos:                                            ║\n");
    printf("║  • Pratique criando seus próprios algoritmos                ║\n");
    printf("║  • Experimente modificar os exemplos apresentados           ║\n");
    printf("║  • Estude estruturas de dados mais avançadas                ║\n");
    printf("╚══════════════════════════════════════════════════════════════╝\n");

    return 0;
}

/*
 * RESUMO DOS CONCEITOS ABORDADOS:
 *
 * 1. DEFINIÇÃO: Algoritmo = sequência finita de instruções bem definidas
 * 2. REPRESENTAÇÃO EM PSEUDOCÓDIGO: Linguagem natural estruturada
 * 3. FLUXOGRAMA: Representação gráfica conceitual do fluxo
 * 4. IMPLEMENTAÇÃO: Código em C para execução prática
 * 5. ESTRUTURAS DE CONTROLE:
 *    • Sequencial: instruções executadas em ordem
 *    • Condicional: if/else para tomada de decisões
 *    • Repetição: for/while para loops
 * 6. ENTRADA E SAÍDA: scanf para entrada, printf para saída
 * 7. VARIÁVEIS: containers para armazenar dados
 * 8. OPERADORES: aritméticos (+, -, *, /) e relacionais (==, !=, <, >)
 */
