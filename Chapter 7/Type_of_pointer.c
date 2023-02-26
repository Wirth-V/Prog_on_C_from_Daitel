 #include <stdio.h>

 int main()
 {
    char c = 'N';
    char *pc = &c;
    int *pd;
    pd = (int *)pc;
    printf("pc=%p \n", pc);
    printf("pd=%p \n", pd);
    
    printf("pc=%c \n", *pc);
    printf("pd=%c \n", *pd);

    return 0;
 }
