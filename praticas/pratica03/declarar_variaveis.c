#include <stdio.h>
int main() {

 /*Declarar variáveis para armazenar a idade, o sexo (M ou F), a altura (ex.: 1.75f) 
 e o peso (ex.: 72.845) de uma pessoa e, em seguida, imprimir todos esses valores 
 utilizando os especificadores de formato corretos;*/

//%d = le um inteiro
//%c = um unico caractere
//%f = decimal
//%lf = double no peso

 // Declaração das variaveis
 int idade;
 char sexo;
 float altura;
 double peso; 

// Entrada de dados
   printf("informe a sua idade: ");
   scanf("%i", &idade);
   while(getchar() !='\n'); // limpar o buffer

   printf("informe seu sexo M ou F: ");
   scanf("%c", &sexo);
   while(getchar() !='\n'); // limpar o buffer

   printf("informe sua altura: ");
   scanf("%f", &altura);
   while(getchar() !='\n'); // limpar o buffer

   printf("informe seu peso: ");
   scanf("%lf", &peso);
   while(getchar() !='\n'); // limpar o buffer

// Saida de dados
   printf("___________________________________");
   printf("voce tem %i anos\n", idade);
   printf("seu sexo eh %c\n", sexo);
   printf("sua altura eh %.2f\n", altura);
   printf("seu peso eh %.2lf kg\n", peso);

    return 0;
}