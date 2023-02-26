#include <stdio.h>

int main()
{
    int x, y;
    
    printf("Write you number:\n");
    scanf("%d%d", &x, &y);
    printf("You number is x = %d, y = %d\n", x, y);
    
    if ( !(x<5) && !(y>=7) )
        printf("True\n");
    else 
        printf("False");
    
    printf("\n\n");
    
    if ( !(x<5 || y>=7) )
        printf("True\n");
    else 
        printf("False");
    
        return 0;
}
