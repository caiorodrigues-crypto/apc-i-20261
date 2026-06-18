//tamanho_tipos.c: 
//Utilizar o operador sizeof() para imprimir o tamanho (em bytes) dos seguintes tipos: 
//char, short int, int, long int, long long int, float, double e long double

#include <stdio.h>
int main() {

//char
//short int 
//int
//long int 
//long long int
//float 
//double
//long double
//sizeof() conta os bytes
//ex.: prinft("char; %zu bytes\n", sizeof(char))

printf("char: %zu bytes\n", sizeof(char));
printf("short int: %zu bytes\n", sizeof(short int));
printf("int: %zu bytes\n", sizeof(int));
printf("long int: %zu bytes\n", sizeof(long int));
printf("long long int: %zu bytes\n", sizeof(long long int));
printf("float: %zu bytes\n", sizeof(float));
printf("double: %zu bytes\n", sizeof(double));
printf("long double: %zu bytes\n", sizeof(long double));

    return 0;
}