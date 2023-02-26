 
#include <stdio.h>
#define SIZE 100
#include <stdlib.h>
#include <time.h>

int MAS[SIZE];

int vibSort ( int size){

    int x; 
    int key;

    if(size <= 1)
        return MAS[SIZE - size];

    else{
        key = MAS[SIZE - size] ;

        for(int i = SIZE - size ; i <=  SIZE -1; i++)
            if (key > MAS[i]){
                x = key;
                key = MAS[i];
                MAS[i]=x;
            }
            
            MAS[SIZE - size] = key;
            return vibSort( size - 1);
    }    


}

int main()
{
    int x;

    srand(time(NULL));
    for (int i = 0; i <= SIZE -1; i++)
        MAS[i] = rand() % 100 - 50;


    for (int i = 0; i<= SIZE - 1; i++)
        printf("%d ", MAS[i]);
    printf("\n");
    printf("\n");

    x = vibSort(SIZE);

    printf("%d", x);

    printf("\n");
    printf("\n");

    for (int i = 0; i<= SIZE - 1; i++)
        printf("%d ", MAS[i]);
    printf("\n");

    return 0;
}