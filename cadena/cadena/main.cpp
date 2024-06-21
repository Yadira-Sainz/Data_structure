//
//  main.cpp
//  cadena
//
//  Created by Yadira Sainz on 27/02/23.
//

#include <iostream>
#include "Stack.hpp"
using  namespace std;



int main(int argc, const char * argv[]) {
    Stack cadena(100);
    string str;
    
    getline(cin, str);
    for(int i = 0; i < str.length(); i++){
        cadena.push(str[i]);
    }
    
    while(!cadena.empty()){
        printf("%c", cadena.top());
        cadena.pop();
    }
    cout<< endl;
       
return 0;
}
