#include<iostream>
using namespace std;

void hanoi(int n, char origen, char inter, char destino){

    if (n > 0){

        hanoi(n-1, origen, destino, inter);
        cout << origen << " --> " << destino << endl;
        hanoi(n-1, inter, origen, destino);
}
}

int main(int argc, char const *argv[])
{
    int n;

    cin >> n;
    hanoi(n, 'A', 'B', 'C');

    return 0;
}
