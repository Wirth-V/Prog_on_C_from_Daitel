 //Массив указателей на функцию
 #include <stdio.h>

int f1 (int a1) {
    return a1*a1;
}

int f2 (int a2) {
    return a2*a2*a2;
}

 int main()
 {
    int (*f[2]) (int) = {f1, f2};

    int i ,num;
    printf("If kwad, vved 0; if kub, vved 1:\n");
    scanf("%d", &i);
    printf("Print your num:\n");
    scanf("%d", &num);

    printf ("%d \n", f[i](num) );


     return 0;
 }
