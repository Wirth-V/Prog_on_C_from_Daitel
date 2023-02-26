#include <stdio.h>
#define SIZE 5

void doing (int *);

int main()
{
    int mas[SIZE] = {2, 4, 6, 8, 10};

    doing (&mas[4]);

    for (int i = 0; i<= SIZE - 1; i++)
        printf("%3d ", mas[i]);
    

    return 0;
}

void doing (int *mPtr){
    *mPtr *=100; 
}

