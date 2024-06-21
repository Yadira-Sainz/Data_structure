//
//  graph.cpp
//  graph
//
//  Created by Yadira Sainz on 02/05/23.
//

#include "graph.hpp"
void graph::swap(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

int graph::index (int i, int j){
    assert(1 <= i and i <= n);
    assert(1 <= j and j <= n);
    assert(i != j);
    
    if (j > i) swap(i,j);
    return (i-1) * (i-2) / 2 + j - 1;
}

graph::graph(int ord){
    n = ord;
    s = 0;
    E = new bool[n * (n-1) / 2];
}

graph::~graph(){
    delete [] E;
}

void graph::set(int i, int j){
    assert(1 <= i and i <= n);
    assert(1 <= j and j <= n);
    assert(i != j);
    
    if (!E[index(i,j)]){
        E[index(i,j)] = true;
        s++;
    }
}

void graph::unset(int, int){}

bool graph::edge(int i, int j){
    assert(1 <= i and i <= n);
    assert(1 <= j and j <= n);
    assert(i != j);
    
    return E[index(i,j)];
    
}

void print(graph &G){
    for( int i = 1; i <= G.order(); i++){
        for(int j = 1; j <= G.order(); j++){
            if(i == j) printf("0 ");
            else printf("%i ", G.edge(i,j));
        }
        printf("\n");
    }
}
