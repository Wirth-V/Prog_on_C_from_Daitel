#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    srand( time(NULL) );
    
    int x = 2 * (1 + (rand() % 5) );
    printf("a) %d\n", x );
    printf("b) %d\n", 1 + 2 * (rand() % 6) );
    printf("c) %d\n\n", 6 + 4 * (rand() % 5) );
    
    int  one = 0, two = 0, three = 0, foure = 0, five = 0;
    
    for (int i = 1; i <= 1000; i++) {
         x = 1 + (rand() % 5);
         
         switch(x) {
            case 1:
                 one++;
                 break;
            case 2:
                 two++;
                 break;
            case 3:
                 three++;
                 break;
            case 4:
                 foure++;
                 break;
            case 5:
                 five++;
                 break;
         }
    }
    
    printf("%s%10s\n", "num", "kol-vo");
    printf("%s%10d\n", "1", one);
    printf("%s%10d\n", "2", two);
    printf("%s%10d\n", "3", three);
    printf("%s%10d\n", "4", foure);
    printf("%s%10d\n", "5", five);
    
    return 0; 
}
