 #include <stdio.h>
 #define SIZE 14

 int binarySearch (int MAS[], int KEY, int low, int high){

    int average= (low + high)/2;

/*  while ( low <= high){
        average = (low + high)/2;

        if (KEY == MAS[average])
            return average;
        else if (KEY > MAS[average])
            low = average + 1;
        else  
            high = average - 1;
    }

            return -1;
*/

    if (low > high)
        return -1;

    if (KEY == MAS[average])
            return average;
    else if (KEY > MAS[average]) 
        binarySearch( MAS, KEY, average + 1 , high);
    else if (KEY < MAS[average])
        binarySearch( MAS, KEY, low , average - 1);
 }

 int main()
 {
    int mas[SIZE], key, resulte;

    for (int i = 0; i <= SIZE; i++)
        mas[i] = 2 *i;

    for (int i = 0; i <= SIZE; i++)
        printf("%d ", mas[i]);

    printf("\n");

    printf("Print ypur KEY:\n");
    scanf("%d", &key);

    resulte = binarySearch( mas, key, 0, SIZE);

    if (resulte != -1)
        printf("We chuse your key = %d, it has index = %d\n", key, resulte);
    else 
        printf("Key = %d isn't in mas\n", key);

    return 0;

 }