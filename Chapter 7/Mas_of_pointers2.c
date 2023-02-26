#include <stdio.h>

void getMore ( int *MAS[]){
    for (int i = 0; i <= 4; i++)
        *MAS[i] *= 2;
}



int main()
{   
    int a[] = {1, 2, 3, 4, 5}, *mas[] = {&a[0], &a[1], &a[2], &a[3], &a[4] };

    for (int i = 0; i <= 4; i++)
        printf("%p ", mas[i]);

    printf("\n");

    for (int i = 0; i <= 4; i++)
        printf("%d ", *mas[i]);

    printf("\n");
    printf("\n");

    getMore (mas);

    for (int i = 0; i <= 4; i++)
        printf("%p ", mas[i]);

    printf("\n");

    for (int i = 0; i <= 4; i++)
        printf("%d ", *mas[i]);

    printf("\n");
        

    return 0;
} 
