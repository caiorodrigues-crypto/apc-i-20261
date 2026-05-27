//localiza_numero.c: Ler 10 números inteiros e armazená-los em um vetor. 
//Em seguida, ler um número adicional e localizar sua posição no vetor. 
//Caso o número não seja encontrado, informar que ele não está no vetor;
#include <stdio.h> 
int main() {

int numero[10];
int encontrar;
int encontrado = 0;

for(int i = 0; i < 10; i++){
    printf("Digite o %d° numero: ", i + 1);
    scanf("%d", &numero[i]);
}

printf("Digite um numero que deseja encontrar: ");
scanf("%d", &encontrar);

for(int i = 0; i < 10; i++){
    if(numero[i] == encontrar) {
        printf("numero encontado na posicao %d\n.");
        encontrado = 1;
        break;
    }
}
if(encontrado ==0){
    printf("numero nao encontrado\n");
}

    return 0;
}