#include <stdio.h>

int main()
{
    int n = 1;		

    for (int i =1; i <= 10; i++) {
	   for(int j= 1; j <= n; j++){
	   printf("*");
	   }

	   n++;
	   printf("\n");
    }

	printf("\n\n\n");


    n = 10;
    for (int i =1; i <= 10; i++) {
           for(int j= 1; j <= n; j++){
           printf("*");
           }

           n--;
           printf("\n");
    }


    return 0;
}
