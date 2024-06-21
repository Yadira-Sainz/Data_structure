//
//  main.cpp
//  algoritmos_de_ordenamiento
//
//  Created by Yadira Sainz on 31/03/23.
//

#include <iostream>
#include "algoritmosDeOrdenamiento.cpp"
using namespace std;

int *crear(int n){
    int *p = new int[n];
    for(int i = 0; i < n; i++) p[i] = rand() % (10 * n) + 1;
    return p;
}

int main(int argc, const char * argv[]) {
    
    srand((unsigned) time(nullptr));
    cout<<"Entrada:"<<endl;
    int n;
    cin>>n;
    char c;
    cin>>c;
    cout<<endl<<"Salida:"<<endl;
    int *a = crear(n);
    AlgoritmoDeOrdenamiento o;
    
    switch(c){
        case 'Q':
        case 'q':{
            cout<<"Array:"<<endl;
            o.print(a, n);
            cout<<endl<<"Qsorted array:"<<endl;
            o.quickSort(a, 0, n - 1);
            o.print(a, n);
            break;
        }
        case 'M':
        case 'm':{
            cout<<"Array:"<<endl;
            o.print(a, n);
            cout<<endl<<"Mergesorted array:"<<endl;
            o.mergeSort(a, 0, n - 1);
            o.print(a, n);
            break;
        }
        case 'H':
        case 'h':{
            cout<<"Array:"<<endl;
            o.print(a, n);
            cout<<endl<<"Heapsorted array:"<<endl;
            o.heapSort(a, n);
            o.print(a, n);
            break;
        }
    }
    delete [] a;
    return 0;
}
