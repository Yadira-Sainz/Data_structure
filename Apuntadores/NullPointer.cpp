#include<iostream>

int main(int argc, char const *argv[])
{
    int *p = nullptr;

    if (p) printf("%i\n", *p);
    else printf("Tu apuntador es nulo\n");

    return 0;
}

//Ejemplo 2
int main(int argc, char const *argv[])
{
    int *p = nullptr;
    printf("p: %p\n", p);

    if (p != nullptr) printf("%i\n", *p);
    else printf("Tu apuntador es nulo\n");

    return 0;
}


//Ejemplo 3
int main(int argc, char const *argv[])
{
    int a = 5;
    int *p = &a; //nullptr

    if (p) printf("%i\n", *p);
    else printf("Tu apuntador es nulo\n");

    return 0;
}


//Cuanto vale cada tipo de dato
int main(int argc, char const *argv[])
{
    printf("%lu\n", sizeof(int));//4 bite
    printf("%lu\n", sizeof(long));//8 bites
    printf("%lu\n", sizeof(char));//1 bite, 256
    printf("%lu\n", sizeof(int *));//8 bites

    return 0;
}