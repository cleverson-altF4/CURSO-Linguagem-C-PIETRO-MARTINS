#include <stdio.h>
#include <string.h>

int main(){
    int tentativas = 0;
    char usuario[20];
    char senha[10];
    
    do
    {
        printf("\n~~~~~~ Login de acesso ~~~~~~\n");
        printf("Nome do usuário: ");
        scanf("%s", usuario);
        printf("Senha: ");
        scanf("%s", senha);

        if (strcmp(usuario, "clevison") == 0 && strcmp(senha, "123")== 0)
        {
            printf("Senha realizado com sucesso!\n");
            printf("Bem vindo %s\n", usuario);
            break;
        } else {
            printf("ERRO! Tente novamente\n");
            tentativas = tentativas + 1;
        }

        if (tentativas >= 3)
        {
            printf("Limite de tentativas excedido\n");
        }
        

        
    } while (tentativas < 3);

    return 0;
    
}