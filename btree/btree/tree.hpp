//
//  tree.hpp
//  btree
//
//  Created by Yadira Sainz on 24/04/23.
//

#ifndef tree_hpp
#define tree_hpp

#include <stdio.h>
#include <assert.h>

class tree{
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
    };
    
    node *root;
    
    int s;
    int n;
    
    void inorder(node *);
    
public:
    tree(int);
    ~tree();
    
    void ins(int);
    void print();
    
    int size() const { return s; }
    int capacity() const { return n; }
    
    bool full() {return n == s; }
    bool empty() {return s == 0; }
};
#endif /* tree_hpp */
