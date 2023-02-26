#include <stdio.h> 

int main()
{
    int mas[] = {0, 0, 0, 0, 0};

    for(int i = 0; i <= 4; i++) 
        printf("%3d", mas[i]);
    
         
    printf("\n");

    for(int i = 0; i <= 4; i++) 
        printf("%3d", mas[i] + 5);
    

    printf("\n");

    for(int i = 0; i <= 4; i++) 
        printf("%3d", mas[i]);

    printf("\n");
    printf("\n");


    for(int i = 0; i <= 4; i++) 
        printf("%3d", mas[i] += 5);

    printf("\n");

    for(int i = 0; i <= 4; i++) 
        printf("%3d", mas[i]);

    printf("\n");
    
    return 0;
}
