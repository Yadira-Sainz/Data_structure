//
//  main.cpp
//  search
//
//  Created by Yadira Sainz on 27/03/23.
//

#include <iostream>

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
    for(int k = n - 1; k > 0; k--){
        for (int i = 0; i < k; i++){
            if (a[i] > a[i+1]) swap(a[i], a[i+1]);
        }
    }
}

int counter;

int search(int x, int *a, int n){
    for(int i = 0; i < n; i++) {
        counter++;
        if(a[i] == x) return i;
    }
    return -1;
}


int main(int argc, const char * argv[]) {
    srand((unsigned) time(nullptr));
    
    for(int n = 100; n <= 1000; n+=100){
       
        int ok = 0; // cantidad de casos positivos
        int nok = 0;// cantidad de casos negativos
        
        int sfok = 0;//esfuerzo acumulado de los casos positivos
        int sfnok = 0;//esfuerzo acumulado de los casos negativos
        
        for(int i = 0; i < 100; i++){
            int x = rand() % (10 * n) + 1;
            int *a = crear(n);
            counter = 0;
            
            if(search(x,a,n) < 0){
                nok++;
                sfnok += counter;
            }else{
                ok++;
                sfok += counter;
            }
            delete [] a;
        }
        //Tamaño, casos ok, promedio ok, casos not ok, promedio not ok
        printf("%i %i %.2f %i %.2f \n", n, ok, (float) sfok/ ok, nok, (float) sfnok/ nok);
        
    }
    return 0;
}
