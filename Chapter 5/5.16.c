#include <stdio.h>

int power (int x, int y){
    int rez = 1;
    for (int i = 1; i <= y; i++ )
        rez *= x; 
    return rez;
    
}


int main()
{
    int num, expon;
    scanf("%d", &num);
    scanf("%d", &expon);
    
    printf("%d\n", power (num, expon) );

    return 0;   
}
