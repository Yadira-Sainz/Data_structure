//
//  main.cpp
//  merge
//
//  Created by Yadira Sainz on 21/03/23.
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

int *merge(int *L1, int n, int *L2, int m){
    
    int *L = new int[n+m];
    
    int i = 0, j = 0, k = 0;
    
    while(i < n && j < m) L[k++] = L1[i] < L2[j] ? L1[i++] : L2[j++];
    while(i < n) L[k++] = L1[i++];
    while(j < m) L[k++] = L2[j++];
    
    return L;
}



int main(int argc, const char * argv[]) {
    
    srand((unsigned) time(nullptr));
    
    int n = rand() % 6 + 5;
    int m = rand() % 6 + 5;
    
    int *L1 = crear(n);
    int *L2 = crear(m);
    
    print(L1,n);
    printf("\n\n");
    
    bsort(L1, n);
    bsort(L2, m);
    
    printf("Lista 1 (%i): \n", n);
    print(L1,n);
    
    printf("\nLista 2 (%i): \n", m);
    print(L2,m);
    
    int *L = merge(L1, n, L2, m);
    
    printf("\nMezcla (%i):\n", n+m);
    print(L, n+m);
    
    delete [] L1;
    delete [] L2;
    delete [] L;
    
    
    return 0;
}
