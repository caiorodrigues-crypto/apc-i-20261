//boletim.c: Ler as notas de uma turma de 10 alunos, sendo 2 notas por aluno. 
//Calcular a média de cada aluno e exibir o boletim de notas;
#include <stdio.h>
int main() {
 
//guardar variavel nota e media
float nota1, nota2, media;
//guardar variavel alunos
int aluno;

for(aluno = 1; aluno <= 10; aluno++){
    printf("Aluno %d\n", aluno);
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
}
printf("\n");
media = (nota1 + nota2)/2; 

//printf("Nota 1:%1.f\n", nota1);
//printf("Nota 2:%1.f\n", nota2);
//printf("Media:%1.f\n", media);

for(aluno = 1; aluno <= 10; aluno++){
    printf("Aluno %d\n", aluno);
    printf("1° Nota:%1.f\n", &nota1);
    printf("2° Nota:%1.f\n", &nota2);
    printf("Media:%1.f\n", media);
}
    return 0;
}