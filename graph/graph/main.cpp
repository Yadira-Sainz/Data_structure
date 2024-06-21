//
//  main.cpp
//  graph
//
//  Created by Yadira Sainz on 02/05/23.
//

#include <iostream>
#include "graph.hpp"


int main(int argc, const char * argv[]) {
    
    graph G(6);
     
    G.set(1, 3);
    G.set(1, 6);
    G.set(2, 3);
    G.set(2, 4);
    G.set(2, 5);
    G.set(3, 5);
    G.set(4, 5);
    G.set(4, 6);
    G.set(5, 6);
    
    print(G);
    
    printf("\nOrden del grafo: %i\n", G.order());
    printf("\nTamaño del grafo: %i\n", G.size());
    
    return 0;
}
