#include <stdio.h>
#define MAX_JOGOS 10
int main() {
//declarando variaveis!
    struct Jogo {

        int  codigo;
        char  nome[50];
        char  genero[30];
        char  plataforma[30];
    };

    struct Jogo jogos[MAX_JOGOS];

    int quantidade = 0;
    int opcao;
    int i;
    int j; 
    int codigoExistente;
    int buscarCodigo;


do {

//layout de inicio!
printf("\n");
printf("====================\n");
printf("=====BIBLIOTECA=====\n");
printf("=====    DE    =====\n");
printf("=====  JOGOS   =====\n");
printf("====================\n");
printf("\n");
printf("1- Listar Jogos\n");
printf("2- Buscar Jogo\n");
printf("3- Adicionar Jogo\n");
printf("4- Editar Jogo\n");
printf("5- Remover Jogo\n");
printf("0- SAIR!\n");
printf("ESCOLHA UMA OPCAO: \n");


    // mostra menu

    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:

    if(quantidade == 0)
    {
        printf("Nenhum jogo cadastrado!\n");
    }
    else
    {
        for(i = 0; i < quantidade; i++)
        {
            printf("\n====================\n");
            printf("Codigo: %d\n", jogos[i].codigo);
            printf("Nome: %s\n", jogos[i].nome);
            printf("Genero: %s\n", jogos[i].genero);
            printf("Plataforma: %s\n", jogos[i].plataforma);
            printf("====================\n");
        }
    }

    break;

        case 2:

    if(quantidade == 0)
    {
        printf("Nenhum jogo cadastrado!\n");
    }
    else
    {
        printf("Digite o codigo do jogo: ");
        scanf("%d", &buscarCodigo);

        codigoExistente = 0;

        for(i = 0; i < quantidade; i++)
        {
            if(jogos[i].codigo == buscarCodigo)
            {
                printf("\n====================\n");
                printf("Codigo: %d\n", jogos[i].codigo);
                printf("Nome: %s\n", jogos[i].nome);
                printf("Genero: %s\n", jogos[i].genero);
                printf("Plataforma: %s\n", jogos[i].plataforma);
                printf("====================\n");

                codigoExistente = 1;
            }
        }

        if(codigoExistente == 0)
        {
            printf("Jogo nao encontrado!\n");
        }
    }

    break;

        case 3:

    if(quantidade == MAX_JOGOS)
    {
        printf("Limite de jogos atingido!\n");
    }
    else
    {
        printf("Digite o codigo do jogo: ");
        scanf("%d", &jogos[quantidade].codigo);

        codigoExistente = 0;

        for(i = 0; i < quantidade; i++)
        {
            if(jogos[i].codigo == jogos[quantidade].codigo)
            {
                codigoExistente = 1;
            }
        }

        if(codigoExistente == 1)
        {
            printf("Codigo ja cadastrado!\n");
        }
        else
        {
            printf("Digite o nome do jogo: ");
            scanf("%s", jogos[quantidade].nome);

            printf("Digite o genero do jogo: ");
            scanf("%s", jogos[quantidade].genero);

            printf("Digite a plataforma do jogo: ");
            scanf("%s", jogos[quantidade].plataforma);

            quantidade++;

            printf("Jogo cadastrado com sucesso!\n");
        }
    }

    break;

        case 4:

    if(quantidade == 0)
    {
        printf("Nenhum jogo cadastrado!\n");
    }
    else
    {
        printf("Digite o codigo do jogo que deseja editar: ");
        scanf("%d", &buscarCodigo);

        codigoExistente = 0;

        for(i = 0; i < quantidade; i++)
        {
            if(jogos[i].codigo == buscarCodigo)
            {
                printf("Novo nome: ");
                scanf("%s", jogos[i].nome);

                printf("Novo genero: ");
                scanf("%s", jogos[i].genero);

                printf("Nova plataforma: ");
                scanf("%s", jogos[i].plataforma);

                printf("Jogo atualizado com sucesso!\n");
                
                codigoExistente = 1;
                break;

            }
        }

        if(codigoExistente == 0)
        {
            printf("Jogo nao encontrado!\n");
        }
    }

    break;

        case 5:

    if(quantidade == 0)
    {
        printf("Nenhum jogo cadastrado!\n");
    }
    else
    {
        printf("Digite o codigo do jogo que deseja remover: ");
        scanf("%d", &buscarCodigo);

        codigoExistente = 0;

        for(i = 0; i < quantidade; i++)
        {
            if(jogos[i].codigo == buscarCodigo)
            {
                codigoExistente = 1;

                for(j = i; j < quantidade - 1; j++)
                {
                    jogos[j] = jogos[j + 1];
                }

                quantidade--;

                printf("Jogo removido com sucesso!\n");
                break;

            }
        }

        if(codigoExistente == 0)
        {
            printf("Jogo nao encontrado!\n");
        }
    }

    break;

        case 0:
        printf("Game Over...\n");
            break;

        default:
            printf("Opcao invalida! Tente novamente\n");
    }

} while(opcao != 0);
    return 0;
}