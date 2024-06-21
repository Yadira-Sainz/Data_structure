//
//  main.cpp
//  LaAgenciaSecreta
//
//  Created by Yadira Sainz on 10/03/23.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>
#include "list.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    LinkedSortedList list;
    
    list.ins({"Bond", "Jaime", 30, "U.S."});
    list.ins({"Jack", "Jorge", 31, "México"});
    list.ins({"Spy", "Mosquito", 20, "Rusia"});
    
    char opc;
    do{
        cout<<endl;
        cout<<"[A] Agregar agente"<<endl;
        cout<<"[C] Consultar agente"<<endl;
        cout<<"[E] Eliminar agente"<<endl;
        cout<<"[L] Listado completo de agentes"<<endl;
        cout<<"[X] Exit"<<endl;
        cin>>opc;
        
        switch(opc){
            case 'X':
            case 'x':{
                cout<<"This message will self-destruct in five seconds."<<endl;
                sleep(5);
                system("clear");
                break;
            }
            case 'A':
            case 'a':{
                cout<<"Introduzca los datos del nuevo agente:"<<endl;
                record data;
                cout<<"Nombre clave: ";
                cin>>data.key;
                cout<<"Nombre real: ";
                cin>>data.name;
                cout<<"Edad: ";
                cin>>data.age;
                cout<<"Nacionalidad: ";
                cin>>data.country;
                list.ins(data);
                break;
            }
            case 'C':
            case 'c':{
                cout<<"Nombre clave del agente: ";
                string key;
                cin>>key;
                record data;
                if(list.search(key, data)){
                    list.printRecord(data);
                }else{
                    cout<<"Agente no encontrado";
                }
            
                cout<<endl;
                break;
            }
            case 'E':
            case 'e':{
                cout<<"Nombre clave del agente: ";
                string key;
                cin>>key;
                if(list.supr(key)){
                    cout<<"Ficha eliminada con éxito";
                }else{
                    cout<<"Ficha no eliminada";
                }
                cout<<endl;
                break;
            }
            case 'L':
            case 'l':{
                list.print();
                break;
            }
        }
    }while(opc != 'X' && opc != 'x');
    
    return 0;
}
