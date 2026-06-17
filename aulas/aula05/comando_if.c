#include <stdio.h>

int main() {

int idade = 0;

printf("entre com sua idade: ");
scanf("%i", &idade);

int eh_maior_que_16_anos = idade >= 16;

if (eh_maior_que_16_anos) {
  //  printf("Com %i anos voce pode votar!\n", idade);
} else {
   // printf("Com %i anos voce naum pode votar!\n", idade);
}

int eh_menor_que_16_anos = !eh_maior_que_16_anos;
if (eh_menor_que_16_anos) {
   // printf("Com %i anos voce naum pode votar!\n", idade);
}
 int eh_maior_que_18_anos = idade >= 18;
 int eh_menor_que_18_anos = !eh_maior_que_18_anos;
 int eh_menor_que_70_anos = idade < 70;

 if (eh_maior_que_18_anos && eh_menor_que_70_anos) {
   // printf("Com %i anos voce eh obrigado a votar!\n", idade);
 }

int eh_maior_que_120_anos = idade >= 120;
if (eh_maior_que_120_anos) {
   // printf("Com %i anos voce ta vivo ainda?\n", idade);
}

if (eh_menor_que_16_anos) {
    printf("Com %i anos voce naum pode votar!\n", idade);
} else if (eh_maior_que_16_anos && eh_menor_que_18_anos) {
    printf("Com %i anos voce pode votar!\n", idade);
} else if (eh_maior_que_18_anos && eh_menor_que_70_anos)  {
    printf("Com %i voce eh obrigado ah votar!\n", idade);
} else {
    printf("Com %i voce pode votar!\n", idade);
}


    return 0;
}