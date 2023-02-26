#include <stdio.h>

int main()
{
	int i;
	int counter1 = 1;
	int counter2 = 1;
	printf("Preant razmer storoni kvadzata:\n");
	scanf("%d", &i);

	while (counter1++ <= i) {
		while (counter2++ <= i)
			printf("*");
		printf("\n");
		counter2 = 1;
	}

return 0;

}
