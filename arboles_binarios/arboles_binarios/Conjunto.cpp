//
//  Conjunto.cpp
//  arboles_binarios
//
//  Created by Yadira Sainz on 18/05/23.
//

#include "Conjunto.hpp"
#include <iostream>
using namespace std;

Conjunto::node::node(int x){
    _data = x;
    _lft = nullptr;
    _rgt = nullptr;
}

void Conjunto::inorder(node *p){
    if(!p) return;
    inorder(p -> lft());
    printf("%i ", p -> data());
    inorder(p -> rgt());
}

Conjunto::Conjunto(int c){
    root = nullptr;
    s = 0;
    n = c;
}

Conjunto::~Conjunto(){
    clear();
}

bool Conjunto::ins(int x){
    assert(!full());
    if(empty()) {
        root = new node(x);
        s++;
        return true;
    }else{
        node *p = root;
        node *q = nullptr;
        while(p and p -> data() != x){
            q = p;
            p = x < p -> data() ? p -> lft() : p -> rgt();
        }
        if (!p){
            if(x < q -> data()) q -> lft(new node(x));
               else q -> rgt(new node(x));
            s++;
            return true;
        }else{
            //cout<<"Duplicated..."<<endl;
            return false;
        }
    }
}

void Conjunto::member(int x){
    if(empty()) {
        cout<<x<<" no es miembro"<<endl;
    }else{
        node *p = root;
        node *q = nullptr;
        while(p and p -> data() != x){
            q = p;
            p = x < p -> data() ? p -> lft() : p -> rgt();
        }
        if(!p){
            cout<<x<<" no es miembro"<<endl;
        }else if(p -> data() == x){
            cout<<x<<" es miembro"<<endl;
        }
    }
}

void Conjunto::supr(int x) {
    if (empty()) {
        cout<<"El conjunto está vacío"<<endl;
        return;
    }
    node *p = root;
    node *parent = nullptr;
    // Busca el nodo a eliminar
    while (p && p -> data() != x) {
        parent = p;
        p = x < p -> data() ? p -> lft() : p -> rgt();
    }
    if (!p) {
        cout<<x<<" no es miembro"<<endl;
        return;
    }
    cout<<x<<" es miembro, ¿desea eliminarlo?"<<endl;
    cout<<"[Y] Yes"<<endl;
    cout<<"[N] No"<<endl;
    char answer;
    cin>>answer;
    if(answer != 'y' and answer != 'Y'){
        return;
    }
    // Caso 1: El nodo es una hoja
    if (!p -> lft() && !p -> rgt()) {
        if (!parent) {
            delete root;
            root = nullptr;
        } else if (parent -> lft() == p) {
            delete parent -> lft();
            parent -> lft(nullptr);
        } else {
            delete parent -> rgt();
            parent -> rgt(nullptr);
        }
        s--;
    return;
    }
    // Caso 2: El nodo tiene solo un hijo
    if (!p -> lft() || !p -> rgt()) {
        node *child = p -> lft() ? p -> lft() : p -> rgt();
        if (!parent) {
            delete root;
            root = child;
        } else if (parent -> lft() == p) {
            delete parent -> lft();
            parent -> lft(child);
        } else {
            delete parent -> rgt();
            parent -> rgt(child);
        }
        s--;
        return;
    }
    // Caso 3: Raíz con dos hijos
    if (!parent) {
        node *successor = p -> rgt();
        parent = p;
        node *successorParent = p;
        while (successor -> lft()) {
            successorParent = successor;
            successor = successor -> lft();
        }
        p->setData(successor -> data());
        if (successorParent -> lft() == successor) {
            successorParent -> lft(successor -> rgt());
        } else {
            successorParent -> rgt(successor -> rgt());
        }
        delete successor;
        s--;
        return;
    }
    // Nodo con dos hijos
    node *successor = p -> rgt();
    parent = p;
    while (successor -> lft()) {
        parent = successor;
        successor = successor -> lft();
    }
    p->setData(successor -> data());
    if (parent -> lft() == successor) {
        delete parent -> lft();
        parent -> lft(nullptr);
    } else {
        delete parent -> rgt();
        parent -> rgt(nullptr);
    }
    s--;
}

void Conjunto::clear() {
    clearTree(root);
    root = nullptr;
    s = 0;
}

void Conjunto::clearTree(node *p) {
    if (p) {
        clearTree(p -> lft());
        clearTree(p -> rgt());
        delete p;
    }
}

void Conjunto::print() {
    printf("[ ");
    inorder(root);
    printf("]\n");
}
