 
#include <stdio.h>
#define SIZE 50
#include <stdlib.h>
#include <time.h>

    int count = 0;

int poisk (const int MAS[], int KEY, int size){


    if(MAS[size - 1] == KEY)
        return size - 1;
    if (count >= SIZE - 1)
         return -1;
    else{ 
        count++;
        return poisk (MAS, KEY, size - 1);
    }

   
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