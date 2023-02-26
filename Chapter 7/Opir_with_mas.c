#include <stdio.h>
#define SIZE 5

int main()
{
    int mas[SIZE] = {2, 4, 6, 8, 10};
    int *vPtr1 = mas, *vPtr2 = &mas[3], x;

    x = vPtr2 - vPtr1;
    printf("%d\n", x);

    return 0;
}


