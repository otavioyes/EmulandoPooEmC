#include <stdio.h>


struct Data
{
    int dia;
    int mes;
    int ano;
};


int main()
{
    struct Data pgt;

    pgt.dia = 1;
    pgt.mes = 1;
    pgt.ano = 2024;

    printf("Size: %llu\n", sizeof(pgt));
    printf("%02d/%02d/%d\n", pgt.dia, pgt.mes, pgt.ano);



    return 0;
}
