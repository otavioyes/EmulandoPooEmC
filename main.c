#include <stdio.h>


struct Date //dados que serão setados
{
    int day;
    int month;
    int year;
    int valid;//Usado para verificar se a data é válida ou não
};

struct Date initDate() //utilizando o conceito de verdadeiro ou falso
{
    struct Date dt;
    dt.valid = 0;
    return dt;
}

struct Date changeData(struct Date dt, int day, int month, int year)//verificando dados validos
{
    dt.day = day;
    dt.month = month;
    dt.year = year;

    if ((dt.day >= 1 && dt.day <= 31) &&
        (dt.month >= 1 && dt.month <= 12) &&
        (dt.year >= 1900 && dt.year <= 2100))
    {
        dt.valid = 1; //return true;
    }
    else{
        dt.valid = 0; //return false;
    }
    return dt;
}

void printDate(struct Date dt)//chamando a função Date dt
{
    if(dt.valid){
        printf("%02d/%02d/%d\n", dt.day, dt.month, dt.year);//printado data válida ou inválido
    }else{
        printf("Invalid Date!\n");
    }
}

int main()
{
    struct Date pgt = initDate();

    pgt = changeData(pgt, 12,11,2099);
    printDate(pgt); //chamando a função printDate

    return 0;
}
