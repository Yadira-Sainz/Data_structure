//
//  list.hpp
//  LaAgenciaSecreta
//
//  Created by Yadira Sainz on 10/03/23.
//

#ifndef list_hpp
#define list_hpp

#include <stdio.h>
#include <string>
using namespace std;

typedef struct{
    string key;
    string name;
    int age;
    string country;
} record;

class LinkedSortedList {
private:
    struct Node {
        record data;
        Node* next;
    };
    Node* head;
    
public:
    LinkedSortedList();
    ~LinkedSortedList();
    
    bool ins(record data);
    void print();
    void printRecord(record data);
    bool supr(string clave);
    bool search(string clave, record &data);
};

#endif 

