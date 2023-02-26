#include <stdio.h>

float calculateCharges (float a){
    if (a <= 3)
        return 2;
    if (a >= 24)
        return 10;
    if (a > 3 && a < 24)
        a = 2 + (a - 3) * 0.5;
        return a;
    
    
}

int main()
{
    float x, y, z, sum = 0; 
    
    printf("Print time fo car 1:\n");
    scanf("%f", &x);
    printf("Print time fo car 2:\n");
    scanf("%f", &y);
    printf("Print time fo car 3:\n");
    scanf("%f", &z);
    
    float x1, y1 ,z1;

    x1 = calculateCharges (x);
    y1 = calculateCharges (y);
    z1 = calculateCharges (z);
    
    printf("\n%4s%15s%26s\n", "Car", "Hours", "Charge" );
    printf("%4d%15.2f%26.2f\n", 1, x, x1 );
    printf("%4d%15.2f%26.2f\n", 2 ,y, y1);
    printf("%4d%15.2f%26.2f\n", 3, z, z1);
    printf("%4s%15.2f%26.2f\n", "Total", x+y+z, x1+y1+z1);

    return 0;
}
