#include <stdio.h>

int main()
{
    float mas[20];

    printf("Byte in mas: %ld\n", sizeof mas );
    printf("Element in mas: %ld\n", sizeof (mas) / sizeof(float) );
    /* заключать "mas" в скобки не обязательно, можно и просто записать sizeof (mas)*/
    return 0;
}