#include <stdio.h>
#include <math.h>

double ToInteger ( double num){
    
    return floor (num);
    
}

double ToTenths (double num){

    return floor (num * 10 + .5)/10;
}

double ToHundresths (double num){

    return floor (num *100 + .5)/100;
}

double ToThousandths (double num){
 
    return (num *1000 + .5)/ 1000;
}


int main()
{
    double x;
    
    scanf("%lf", &x);
    printf("%lf\n", ToInteger (x));
    printf("%lf\n", ToTenths (x));
    printf("%lf\n", ToHundresths (x));
    printf("%lf\n", ToThousandths (x));
    return 0;
}
