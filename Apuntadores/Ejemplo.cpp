#include <iostream>

/*
//Ejemplo 1

int main(int argc, char const *argv[])
{
    int a = 10;
    int *p = &a; //el apuntador se diferencia por el *

    printf(" a: %i\n", a);
    printf(" &a: %p\n", &a); //Al agregar el &a se mostrara la dirección de memoria en la que esta guardado
                        // La p indica la dirección(referencia) en hexadecimal
    printf(" p: %p\n", p);
    printf(" *p: %i\n", *p);//Esto es la indirección va a regresar el valor en el apuntador

    return 0;
}
*/


//Ejemplo 2 Intercambiando valores con los apuntadores
void swap(int *m, int *n){
    int aux = *m;
    *m = *n;
    *n = aux;
}

int main(int argc, char const *argv[])
{
    int a = 45;
    int b = 12;

    printf("a: %i\n", a);
    printf("b: %i\n", b);

    swap(&a, &b);

    printf("a: %i\n", a); //Ya toma el valor del apuntador 
    printf("b: %i\n", b);
    return 0;
}

