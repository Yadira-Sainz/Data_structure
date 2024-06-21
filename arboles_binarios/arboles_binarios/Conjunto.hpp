//
//  Conjunto.hpp
//  arboles_binarios
//
//  Created by Yadira Sainz on 18/05/23.
//

#ifndef Conjunto_hpp
#define Conjunto_hpp

#include <stdio.h>
#include <assert.h>

class Conjunto{
    class node{
        int _data;
        node *_lft;
        node *_rgt;
        
    public:
        
        node(int);
        
        int data() const {return _data; }
        
        node *lft() const {return _lft; }
        node *rgt() const {return _rgt; }
        
        void lft(node *p) { _lft = p; }
        void rgt(node *p) { _rgt = p; }
        
        void setData(int value) { _data = value; }
    };
    
    node *root;
    
    int s;
    int n;
    
    void inorder(node *);
    
    
public:
    Conjunto(int);
    ~Conjunto();
    
    bool ins(int);
    void member(int);
    void supr(int);
    void clear();
    void clearTree(node *);
    void print();
    
    int size() const { return s; }
    int capacity() const { return n; }
    
    bool full() {return n == s; }
    bool empty() {return s == 0; }
};

#endif /* Conjunto_hpp */
