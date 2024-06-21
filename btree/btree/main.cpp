//
//  main.cpp
//  btree
//
//  Created by Yadira Sainz on 24/04/23.
//

#include <iostream>
#include "tree.hpp"
#include <cstdio>

int main(int argc, const char * argv[]) {
    
    srand((unsigned)time(nullptr));
    
    int n = 100;
    tree t(n);
    
    while(!t.full()) t.ins(rand() % (n * 10) + 1);
    
    t.print();
    return 0;
}
