//
//  main.cpp
//  prueba_de_eficiencia
//
//  Created by Yadira Sainz on 21/04/23.
//

#include <iostream>
#include <iomanip>
#include "algoritmos.cpp"
using namespace std;

int *crear(int n){
    int *p = new int[n];
    for(int i = 0; i < n; i++) p[i] = rand() % (10 * n) + 1;
    return p;
}

int main(int argc, const char * argv[]) {

    srand((unsigned) time(nullptr));
    cout<<"Entrada:"<<endl;
    char c;
    cin>>c;
    cout<<endl<<"Salida:"<<endl;
    AlgoritmoDeOrdenamiento o;
    int count = 0;
    
    switch(c){
        case 'Q':
        case 'q':{
            cout<<"Quicksort"<<endl;
            for(int n = 100; n <= 1000; n+=100){
                for(int i = 0; i < 1000; i++){
                    int *a = crear(n);
                    o.quickSort(a, 0, n - 1, count);
                    delete a;
                }
                float average = (float) count / 1000;
                count = 0;
                cout << setw(4) << right << n << "     ";
                cout << fixed << setprecision(1) << setw(6) << right << average << endl;
    
            }
            break;
        }
        case 'M':
        case 'm':{
            cout<<"Mergesort"<<endl;
            for(int n = 100; n <= 1000; n+=100){
                for(int i = 0; i < 1000; i++){
                    int *a = crear(n);
                    o.mergeSort(a, 0, n - 1, count);
                    delete a;
                }
                float average = (float) count / 1000;
                count = 0;
                cout << setw(4) << right << n << "     ";
                cout << fixed << setprecision(1) << setw(6) << right << average << endl;
            }
            break;
        }
        case 'H':
        case 'h':{
            cout<<"Heapsort"<<endl;
            for(int n = 100; n <= 1000; n+=100){
                for(int i = 0; i < 1000; i++){
                    int *a = crear(n);
                    o.heapSort(a, n, count);
                    delete a;
                }
                float average = (float) count / 1000;
                count = 0;
                cout << setw(4) << right << n << "     ";
                cout << fixed << setprecision(1) << setw(6) << right << average << endl;
            }
            break;
        }
    }
}
