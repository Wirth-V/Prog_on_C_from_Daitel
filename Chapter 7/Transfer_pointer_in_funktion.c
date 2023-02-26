#include <stdio.h>

void masKube (int *);

int main()
{
    int num;

    printf("Enter num:");
    scanf("%d", &num);
    printf("You'r num is: %d\n", num);

    masKube (&num);

    printf("You'r num IN KUBE is: %d\n", num);

    return 0;
}

void masKube (int *aPtr){

    *aPtr = *aPtr * *aPtr * *aPtr;
}
