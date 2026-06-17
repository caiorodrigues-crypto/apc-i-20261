#include <stdio.h>
int main() {
 int opcao = 0;
 do {   
     printf("MENU PRINCIPAL\n");
     printf("1- Consultar saldo\n");
     printf("2- Recarregar\n");
     printf("3- Ver mensagem\n");
     printf("4- Ver ligacoes\n");
     printf("5- SAIR\n");
     printf("Escolha uma opcao: ");

     scanf("%i", &opcao);
     while (getchar() != '\n');
 

     switch(opcao) {
        case 1: printf("Seu saldo eh R$ 10,00\n");break;
        case 2: printf("Escolha entre 10, 20 e 50\n");break;
        case 3: printf("Voce nao possui mensagens\n");break;
        case 4: printf("Voce nao possui ligacoes\n");break;
        case 5: printf("Obrigado pelo contato!\n");break;
        default: printf("opcao invalida! tente novamente.\n");
     }
} while (opcao != 5);

 

 printf("Obrigado pelo contato! Ate logo\n");


    return 0;
}