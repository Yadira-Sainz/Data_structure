//
//  main.cpp
//  select
//
//  Created by Yadira Sainz on 06/03/23.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

int *crear(int n){
    int *p = new int[n];
    
    for(int i = 0; i < n; i++) p[i] = rand() % (10 * n) + 1;
    
    return p;
}

void swap(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

void print(int *a, int n) {
    printf("[ ");
    for(int i = 0; i < n; i++) printf("%i ", a[i]);
    printf("]\n");
}

void select(int *a, int n){
    int k = n - 1;
    while(k > 0){
        int m = 0;
        int i;
        
        for (i = 1; i <= k; i++)
            if (a[i] > a[m]) m = i;
        
        printf("\nIntercambia %i <-> %i\n", m, i - 1);
        
        swap(a[m], a[k]);
        print(a, n);
        
        k--;
    }
}

int main(int argc, const char * argv[]) {
    
    srand(unsigned (time(nullptr)));
    
    int n = 10;
    
    int *a = crear(n);
    print(a, n);
    select(a, n);
    print(a, n);
    
    delete [] a;
    
    return 0;
}
