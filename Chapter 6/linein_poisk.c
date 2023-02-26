  
#include <stdio.h>
#define SIZE 25
#include <stdlib.h>
#include <time.h>

int poisk (const int MAS[], int KEY, int size){

    for (int i = 0; i <= size - 1; i++)
        if(MAS[i] == KEY)
            return i;
    
    return -1;    
}

int main()
{   
    int mas[SIZE];
    srand(time(NULL));

    for (int i = 0; i <= SIZE -1; i++)
        mas[i] = rand() % 100 - 50;
    
    for (int i = 0; i<= SIZE - 1; i++)
        printf("%d ", mas[i]);
    printf("\n");
    
    int key, counter;

    printf("Write key:\n");
    scanf("%d", &key);
    counter = poisk (mas, key, SIZE);

    if (counter != -1)
        printf("Key is mas with indeks %d:\n", counter);
    else
        printf("Key is NOT in mas:\n");
    
    return 0;
}