 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

char WhotWill (char *MAS[]){

    srand(time(NULL));
    printf(" will: %s\n", MAS[rand() % 3]);
}


 int main()
 {
    //Массив строк

    char *mas[] = {"Love", "Death", "Robots", "All"};

    int x;
    printf("Scan number of serie (if you wont stopt it, print -1):\n");
    scanf("%d", &x);

    while(x != -1) {
        printf("In seria %d :", x );
        WhotWill(mas);
        scanf("%d", &x);
    }

    return 0;
 }
