//
//  main.cpp
//  ElJuegoDe2
//
//  Created by Yadira Sainz on 07/03/23.
//

#include <iostream>
#include <iomanip>
#include "buffer.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n;
    
    cin>> n;
    Buffer buffer(n);
    srand( static_cast<unsigned int>(time(nullptr))); //INICIALIZACIÓN DE LA SEMILLA
    for(int i = 0; i < 4 * n; i++){
        int lanzamiento = rand() % 2;
        
        if(lanzamiento == 0){
            int numRand = (rand() % (10 * n)) + 1;
            cout<< "o " << setw(3)<<numRand << ": ";            
            buffer.enqueue(numRand);
            buffer.print();
            if(buffer.full()){
                cout<< endl << "Perdiste " << buffer.count() << " puntos" << endl;
                exit(0);
            }
        }else{
            if(buffer.empty()){
                cout<< "x " <<setw(3)<< 0 << ": ";
                buffer.print();
            }else{
                cout<< "x " << setw(3) << buffer.front() << ": ";
                buffer.dequeue();
                buffer.print();
            }
        }
    }
    cout<< endl << "Ganaste " << buffer.count() << " puntos" << endl;
    return 0;
}
