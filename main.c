#include <stdio.h>


struct Date //dados que serão setados
{
    short day;
    short month;
    short year;
    short valid;//Usado para verificar se a data é válida ou não
};

void initDate(struct Date *dt) //utilizando o conceito de verdadeiro ou falso
{
    dt->valid = 0;
}

void changeData(struct Date *dt, int day, int month, int year)//verificando dados validos
{
    dt->day = day;
    dt->month = month;
    dt->year = year;

    if ((dt->day >= 1 && dt->day <= 31) &&
        (dt->month >= 1 && dt->month <= 12) &&
        (dt->year >= 1900 && dt->year <= 2100))
    {
        dt->valid = 1; //return true;
    }
    else{
        dt->valid = 0; //return false;
    }
}

void printDate(const struct Date *dt)//chamando a função Date dt
{
    if(dt->valid){
        printf("%02d/%02d/%d\n", dt->day, dt->month, dt->year);//printado data válida ou inválido
    }else{
        printf("Invalid Date!\n");
    }
}

int main()
{
    struct Date pgt;
    initDate(&pgt);

    changeData(&pgt, 12,12,2099);
    printDate(&pgt); //chamando a função printDate

    printf("Size: %llu\n", sizeof(pgt));

    return 0;
}
