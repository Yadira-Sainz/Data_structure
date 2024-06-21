//
//  main.cpp
//  bsort
//
//  Created by Yadira Sainz on 07/03/23.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

int *crear(int n){
    int *p = new int[n];
    
    for(int i = 0; i < n; i++) p[i] = rand() % (10 * n) + 1;
    
    return p;
}


void print(int *a, int n) {
    printf("[ ");
    for(int i = 0; i < n; i++) printf("%i ", a[i]);
    printf("]\n");
}


void swap(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

void bsort(int *a, int n){
    //Limite para la formación de pares
    for(int k = n - 1; k > 0; k--){
        
        //Formación de pares
        for (int i = 0; i < k; i++){
            if (a[i] > a[i+1]) swap(a[i], a[i+1]);
        }
    }
}

int main(int argc, const char * argv[]) {
    
    srand(unsigned (time(nullptr)));
    
    int n = 10;
    
    int *a = crear(n);
    
    print(a, n);
    bsort(a, n);
    print(a, n);
    
    delete [] a;
    
    return 0;
}
