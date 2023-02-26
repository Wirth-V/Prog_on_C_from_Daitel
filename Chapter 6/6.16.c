#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int sales[3][5];
    int row, column;

    srand(time(NULL));

    for (row = 0; row <=2; row++)
        for (column = 0; column <= 4; column++)
            sales[row][column] = rand()%10 +1;

    for (row = 0; row <=2; row++){
        for (column = 0; column <= 4; column++)
            printf("%3d ", sales[row][column]);

        printf("\n");
        }

        printf("\n");

    for (row = 0; row <=2; row++){
        for (column = 0; column <= 4; column++){
            sales[row][column] = 0;

            for (int row1 = 0; row1 <=2; row1++){
                for (int column1 = 0; column1 <= 4; column1++)
                    printf("%3d ", sales[row1][column1]);

                    printf("\n");
            }  printf("\n"); 
        }   
    }
    

    return 0; 
}