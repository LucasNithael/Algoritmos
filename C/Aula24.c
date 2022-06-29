#include <stdio.h>

struct Data{
    short dia;
    short mes;
    int ano;
};

int main(){
    struct Data hoje, amanha;
    scanf("%hd %hd %d", &hoje.dia, &hoje.mes, &hoje.ano);
    printf("Hoje é: %hd/%hd/%d\n", hoje.dia, hoje.mes, hoje.ano);

    amanha.dia = hoje.dia + 1;
    amanha.mes = hoje.mes;
    amanha.ano = hoje.ano;

    printf("Amanhã é: %hd/%hd/%d\n", amanha.dia, amanha.mes, amanha.ano);
}
