 #include <stdio.h>

int main()
{
    long value1 = 200000, value2;

    /*a)*/ long *lPtr;
    /*b)*/ lPtr = &value1;
    /*c)*/ printf("%ld\n", *lPtr);
    /*d)*/ value2 = *lPtr;
    /*e)*/ printf("%ld\n", value2);
    /*f)*/ printf("%p\n", &value1);
    /*d)*/ printf("%p\n", lPtr);



    return 0;
}