//
//  main.cpp
//  sorting
//
//  Created by Yadira Sainz on 06/03/23.
//

#include <iostream>

typedef struct {
    int *data;
    int n;
    
} arreglo;

int *crear(int n){
    int *p = new int[n];
    
    for(int i = 0; i < n; i++) p[i] = rand() % (10 * n) + 1;
    
    return p;
}

void crear(arreglo &a, int n){
    a.data = crear(n);
    a.n = n;
}

void print(arreglo &a) {
    printf("[ ");
    for(int i = 0; i < a.n; i++) printf("%i ", a.data[i]);
    printf("]\n");
}

int mayor(arreglo &a){
    int m = 0; // conserva la posicion del dato no el valor
    
    for(int i = 1; i < a.n; i++)
        
        if (a.data[i] > a.data[m]) m = i;
    
    return  m; // m tiene la posicion no el valor
}


int main(int argc, const char * argv[]) {
    
    srand(unsigned (time(nullptr)));
    
    int n = 20;
    arreglo a;
    crear(a, n);
    print(a);
    
    int m = mayor(a);
    printf("\nEl mayor dato es el [%i]: %i\n", m, a.data[m]);
    
    delete [] a.data;
    
    return 0;
}
