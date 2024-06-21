#ifndef stack_hpp
#define stack_hpp

#include<stdio.h>
#include<assert.h>

class Stack{

    int *list; //Arreglo
    int s; //Tamaño
    int n; // Capacidad

public:

    Stack(int);
    ~Stack();
    
    void push(int);
    void pop();
    int top();

    //Siempre se va a poner aun que no se use
    int size() const {return s;}
    int cap() const { return n;}

    bool empty() const {return s == 0;}
    bool full() const {return s == n;}

    void print();
};


#endif

