#include <stdio.h>

int main(){
    int numeros;
    int contador = 0;

    for (int i = 1; i < 5; i++)
    {   printf("Números: %d: ", i);
        scanf("%d", &numeros);
        
        if (numeros % 2 == 0)
        {
            contador = contador + 1;
        }
        
        
    }
    printf("Existem %d números pares",contador);   
    return 0; 

}