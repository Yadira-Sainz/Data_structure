#include<iostream>
using namespace std;

//Caso 1

long fibo(long i){

    if(i == 1 or i == 2) return 1;
    else return fibo(i - 1) + fibo(i - 2);
}


int main(int argc, char const *argv[])
{
    
    long x;

    cin>> x;
    cout<< fibo(x)<< endl;
   

    return 0;
}




// Caso 2

long fibo(long i){

    if(i == 1 or i == 2) return 1;
    else return fibo(i - 1) + fibo(i - 2);
}


int main(int argc, char const *argv[])
{
   
   //Muestra todos los datos 
   for (int i =1; i <= 10; i++){
    cout<< i << ": " << fibo(i) <<endl;
   }

    return 0;
}




// Caso 3

long counter;

long fibo(long i){
    counter++;

    if(i == 1 or i == 2) return 1;
    else return fibo(i - 1) + fibo(i - 2);
}


int main(int argc, char const *argv[])
{
    
   for (int i =1; i <= 10; i++){
    counter = 0;
    cout<< i << ": " << fibo(i)<<" "<< counter <<endl;
   }

    return 0;
}