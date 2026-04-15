#include <stdio.h>

int main() {
    int idade;

    printf("Entre com sua idade: ");
    scanf("%i", &idade);
    while(getchar() != '\n');


    printf("Voce e uma crianca? %i\n", idade >= 0 && idade <= 12);
    // && => 0 Falso E qualquer coisa = Sempre Falso
    printf("Voce tem prioridade para vacinar? %i\n",
         idade <= 6 || idade >= 60 );
         // || => Verdadeiro OU qualquer coisa = Sempre Verdadeiro
    printf("Voce naum pode votar? %i\n", !(idade >=16));
    // ! => NAO Verdadeiro = Falso, Nao Falso = Verdadeiro
    printf("Voce e um adolescente? %i\n", idade >= 13 && idade <= 16);
    printf("Voce e um jovem? %i\n", idade >= 17 && idade <= 20);

    return 0;
}