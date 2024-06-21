#include<iostream>

int power(int x, int n){

    if(n == 0) return 1;
    else return x * power(x, n-1);
}



int main(int argc, char const *argv[])
{
    int x = 2;
    int p = 6;

    printf("%i\n", power(x, p));
    printf("%s", "Hola Carola");

    return 0;

}
