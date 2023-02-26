#include <stdio.h>
#include <math.h> 
#define SIZE 10

int main ()
{
    float many;
    int mas [SIZE] = {0};
    int counter;
    int i = 1;

    for(;;){
    
    i++;
    printf("Write information about revenue:\n");
    scanf("%f", &many);

    if (many != -1 ){
        many = 200 + many*0.09;
        many = round(many);

        if (many>=201 && many<=299)
            counter = 1;
        if(many>=300 && many<=399)
            counter = 2;
        if(many>=400 && many<=499)
            counter = 3;
        if(many>=500 && many<=599)
            counter = 4;
        if(many>=600 && many<=699)
            counter = 5;
        if(many>=700 && many<=799)
            counter = 6;
        if(many>=800 && many<=899)
            counter = 7;
        if(many>=900 && many<=999)
         counter = 8;
        if(many>=1000)
            counter = 9;

        ++mas [counter];

        printf ("Manadger %d is located in category %d\n", i, counter);
        }

    else 
        break;

    }
    printf("%s%15s\n", "Category", "Num");

    for (int num = 0; num <= SIZE -1; num++)
        printf("%8d%16d\n", num, mas[num]);

    return 0;
}
