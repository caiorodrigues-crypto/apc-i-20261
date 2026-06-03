#include <stdio.h> 
int main() {

//media_aritmetica.c: Ler n números inteiros e armazená-los em um vetor. 
//Calcular e exibir a média aritmética dos números;

int numero[20];
int soma = 0;
float media;

for(int i=0; i < 20; i++) {  
    printf("Digite o %d° numero ", i + 1);
    scanf("%d", &numero[i]);

    soma += numero[i];
}
media = soma / 5.0;

printf("A media eh: %.2f\n", media);

    return 0;
}