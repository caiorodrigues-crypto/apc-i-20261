//diagonal_principal.c: Ler uma matriz 3x3
//e imprimir apenas os elementos da diagonal principal.
#include <stdio.h> 
int main(){

int tabela[3][3];

tabela[0][0] = 1;
tabela[0][1] = 2;
tabela[0][2] = 3;
tabela[1][0] = 4;
tabela[1][1] = 5;
tabela[1][2] = 6;
tabela[2][0] = 7;
tabela[2][1] = 8;
tabela[2][2] = 9;

//   0 1 2  j
// 0|1|2|3| i
// 1|4|5|6|
// 2|7|8|9|

for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++){
        if(i==j){
            printf("A tabela diagona eh:%d\n", tabela[i][j]);
        }
    } 
}

//printf("%i ",tabela[i][j]);

    return 0;
}