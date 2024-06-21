//
//  tree.cpp
//  btree
//
//  Created by Yadira Sainz on 24/04/23.
//

#include "tree.hpp"

tree::node::node(int x){
    _data = x;
    _lft = nullptr;
    _rgt = nullptr;
}

tree::tree(int c){
    root = nullptr;
    s = 0;
    n = c;
}
tree::~tree(){}

void tree::ins(int x){
    assert(!full());
    
    if(empty()) {
        root = new node(x);
        s++;
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
        }
    }
}

void tree::inorder(node *p){
    if(!p) return;
    //printf("%i ", p -> data());// PRE-ORDER
    inorder(p -> lft());
    printf("%i ", p -> data());//IN-ORDER
    inorder(p -> rgt());
    //printf("%i ", p -> data());//POST-ORDER
}

void tree::print() {
    printf("[ ");
    inorder(root);
    printf("]\n");
}

