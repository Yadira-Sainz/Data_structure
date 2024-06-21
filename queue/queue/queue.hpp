//
//  queue.hpp
//  queue
//
//  Created by Yadira Sainz on 26/02/23.
//

#ifndef queue_hpp
#define queue_hpp

#include <stdio.h>
#include<assert.h>

class Queue{

    int *list;//Arreglo
    int s; //Tamaño
    int n; // Capacidad
    int f; //front index
    int r; //rear index

public:

    Queue(int);
    ~Queue();
    
    void enqueue(int);
    void dequeue();
    int front();

    int size() const {return s;}
    int cap() const { return n;}
    bool empty() const {return s == 0;}
    bool full() const {return s == n;}

    void print();
};

#endif
