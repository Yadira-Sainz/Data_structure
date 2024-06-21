//
//  main.cpp
//  list
//
//  Created by Yadira Sainz on 27/02/23.
//

#include <iostream>
#include "list.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    list l(10);
    int x;
    
    do{
        cin >> x;
        if (x > 0){
            
            l.ins(x);
            l.print();
        }
        
    }while(x != 0);
    
    
    return 0;
}
