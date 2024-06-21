//
//  list.hpp
//  list
//
//  Created by Yadira Sainz on 27/02/23.
//

#ifndef list_hpp
#define list_hpp

#include <stdio.h>

#include<assert.h>

class list{
    //Definicion de los nodos y solo existe dentro de dinamicStack
    class node{
        int _data;
        node *_next;

    public:

        node(int);

        int data() const {return _data;}
        node *next() const {return _next;}
        node *next(node *p) {return _next = p;}
    };
    
    node *start;

    int s; //Tamaño
    int n; // Capacidad

public:

    list(int);
    ~list();
    
    void ins(int);

    int size() const {return s;}
    int cap() const { return n;}

    bool empty() const {return s == 0;}
    bool full() const {return s == n;}

    void print();
};

#endif
