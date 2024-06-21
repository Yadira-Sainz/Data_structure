//
//  main.cpp
//  heap
//
//  Created by Yadira Sainz on 13/03/23.
//

#include <iostream>
#include <time.h>
#include "heap.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
   
    srand((unsigned) time(nullptr));
    
    int n = 10;
    heap h(n);
    
    for (int i = 0; i < n; i++){
        int x = rand() % 10 * n + 1;
        
        cout<<"ins " << x <<" ";
        h.ins(x);
        h.print();
    }
    
    while(!h.empty()){
        cout<< h.takeout() << endl;
    }
    
    return 0;
}
