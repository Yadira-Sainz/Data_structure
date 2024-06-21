//
//  main.cpp
//  ElTorneoPokemon
//
//  Created by Yadira Sainz on 30/03/23.
//

#include <iostream>
#include "Heap.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cout<<"Entrada:"<<endl;
    cin>>n;
    Heap ketchum(n);
    Heap oak(n);

    
    srand((unsigned) time(nullptr));//INICIALIZACIÔN DE LA SEMILLA Reply srand(time(nullptr));
    for(int i = 0; i < n; i++){
        ketchum.ins((rand() % (4 * n)) + 1);
        oak.ins((rand() % (4 * n)) + 1);
    }
    cout<<"Salida:"<<endl;
    cout<<"Ketchum: "; ketchum.print();
    cout<<"Oak:     "; oak.print();
    cout<<endl<<"Inicia el torneo"<<endl<<endl;
    
    int k = ketchum.takeout();
    int o = oak.takeout();

    while(true){
        cout<<"k:"<<k<<" Vs. "<<"o:"<<o<<" | ";
        if(k > o){
            cout<<"Ketchum wins"<<endl;
            k -= o;
            if(oak.empty()){
                cout<<endl<<"Oak is out of pokes!"<<endl;
                cout<<"Ketchum wins the tournment!"<<endl;
                break;
            }else{
                o = oak.takeout();
            }
        }else if(k == o){
            cout<<"Nobody wins"<<endl;
            if(ketchum.empty() && oak.empty()){
                cout<<endl<<"No one has pokes left!"<<endl;
                cout<<"Nobody wins, it´s a tie!"<<endl;
                break;
            }else{
                k = ketchum.takeout();
                o = oak.takeout();
            }
        }else {
            cout<<"Oak wins"<<endl;
            o -= k;
            if(ketchum.empty()){
                cout<<endl<<"Ketchum is out of pokes!"<<endl;
                cout<<"Oak wins the tournment!"<<endl;
                break;
            }else{
                k = ketchum.takeout();
            }
        }
    }
    
    return 0;
}
