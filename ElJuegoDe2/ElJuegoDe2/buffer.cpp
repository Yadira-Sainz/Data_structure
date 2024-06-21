//
//  buffer.cpp
//  ElJuegoDe2
//
//  Created by Yadira Sainz on 07/03/23.
//

#include "buffer.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

Buffer:: Buffer(int cap){
    s = 0;
    n = cap;
    front_index = 0;
    rear_index = -1;
    arreglo = new int[n];
}

Buffer::~Buffer(){
    delete[] arreglo;
}

void Buffer::enqueue(int x){
    rear_index = forth(rear_index);
    arreglo[rear_index] = x;
    s++;
}

void Buffer::dequeue(){
    assert(!empty());
    arreglo[front_index] = 0;
    front_index = forth(front_index);
    s--;
    if(rear_index == n){
        rear_index = 0;
    }
}

int Buffer::front(){
    assert(!empty());
    return arreglo[front_index];
}

void Buffer::print(){
    printf("[");
    for(int i = 0; i < n; i++){
        if(arreglo[i] == 0){
            cout<<setw(4)<<"";
        }else{
            cout<<setw(4)<<arreglo[i];
        }
        
    }
    printf(" ]\n");
}

int Buffer::forth(int i){
    return (i + 1) % n;
}

int Buffer::count(){
    int sum = 0, cnt = 0, i = front_index;
    while(cnt < s){
        sum += arreglo[i];
        i = forth(i);
        cnt++;
    }
    return sum;
}
