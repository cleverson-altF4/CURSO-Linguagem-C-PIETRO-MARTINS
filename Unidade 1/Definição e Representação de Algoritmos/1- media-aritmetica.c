//Crie um programa que leia três notas de um aluno e calcule a média aritmética. Se a média for maior ou igual a 7, exiba "Aprovado", senão exiba "Reprovado".
#include <stdio.h>

int main(){
     
    float nota1, nota2, nota3, media;
    printf("Digite nota 1: ");
    scanf("%f", &nota1);
    printf("Digite nota 2: ");
    scanf("%f", &nota2);
    printf("Digite nota 3: ");
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3)/ 3;
    printf("A média de %.2f, %.2f, %.2ff = %.2f",nota1, nota2, nota3, media);

    if (media >= 7)
    {
        printf("\nAprovado");
    } else {
        printf("\nReprovado");
    }

    return 0;
    
}
