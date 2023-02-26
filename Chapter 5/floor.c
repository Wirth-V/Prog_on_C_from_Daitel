#include <stdio.h> 
#include <math.h>

int main()
{
    float x;
    scanf ("%f", &x);
    printf("%f\n", floor (x *10 + .5) / 10 ); // округление x до десятых 
    printf("%f\n", floor (x *100 + .5) / 100 ); // округление x до сотых 
        return 0;
}

// компилировать через команду gcc file.c -lm
