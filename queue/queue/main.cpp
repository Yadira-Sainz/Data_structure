//
//  main.cpp
//  queue
//
//  Created by Yadira Sainz on 26/02/23.
//

#include <iostream>
#include "queue.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n = 20;
    Queue queue(n);
    int num;
    
    do{
        
        cin>> num;
        if(num > 0){
            queue.enqueue(num);
            queue.print();
        }else if(num == 0){
            while(!queue.empty()){
                int x = queue.front();
                queue.dequeue();
                cout<<x;
                queue.print();
            }
        }
    }while(num >= 0);
    
    
    return 0;
}
