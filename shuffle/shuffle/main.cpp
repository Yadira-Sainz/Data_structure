//
//  main.cpp
//  shuffle
//
//  Created by Yadira Sainz on 27/03/23.
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
    for(int k = n - 1; k > 0; k--){
        for (int i = 0; i < k; i++){
            if (a[i] > a[i+1]) swap(a[i], a[i+1]);
        }
    }
}

void shuffle(int *a, int k, int n){
    if (k == 0) print(a, n);
    else{
        for(int i = 0; i <= k; i++){
            shuffle(a, k-1, n);
            
            if(k % 2 == 1) swap(a[0], a[k]);
            else swap(a[i], a[k]);
        }
    }
}


int main(int argc, const char * argv[]) {
    srand((unsigned) time(nullptr));
    int n = 4;
    
    int *a = crear(n);
    bsort(a,n);
    print(a,n);
    printf("\n");
    
    shuffle(a, n-1, n);
    
    
    return 0;
}
