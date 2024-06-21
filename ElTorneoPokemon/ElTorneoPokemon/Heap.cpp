//
//  heap.cpp
//  ElTorneoPokemon
//
//  Created by Yadira Sainz on 30/03/23.
//

#include "Heap.hpp"

Heap::Heap(int cap){
    s = 0;
    n = cap;
    list = new int[n];
}

Heap::~Heap(){
    delete[] list;
}

void Heap::ins(int x){
    assert(!full());
    
    list[s++] = x;
    
    int i = s - 1;
    
    while(i > 0 and list[i]  < list[parent(i)]){
        
        swap(list[i], list[parent(i)]);
        i = parent(i);
    }
}

int Heap::takeout(){
    assert(!empty());
    int x = list[0];
    
    if(s > 1){
        
        list[0] = list[s-1];
        int i = 0;
        s--;
        
        int m = minchild(i);
        
        while(i <= parent(s-1) and list[i] > list[m]){
            swap(list[i], list[m]);
            i = m;
            m = minchild(i);
        }
    }else s--;
    return x;
}

int Heap::minchild(int i){
    if(right(i) > s - 1) return left(i);
    
    return list[left(i)] < list[right(i)] ? left(i) : right(i);
}

void Heap::swap(int &a, int &b){
    int c = a;
    a = b;
    b = c;
    
}

void Heap::print(){
    printf("[ ");
    for (int i = 0; i < s; i++)printf("%i ", list[i]);
    printf("]\n");
}
