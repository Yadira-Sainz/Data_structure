//
//  cadena.cpp
//  cadena
//
//  Created by Yadira Sainz on 27/02/23.
//

#include "Stack.hpp"
#include <iostream>

using namespace std;


Stack::Stack(int cap){
    s = 0;
    n = cap;

    arreglo = new char[n];

}

Stack::~Stack(){
    delete [] arreglo;
}
    
    void Stack::push(char x){
        assert(!full());

        arreglo[s++] = x;
    }

    void Stack::pop(){
        assert(!empty());

        s--;
    }

    int Stack::top(){
        assert(!empty());
        return arreglo[s -1];
    }

    void Stack::print(){
        printf("[");
        for(int i = 0; i < s; i++)  printf("%c", arreglo[i]);
        printf("]\n");

    }
