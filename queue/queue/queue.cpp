//
//  queue.cpp
//  queue
//
//  Created by Yadira Sainz on 26/02/23.
//

#include "queue.hpp"
#include <iostream>

using namespace std;

Queue::Queue(int cap){
    s = 0;
    n = cap;
    f = 0;
    r = 0;
    list = new int[n];

}

Queue::~Queue(){
    delete[] list;
}
    //Encolar
    void Queue::enqueue(int x){
        assert(!full());
        list[s++] = x;
        r++;
    }
    //Desencolar
    void Queue::dequeue(){
        assert(!empty());
        f++;
        s--;
        if(f == r){
            r=0;
            f=0;
        }
    }
    
    int Queue::front(){
        assert(!empty());
        return list[f];
    }

    void Queue::print(){
        printf("[ ");
        for(int i = f; i < r; i++)  printf("%i ", list[i]);
        printf("]\n");

    }


