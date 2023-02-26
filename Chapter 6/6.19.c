 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 int main()
 {  
    srand(time(NULL));
    int dice1, dice2, sum;
    int mas[13] = {0};

    for (int i = 1; i<= 36000; i++){
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        sum = dice1 + dice2;
        ++mas[sum];
    } 

    printf("%3s %8s %20s %30s\n", "Sum", "Drop", "Real_С", "Сhance");

    
    for(int i = 2; i <= 12; i++ )
        if(i<= 7)
            printf("%3d%8d%20.3f%30.3f\n", i, mas[i], (float) mas[i]/36000, (float)(i-1)/36 );
        else
            printf("%3d%8d%20.3f%30.3f\n", i, mas[i], (float) mas[i]/36000, (float)(13 - i)/36 );

    return 0;
 }
