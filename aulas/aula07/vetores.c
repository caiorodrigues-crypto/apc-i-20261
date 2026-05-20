#include <stdio.h>
int main() {

//cria um conjunto de 10 inteiros    
                  // 0 1 2 3 4 5 6 7 8 9
int numero[10]; // | | | | | | | | | | |

numero[0] = 10; //  |10| | | | | | | | | |
numero[1] = 6;  //  |10| | | |5| | | | | |
numero[2] = 7; 
numero[3] = 0; 
numero[4] = 9;
numero[5] = 2;
numero[6] = 1;
numero[7] = 5;
numero[8] = 8;
numero[9] = 3;

for(int i=0; i < 10; i++) {
    printf("%i,\n ", numero[i]);
}

//cria um conjunto de 100 caracteres
char nome[100]; // sabor string
printf("Entre com seu nome: ");
scanf("%[^\n]s", nome); //nao tem &
printf("Ola %s!\n", nome);

//cria um conjunto de 3 flutuantes 
float notas[3]; 
printf("Entre com as suas notas do boletim: ");
for(int i = 0; i < 3; i++) {
    printf("A%i = ", i+1); 
    scanf("%f", &notas[i]);
}
printf("Suas notas foram: ");
for(int i = 0; i < 3; i++) {
    printf("A%i = %.1f\n", i+1, notas[i]);
}











    return 0;
}