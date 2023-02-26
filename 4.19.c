#include <stdio.h>

int main()
{
	int num;
	float sum = 0;
	int count;

	printf("Number of product and sum (num_gap_sum):\n");

	while ( (num = getchar()) != EOF ) {  //EOF -> завершение проги при нажатии <CTRL> + <d>

		switch (num) {
		
			case '1':
              
                    scanf("%d", &count);
                    sum += count * 2.98;
                    printf("\nNumber of product and sum (num_gap_sum):\n");
			break;

			case '2':
                        
                        scanf("%d", &count);
                        sum += count * 4.58;
                        printf("\nNumber of product and sum (num_gap_sum):\n");
			break;

			case '3':
                        
                        scanf("%d", &count);
                        sum += count * 9.96;
                        printf("\nNumber of product and sum (num_gap_sum):\n");
			break;

			case '4':    
                        
                        scanf("%d", &count);
                        sum += count * 4.49;
                        printf("\nNumber of product and sum (num_gap_sum):\n");
			break;

			case '5':
                        
                        scanf("%d", &count);
                        sum += count * 6.87;
                        printf("\nNumber of product and sum (num_gap_sum):\n");
			break;
			
			case '\n': case' ':
                        break;


			default:
			printf("This product doesn't exists.\n Print nuw nam:\n");
			break;
	
		}
		

	}
	
	printf("Sum = %f\n", sum);
      
	return 0;
} 






