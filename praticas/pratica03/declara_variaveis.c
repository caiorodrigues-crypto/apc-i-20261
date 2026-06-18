#include <stdio.h>
int main() {

// Declarar variáveis para armazenar a idade, o sexo (M ou F), a altura (ex.: 1.75f)
// e o peso (ex.: 72.845) de uma pessoa e,
// em seguida, imprimir todos esses valores utilizando
// os especificadores de formato corretos;


// Resumo rápido
// Símbolo	Significa
// %d	inteiro
// %f	float
// %lf	double
// %c	caractere
// %s	texto
// %.2f	float com 2 casas
// \n	quebra de linha

// Declaração das variáveis
    int idade;
    char sexo;
    float altura;
    double peso;

// entrada de dados 

printf("Informe sua idade: ");
    scanf("%d", &idade);
      while(getchar() !='\n'); // limpar o buffer

printf("Informe seu sexo (M ou F): ");
    scanf("%c", &sexo);
      while(getchar() !='\n'); // limpar o buffer

printf("Informe sua altura: ");
    scanf("%f", &altura);
      while(getchar() !='\n'); // limpar o buffer

printf("Informe seu peso: ");
    scanf("%lf", &peso);        
      while(getchar() !='\n'); // limpar o buffer

// saida de dados

printf("-------DADOS DO USUARIO---------\n");
printf("Sua idadde eh: %d anos\n", idade);
printf("Seu sexo eh: %c\n", sexo);
printf("Sua altura eh: %.2f\n", altura);
printf("Seu peso eh: %.2lf Kg\n", peso);
printf("------------FIM----------------\n");

    return 0;
}
// #include <stdio.h>

// int main() {

//     // Declaração das variáveis
//     int idade;
//     char sexo;
//     float altura;
//     double peso;

//     // Entrada de dados
//     printf("Digite sua idade: ");
//     scanf("%d", &idade);

//     printf("Digite seu sexo (M/F): ");
//     scanf(" %c", &sexo);

//     printf("Digite sua altura: ");
//     scanf("%f", &altura);

//     printf("Digite seu peso: ");
//     scanf("%lf", &peso);

//     // Saída de dados
//     printf("\n--- Dados da Pessoa ---\n");
//     printf("Idade: %d\n", idade);
//     printf("Sexo: %c\n", sexo);
//     printf("Altura: %.2f\n", altura);
//     printf("Peso: %.3lf\n", peso);

//     return 0;
// }