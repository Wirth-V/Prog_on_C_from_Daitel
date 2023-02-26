#include <stdio.h>
#define SIZE 10

void sort (int MAS[], int size ){

    int x, num = 0, counter;

    for (int i = 0; i <= size - 1; i++){
		num++;
        counter = 0;
        for (int z = 0; z <= size - num; z++){
            if (MAS[z] > MAS[z+1]){
                x = MAS[z];
                MAS[z] = MAS[z+1];
                MAS[z+1] = x; 
                counter++;
                }
        }
        if (counter == 0)
            break;

        for (int i = 0; i <= size - 1; i++)
        printf("%5d  ", MAS[i]);
    
         printf("\n");
	}
}

int main()
{
    int mas[SIZE] = {1000, 123, 0,
                    66,    -666,
                     -1, 34, 666, 323, -666};

    for (int i = 0; i <= SIZE - 1; i++)
        printf("%5d  ", mas[i]);

    printf("\n");
    sort (mas, SIZE);

    for (int i = 0; i <= SIZE - 1; i++)
        printf("%5d  ", mas[i]);
    
     printf("\n");

    return 0;
} 
 
