//
//  heap.hpp
//  heap
//
//  Created by Yadira Sainz on 13/03/23.
//

#ifndef heap_hpp
#define heap_hpp

#include <stdio.h>
#include <assert.h>
#include <iostream>

class heap{
  
    int *list;
    int s;
    int n;
    
    int left(int i) {return i * 2 + 1;}
    int right(int i) {return i * 2 + 2;}
    int parent(int i) {return (i - 1) / 2;}
    
    void swap(int &a, int &b);
    int minchild(int);
    
public:
    
    heap(int);
    ~heap();
    
    void ins(int);
    int takeout();
    void print();
    
    int capacity() const {return n;}
    int size() const {return s;}
    
    bool empty() const { return s == 0;}
    bool full() const {return s == n;}
 };

#endif
