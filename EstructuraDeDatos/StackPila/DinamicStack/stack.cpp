#include <iostream>
#include "stack.h"

using namespace std;


stack::node::node(int x){

    _data = x;
    _next = nullptr;

}

stack::stack(int cap){

    list = nullptr;
    s = 0;
    n = cap;

}

stack::~stack(){ }
    
void stack::push(int x){
    assert(!full());

    node *aux = new node(x);
    aux -> next(list);
    list = aux;

    s++;
}

void stack::pop(){
    assert(!empty());

    node *aux = list;
    list = aux -> next();
    delete aux;

    s--;
}

int stack::top(){
    assert(!empty());

    return list -> data();
}
    
void stack::print(){
    for (node *aux = list; aux; aux = aux -> next()){
    cout<< "[";
    cout<< aux -> data() << " ";
    cout<< "]";
    }
    cout<< "\n";
}
