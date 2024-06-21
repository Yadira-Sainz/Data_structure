/*
  AUTOR:     Yadira Lizeth Sainz Rivera
  CURSO:     Estructura de Datos
  PROGRAMA:  Números aleatorios
  FECHA:     30/01/2023
*/
#include <iostream>
#include <cstdio>
#include <ctime>
#include <math.h>

using namespace std;

/*
  float random_float(float min, float max){
    float scale =rand() / (float) RAND_MAX;
    return min + scale * (max - min);
  }
*/

float random_float(float min, float max, int p){
  //srand(time(0));
  float scale = (float)rand()/(float)RAND_MAX;
  int power = pow(10,p);
  float result = (min + scale * (max - min));
  return floor(power * result) / power;
}

int main() {

  cout<< "Introduzca el valor de n: " << "\n";
  int n;
  cin>> n;
  cout<< "Introduzca el valor minimo que se puede generar: " << "\n";
  double min;
  cin>> min;
  cout<< "Introduzca el valor maximo que se puede generar: " << "\n";
  double max;
  cin>> max;
  cout<< "Introduzca la precisión de digitos: " << "\n";
  int p;
  cin>> p;

    srand(time(NULL));

  
  for(int i = 0; i < n; i++){
    printf("%f\n", random_float(min, max, p));
    
  }
}