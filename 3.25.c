//3.25
#include <stdio.h>

int main()
{
	printf("N\t10*N\t100*N\t1000*N\n\n");

	int num = 1,
    counter = 1;
    
	while (counter++ <= 10 ){
		printf("%d\t%d\t%d\t%d\n", num, num * 10, num * 100, num * 1000);
		num++;
        printf("counter = %d\n\n", counter);
	}
	return 0;
}
