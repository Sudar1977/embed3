#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"Rus");
    printf("Вычисление корней уравнения \\ \"a*x*x+b*x+c=0\" \n");
    printf("Введите a: \n");
    printf("Введите b: \n");
    printf("Введите c: \n");
    printf("Корни уравнения  \n");
    printf("X1=  \n");
    printf("X2=  \n");

    return 0;
}

