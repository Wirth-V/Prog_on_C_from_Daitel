//Указатели на функцию
#include <stdio.h>

int sum (int, int );
int (*sumPtr) (int, int);

int main()
{   

    //int (*sumPtr) (int, int); - можино объявить его и здесь, это не поменяет работу проги (наверное это из-за того, что компил воспринемает это как определеине)
    int x = 5, y = 10, c;
    sumPtr = sum;
    // Т.к. имя функции - адрес начала ее програмного кода, то &sum и sum являються одним и тем же (по аналогии mas и &mas[0])
    c =  sumPtr (x, y);
    printf("c = %d\n", c);
    printf("Adres of funktion: %p\n", sumPtr);
    printf("Adres of pointer on funktion: %p\n", sum);

    return 0;
}

int sum (int a, int b )
{
    return a + b;
}

