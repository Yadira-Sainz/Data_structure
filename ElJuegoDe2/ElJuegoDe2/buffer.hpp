//
//  buffer.hpp
//  ElJuegoDe2
//
//  Created by Yadira Sainz on 07/03/23.
//

#ifndef buffer_hpp
#define buffer_hpp

#include <stdio.h>

class Buffer{
    int *arreglo;
    int s; //Tamaño
    int n;// Capacidad
    int front_index;
    int rear_index;
    
    
public:
    
    Buffer(int);
    ~Buffer();
    
    void enqueue(int);
    void dequeue();
    int front();
    
    
    int size() const {return s;}
    int cap() const { return n;}
    bool empty() const {return s == 0;}
    bool full() const {return s == n;}

    void print();
    
    int forth(int);
    int count();
};

#endif
