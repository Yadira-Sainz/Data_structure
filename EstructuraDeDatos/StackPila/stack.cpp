#include "stack.h"

Stack::Stack(int cap){
    s = 0;
    n = cap;

    list = new int[n];

}

Stack::~Stack(){
    delete [] list;
}
    
    void Stack::push(int x){
        assert(!full());

        list[s++] = x;
    }

    void Stack::pop(){
        assert(!empty());

        s--;
    }

    int Stack::top(){
        assert(!empty());
        return list[s -1];
    }

    void Stack::print(){
        printf("[");
        for(int i = 0; i < s; i++)  printf("%i", list[i]);
        printf("]\n");

    }


