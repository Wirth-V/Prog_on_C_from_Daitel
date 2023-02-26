//3.38
#include <stdio.h>

int main()
{
	int counter = 1;

	while (counter <= 100){

		if (counter % 10 != 0)
			printf("*");
		else
			printf("*\n");

		counter++; 

	}

	return 0;
}
