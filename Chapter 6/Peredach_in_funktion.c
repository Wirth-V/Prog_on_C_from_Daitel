#include <stdio.h>

void fun ( int MUS[]){
    for (int i = 0; i <= 4; i++)
        MUS[i] *= 2;
}

int main()
{
    int mas [] = {1, 2, 3, 4, 5};
    fun (&mas[0]);
    for (int i = 0; i <= 4; i++)
        printf("%d ", mas[i]);

    return 0;
}
