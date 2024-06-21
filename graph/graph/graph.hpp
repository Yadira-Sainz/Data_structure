//
//  graph.hpp
//  graph
//
//  Created by Yadira Sainz on 02/05/23.
//

#ifndef graph_hpp
#define graph_hpp

#include <stdio.h>
#include <assert.h>

class graph{
    bool *E;
    int n;// orden del grafo
    int s;// cantidad de aristas
    
    void swap(int &, int &);
    int index(int, int);
    
public:
    graph(int);
    ~graph();
    
    void set(int, int);
    void unset(int, int);
    bool edge(int, int);
    
    int order() const { return n; }
    int size() const { return s; }
    
};

extern void print(graph &);

#endif /* graph_hpp */
