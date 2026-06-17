#include <stdio.h>
#include <stdbool.h>
int main(){

enum dias_da_semana_e {
    domingo = 1,
    segunda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado
};

enum meses_do_ano_e {
    janeiro = 1, 
    fevereiro,
    marco,
    abril,
    maio,
    junho,
    julho,
    agosto,
    setembro,
    outubro,
    novembro,
    dezembro
};

enum sexo_e {
    masculino,
    feminino
};

enum situacao_e {
    ativo,
    inativo
};

enum tipo_contato_e {
    particular,
    publico
};

struct contato_t {
    char nome[61];
    long int telef;
    enum tipo_contato_e;
};

bool esta_presente;
esta_presente = false;




    return 0;
}