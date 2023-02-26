#include <stdio.h>
#define SIZE 5

int main()
{
    int values[SIZE];

   /*a)*/ for(int i = 0; i <= SIZE - 1; i++)
        values[i] = 2*(i+1);
    
   /*b)*/  unsigned int *vPtr; //,*vPtr2, *vPtr3;

    printf("Print mas/index\n");

   /*c)*/  for(int i = 0; i <= SIZE - 1; i++)
                printf("%d ", values[i]);

    printf("\n");


   /*d*/ vPtr = values;


   // vPtr2 = &values[0];
   // vPtr3 = &values; /*Вообще не понимаю что это, написал на абум, ну да ладно*/

   // printf("%p\n", vPtr);
   // printf("%p\n", vPtr2);
   // printf("%p\n", vPtr3);

    /*e*/printf("Ukazatel/chenie\n");
    for(int i = 0; i <= SIZE - 1; i++)
        printf("%d ", *(vPtr + i));

    printf("\n");

    /*f*/printf("Name mas/chenie\n");
    for(int i = 0; i <= SIZE - 1; i++)
        printf("%d ", *(values + i));

    printf("\n");

    /*g*/printf("Index with ukaz on mas\n");
    for(int i = 0; i <= SIZE - 1; i++)
        printf("%d ", vPtr[i]);

    printf("\n");
     printf("\n");

    /*h*/printf("%d \n", values[4]);
    printf("%d \n", *(values + 4));
    printf("%d \n", vPtr[4]);
    printf("%d \n", *(vPtr + 4));

    printf("\n");

    /*i)*/  printf("vPtr + 3 save: %d \n", *(vPtr + 3));

    printf("\n");

    /*j)*/ unsigned int *vPtr2;
    vPtr2 = &values[4];
    printf("vPtr4 -= 4 save: %d \n", *(vPtr2 -= 4));



    return 0;
}