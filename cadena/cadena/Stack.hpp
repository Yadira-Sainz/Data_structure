//
//  cadena.hpp
//  cadena
//
//  Created by Yadira Sainz on 27/02/23.
//

#ifndef cadena_hpp
#define cadena_hpp

#include <stdio.h>
#include<assert.h>

class Stack{

    char *arreglo; //Arreglo
    int s; //Tamaño
    int n; // Capacidad

public:

    Stack(int);
    ~Stack();
    
    void push(char);
    void pop();
    int top();

    int size() const {return s;}
    int cap() const { return n;}

    bool empty() const {return s == 0;}
    bool full() const {return s == n;}

    void print();
};
#endif
