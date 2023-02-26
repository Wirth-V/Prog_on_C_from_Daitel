#include <stdio.h>


int main()
{
        int i;
        int counter1 = 1;
        int counter2 = 1;

        printf("Preant razmer storoni kvadzata:\n");
        scanf("%d", &i);

        while (counter1 <= i) {
		
		if (counter1 == 1 || counter1 == i) {
			while (counter2++ <= i)
			printf("*");
		
			counter2 = 1;
		}
		
                if (counter1 < i  && counter1 > 1){
			while (counter2 <= i){
				if (counter2 == 1 || counter2 == i)
					printf("*");
				else
					printf(" ");
			        counter2++;
             	        }

	 	}
                printf("\n");
		counter2 = 1; 
                counter1++;
        }


return 0;
} 
