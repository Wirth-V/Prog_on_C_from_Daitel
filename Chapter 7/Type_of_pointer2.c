 
 #include <stdio.h>

 int main()
 {
    float c = 500;
    float *x = &c;
    int *y;
    y = (int *)x;

    printf("x = %p\n", x);
    printf("y = %p\n", y);
    
    printf("%d\n", *y); /*Я не понимаю в чем тут проблема, и почему он не выводит 500(((*/
 }
