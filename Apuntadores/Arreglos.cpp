#include<iostream>

/*
int main(int argc, char const *argv[])
{
    int a[10] = {6, 3, 10, -4, 5, 12, -2, 0, 1, 9};

    for (int i = 0; i < 10; i++) printf("%i ", a[i]);

    printf("\n");

    printf("%p\n", &a[0]);
    printf("a:     %p\n", a);//El nombre de un arreglo es un apuntador en este caso a
    printf("*a:    %i\n", *a);

    return 0;
}
*/



//Ejemplo 2
void print(int *a, int n){
    //for (int i = 0; i < 10; i++) printf("%i ", a[i]);
    for (int i = 0; i < n; i++) printf("%i ", *(a + i)); //Da el mismo resultado que el de arriba y es lo mismo
}


int main(int argc, char const *argv[])
{
    int a[10] = {6, 3, 10, -4, 5, 12, -2, 0, 1, 9};

    print(a, 10);
    printf("\n\n");

    printf("%p\n", &a[0]);
    printf("a:     %p\n", a);
    printf("*a:    %i\n", *a);

    return 0;
}



//Ejemplo 3
void print(int *a, int n){
    for (int i = 0; i < n; i++){
        printf("%i ", *a);
        a++;
    //for (int i = 0; i < n; i++) printf("%i ", *a++); //Primero hace el * y despues lo de ++
    }
}


int main(int argc, char const *argv[])
{
    int a[10] = {6, 3, 10, -4, 5, 12, -2, 0, 1, 9};

    print(a, 10);
    printf("\n\n");

    printf("%p\n", &a[0]);
    printf("a:     %p\n", a);
    printf("*a:    %i\n", *a);

    return 0;
}



//Ejemplo 4 Imprimir una cadena de caracteres
void imprime(char *c){//const antes de char si el compilador lo pide
    while (*c) putchar(*c++);
}

int main(int argc, char const *argv[])
{
    char *mensaje = "Hola mundo"; //Const al inicio es para no perder la dirección de la cadena.

    imprime(mensaje);

    return 0;
}

