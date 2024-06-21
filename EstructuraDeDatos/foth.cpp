#include <iostream>
using namespace std;

//Indexado natural: 0, 1, 2, 3, ..., n
//int forth(int i, int n) {return i % n + 1;}

//Indexado mod:  0, 1, 2, ..., n-1
int forth(int i, int n) {return (i + 1) % n;}

int main(int argc, char const *argv[])
{
    int n = 13;
    int i = 5;//1 natural

    for (int j = 0; j < 50; j++){
        cout<< i << endl;

        i = forth(i, n);
    }

    return 0;
}
