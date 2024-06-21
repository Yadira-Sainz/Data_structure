//
//  list.cpp
//  list
//
//  Created by Yadira Sainz on 27/02/23.
//

#include "list.hpp"
#include <iostream>
using  namespace std;

list::node::node(int x){
    _data = x;
    _next = nullptr;
}

list::list(int cap){
    n = cap;
    s = 0;
    start = nullptr;
}

list::~list(){}

void list::ins(int x){
    assert(!full());
    
    if (empty()) start = new node(x);
    else {
        node *p = start;
        node *q = nullptr;
        
        while (p != nullptr and p -> data() < x){
            q = p;
            p = p -> next();
        }
        
        node *aux = new node(x);
        
        //Inserción al final de la lista
        if (p == nullptr){
            
            q -> next(aux);
            
         //Inserción por el frente
        }else if (p == start){
            
            aux -> next(start);
            start = aux;
         
         //Inserción por en medio
        }else {
            
            aux -> next(p);
            q -> next(aux);
            
        }
    }
    s++;
}

void list::print(){
    for (node *aux = start; aux; aux = aux -> next()){
    cout<< "[";
    cout<< aux -> data() << " ";
    cout<< "]";
}
    cout<< "\n";
}
