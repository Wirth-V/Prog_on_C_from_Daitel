#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void srav (int a[], int b){

    int rez;

    for (int proh = 1; proh <= b - 1; proh++){
        
        for (int i = 0; i <= b - 2; i++){
        
            if (a[i] > a[i+1]){
                rez = a[i];
                a[i] = a[i+1];
                a[i+1] = rez;
                }
                
        } 

    } 
}

int main()
{
    int mas[SIZE], rez;
    srand(time(NULL));
    
    for (int i = 0; i <= SIZE - 1; i++)
        mas[i] = (rand() % 100) + 1;
        
    for (int i = 0; i <= SIZE - 1; i++)
        printf("%4d", mas[i]);
        
    printf("\n\n");
    
    srav ( mas, SIZE);
    
    for (int i = 0; i <= SIZE - 1; i++)
        printf("%4d", mas[i]);
        
    printf("\n\n");		
        
        

}

