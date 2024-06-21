//
//  main.cpp
//  arboles_binarios
//
//  Created by Yadira Sainz on 16/05/23.
//

#include <iostream>
#include "Conjunto.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    srand((unsigned) time(nullptr));
    cout<<"Entrada: ";
    int capacity = 100;
    Conjunto c(capacity);
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        while(!c.ins(rand() % (n * 10) + 1));//retry until insert is true
    }
    cout<< endl << "Salida:" << endl;
    
    char opc;
    do{
        cout<<endl;
        cout<<"[I] Insert"<<endl;
        cout<<"[M] Member"<<endl;
        cout<<"[S] Supress"<<endl;
        cout<<"[C] Clean"<<endl;
        cout<<"[L] List"<<endl;
        cout<<"[X] Exit"<<endl;
        cin>>opc;
        int d;
        
        switch(opc){
            case 'X':
            case 'x':
                cout<<endl<<"Ok, bye"<<endl;
                break;
            case 'I':
            case 'i':
                cout<<"Dato: ";
                cin>>d;
                c.ins(d);
                cout<<"Set: ";
                c.print();
                break;
            case 'M':
            case 'm':
                cout<< "Dato: ";
                cin>>d;
                c.member(d);
                break;                
            case 'S':
            case 's':
                cout<<"Dato: ";
                cin>>d;
                c.supr(d);
                cout<<"Set: ";
                c.print();
                break;
            case 'C':
            case 'c':
                cout<<endl<<"¿Desea limpiar el conjunto?"<<endl;
                cout<<"[Y] Yes"<<endl;
                cout<<"[N] No"<<endl;
                char answer;
                cin>>answer;
                if(answer == 'y' || answer == 'Y'){
                    cout<<endl<<"Oki :´("<<endl;
                    c.clear();
                }
                break;
            case 'L':
            case 'l':
                cout<<endl<<"Set:";
                c.print();
                break;
        }
        
    }while(opc != 'X' && opc != 'x');
    
    return 0;
}
