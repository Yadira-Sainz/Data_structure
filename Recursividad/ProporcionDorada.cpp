#include<iostream>
using namespace std;

//Case 1

double phi(int n){

    if (n == 0) return 1;
    return 1.0 + 1.0 / phi(n - 1);
}

int main(int argc, char const *argv[])
{
    double x = phi(10);

    int n;
    cin >> n;

    cout << phi(n)<< endl;
    return 0;
}



//Case 2

double phi(int n){

    if (n == 0) return 1;
    return 1.0 + 1.0 / phi(n - 1);
}

int main(int argc, char const *argv[])
{
    double x = phi(10);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) cout << i << ": " << phi(i) << endl;

    return 0;
}
