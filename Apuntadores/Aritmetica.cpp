#include<iostream>

int main(int argc, char const *argv[])
{

    int a = 21;
    int *p = &a;

    printf("sixe of int: %lu\n", sizeof(int));
    printf("p: %p\n", p);
    printf("p+1: %p\n", p+1);
    printf("p+2: %p\n", p+2);
    printf("p-2: %p\n", p-2);

    return 0;
}

//Ejemplo 2
 int main(int argc, char const *argv[])
 {

    int a = 21;
    int *p = &a;

    printf("sixe of int: %lu\n", sizeof(int));
    printf("p: %p\n", p);
    printf("p+1: %p\n", p+1);
    printf("p+2: %p\n", p+2);
    printf("p-2: %p\n", p-2);

    p++;

    printf("\nDespués de p++:\n");

    printf("sixe of int: %lu\n", sizeof(int));
    printf("p: %p\n", p);
    printf("p+1: %p\n", p+1);
    printf("p+2: %p\n", p+2);
    printf("p-2: %p\n", p-2);

    return 0;
}
