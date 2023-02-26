 #include <stdio.h>

 int fun (int, int (*) (int));
 int kvad (int );

int main()
{
    int x = 5, y;
    y = fun (x, kvad);

    // Нет разницы между передачей kvad и &kvad

    printf("%d\n", y);

    return 0;
}

int kvad (int a){
    return a * a;
}

int fun (int X, int (*copy) (int )){

    return (*copy) (X); //или return copy (X);
    //они выводт одно и тоже, просто в 1-м случии передается адрес начала функции,
    // а во 2-м указатель используется не посредственно как имя функции


}
