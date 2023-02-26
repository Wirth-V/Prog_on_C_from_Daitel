#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int main()
{
    int counts[10] = {0};
    
    for (int i = 0; i <= 9; i++)
        printf("%2d ", counts[i]);
    
    printf("\n");
    printf("\n");

    int bonus[15];
    srand(time(NULL));

    for (int i = 0; i <= 14; i++)
        bonus[i] = rand() % 10 + 1;

    for (int i = 0; i <= 14; i++)
        printf("%2d ", bonus[i]);
    
        printf("\n");

    for (int i = 0; i <= 14; i++)
        bonus[i]++;

    for (int i = 0; i <= 14; i++)
        printf("%2d ", bonus[i]);

        printf("\n");

    printf("\n");
    printf("\n");
    
    float monthTemp[12];

    for (int i = 0; i<= 11; i++)
        {printf("Введите число:");
        scanf("%f", &monthTemp[i]);}

        for (int i = 0; i <= 11; i++)
        printf("%7.2f ", monthTemp[i]);




    return 0;
}
