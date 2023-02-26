#include <stdio.h>
int main()
{
    char x = 'F';
    void *xPtr = &x;
    //printf("xPtr=%c \n", *xPtr); - не выполнимо,
    // так как разыменование указателя на void невыполнимо
    int y, *yPtr;
    yPtr = xPtr;
    printf("xPtr=%p \n", xPtr);
    printf("yPtr=%p \n", yPtr);
    
    printf("yPtr=%c \n", *yPtr);

    return 0;
} 
