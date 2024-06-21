//
//  list.cpp
//  LaAgenciaSecreta
//
//  Created by Yadira Sainz on 10/03/23.
//

#include "list.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


LinkedSortedList::LinkedSortedList(){
    head = nullptr;
}

LinkedSortedList::~LinkedSortedList(){
    Node* aux = head;
    Node* next = nullptr;
    
    while(aux != nullptr){
        next = aux->next;
        delete aux;
        aux = next;
    }
}
    
    bool LinkedSortedList::ins(record data){
        record agente;
        if(head && search(data.key, agente)){
            return false;
        }
        Node* newNode = new Node{data, nullptr};
        if (!head || data.key < head->data.key) {
            newNode->next = head;
            head = newNode;
            return true;
        }
        Node* aux = head;
        while (aux->next && aux->next->data.key < data.key) {
            aux = aux->next;
        }
        newNode->next = aux->next;
        aux->next = newNode;
        return true;
    }
    
    void LinkedSortedList::print() {
        Node* aux = head;
        while (aux) {
            cout<<endl<<"Nombre clave: "<< aux->data.key<<endl<<"Nombre real: "<< aux->data.name <<endl<< "Edad: "<< aux->data.age<<endl<<"Nacionalidad: "<< aux->data.country<<endl;
            aux = aux->next;
        }
    }
    
    void LinkedSortedList::printRecord(record data){
            cout <<endl << "Nombre clave: " << data.key << endl<< "Nombre real: " <<data.name << endl << "Edad: " << data.age << endl<<"Nacionalidad: " << data.country << endl;
    }
    
    
    bool LinkedSortedList::supr(string clave) {
        if (head == nullptr) {
            return false;
        }
        if (head->data.key == clave) {
            Node* aux = head;
            printRecord(aux->data);
            cout<<endl<< "¿Borrar la ficha (Y/N)? ";
            char respuesta;
            cin>> respuesta;
            if(respuesta == 'y' || respuesta == 'Y'){
                head = head->next;
                delete aux;
                return true;
            }else{
                return false;
            }
        }
        Node* aux = head;
        while (aux->next != nullptr && aux->next->data.key != clave) {
                aux = aux->next;
        }
        if (aux->next == nullptr) {
            cout<<"Registro no encontrado..";
            return false;
        }
        Node* temp = aux->next;
        printRecord(temp->data);
        cout<<endl<< "¿Borrar la ficha (Y/N)? ";
        char respuesta;
        cin>> respuesta;
        if(respuesta == 'y' || respuesta == 'Y'){
            aux->next = aux->next->next;
            delete temp;
            return true;
        }else{
            return false;
        }
    }
    
    
bool LinkedSortedList::search(string clave, record &data){
    Node* aux = head;
    while (aux != nullptr && aux->data.key != clave) {
        aux = aux->next;
    }
    if(aux && clave == aux -> data.key){
        data = aux -> data;
        return true;
    }else{        
        return false;
    }
}

