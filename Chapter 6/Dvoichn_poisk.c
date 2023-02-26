#include <stdio.h>
#define SIZE 15

int benSerch (int MAS[], int KEY, int low, int high){
    
    int medle;

    while (low <= high){
        medle = (low + high) / 2;

        if (KEY == MAS[medle])
            return medle;
        else if (KEY > MAS[medle])
            low = medle + 1;
        else 
            high = medle - 1;
    }

    return -1;
}


int main()
{
    int mas[SIZE], key, resylt;

    for (int i = 0; i <= SIZE - 1; i++)
        mas[i] = 2 * i;
    
    for (int i = 0; i <= SIZE - 1; i++)
        printf("%3d", mas[i]);
    
    printf("\n");

    printf("Print your key:\n");
    scanf("%d", &key);

    printf("\n");

    resylt = benSerch (mas, key, 0, SIZE - 1);

    if (resylt != -1)
        printf("Key %d found in element number %d\n", key, resylt);
    else
        printf("Key don`t found\n");

    return 0;

}