#include <stdio.h>

int multiple (int x, int y){
        if (x % y == 0)
            return 1;
        else
            return 0;
}


int main()
{
    int rez, num1, num2;
    
    scanf("%d %d", &num1, &num2);
    
    
    
    rez = multiple (num1, num2);
    
    if (rez == 1)
        printf("Delit\n");
    if (rez == 0)
        printf("NeDelit\n");
    return 0;   
}
