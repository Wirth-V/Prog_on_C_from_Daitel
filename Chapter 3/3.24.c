//3.24 (Ищет и наименьшее)
#include <stdio.h>

int main()
{
 	int num, largest, smallest;
   	int counter = 1;

    printf("Print you num:\n");
	scanf("%d", &num);
	printf("Counter = %d\n\n", counter);
	largest = num;
	smallest = num;

	while (counter++ <= 9) {
            printf("Print you num:\n");
            scanf("%d", &num);

      		if (num > largest)
                largest = num;

      		if (num < largest)
                if (num < smallest)
                    smallest = num;

		printf("Counter = %d\n\n", counter);
	}

	printf("Largest = %d\nSmallest = %d\n", largest, smallest);	
      

   return 0;
}
