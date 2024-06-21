#ifndef stack_hpp // stack_h
#define stack_hpp // stack_h

#include<stdio.h>
#include<assert.h>

class stack{
    //Definicion de los nodos y solo existe dentro de dinamicStack
    class node{
        int _data;
        node *_next;

    public:

        node(int);

        int data() const {return _data;}
        node *next() const {return _next;}
        node *next(node *p) {return _next = p;} // Se le dice donde apunta el nodo y que va a devorlver
    };
    
    node *list;

    int s; //Tamaño
    int n; // Capacidad

public:

    stack(int);
    ~stack();
    
    void push(int);
    void pop();
    int top();

    int size() const {return s;}
    int cap() const { return n;}

    bool empty() const {return s == 0;}
    bool full() const {return s == n;}

    void print();
};


#endif