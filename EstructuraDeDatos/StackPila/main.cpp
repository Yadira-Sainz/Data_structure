#include <iostream>
#include <time.h>
#include "stack.h"

int main()
{
    srand((unsigned) time(nullptr));
    int n = 10;
    Stack s(n);

    for (int i = 0; i < n ;i++){
        int x = rand() % (n * 10) + 1;

        printf("push %i: ", x);
        s.push(x);
        s.print();
    }

    for(int i = 0; i < n ;i++){
        int x = s.top();
        s.pop();

        printf("pop %i: ", x);
        s.print();
    }

/*
    for (int i = 0; i < n * 2; i++){
        int op = rand() % 2;

        //inserción
        if (op == 0){
            int x = rand() % (10 * n) + 1;
            
            printf("push %i: ", x);
            if(s.full()) printf("La prila esta llena \n");
            else{

            s.push(x);
            s.print();
            }

        //extracción
        }else{
            if (s.empty()) printf("La pila esta vacia\n");
            else{

            int x = s.top();
            s.pop();

            printf("pop %i: ", x);
            s.print();
            }
        }
    }
*/
    return 0;
}
