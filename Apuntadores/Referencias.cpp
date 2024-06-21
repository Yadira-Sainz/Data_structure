#include<iostream>

using namespace std;



int main(int argc, char const *argv[])
{
    int a = 5;
    int &b = a;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    a += 4;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    b-= 3;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    printf("Dirección de a: %p\n", &a);
    printf("Dirección de b: %p\n", &b);

    return 0;
}


//Ejemplo 2

//Parámetros formales
void swap(int &m, int &n){ //Con el & se hace referencia a la variable del main en este caso a y b
        int aux = m;
        m = n;
        n = aux;
}


int main(int argc, char const *argv[])
{

        int a = 5;
        int b = 7;

        cout << "a: " << a << endl;
        cout << "b: " << b << endl;

        swap(a,b); //Parámetros actuales

        cout << "a: " << a << endl;
        cout << "b: " << b << endl;

    return 0;
}

