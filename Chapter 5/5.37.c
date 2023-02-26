#include <stdio.h>

int power (int x, int y){
    if ( y == 1)
        return x;
    if( y == 0)
        return 1;
    else
        return (power (x , y - 1) * x);
}

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d\n", power (num1, num2));
    
    return 0;   
}
