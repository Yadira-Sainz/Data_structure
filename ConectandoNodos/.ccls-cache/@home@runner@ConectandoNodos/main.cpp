/*
  AUTOR:     Yadira Lizeth Sainz Rivera
  CURSO:     Estructura de Datos
  PROGRAMA:  Conectando Nodos
  FECHA:     15/02/2023
*/
#include <iostream>
#include <string.h>

using namespace std;

typedef struct snodo{
  char *mssg;
  snodo *yes;
  snodo *no;
  snodo *direct;
} nodo;

nodo *crear(char *m){
  nodo *p = new nodo;

  p -> mssg = m;
  p -> yes = NULL;
  p -> no = NULL;
  p -> direct = NULL;

  return p;
}

int main() {
  nodo *n[14];

  n[0] = crear("Start");
  n[1] = crear("Do you understand flow charts?");
  n[2] = crear("Okay. You see the line labeled \"yes\"?");
  n[3] = crear("But you see the ones labeled \"no\".");
  n[4] = crear("Listen.");
  n[5] = crear("Wait, what?");
  n[6] = crear("I hate you.");
  n[7] = crear("...And you can see the ones labeled \“no\“?");
  n[8] = crear("But you just followed them twice!");
  n[9] = crear("Good");
  n[10] = crear("Let´s go drink.");
  n[11] = crear("Screw it.");
  n[12] = crear("(That wasn´t a question.)");
  n[13] = crear("Hey, I should try installing FreeBSD!");

  n[0] -> direct = n[1];

  n[1] -> yes = n[9];
  n[1] -> no = n[2];

  n[2] -> yes = n[7];
  n[2] -> no = n[3];

  n[3] -> yes = n[5];
  n[3] -> no = n[4];

  n[4] -> direct = n[6];

  n[7] -> yes = n[9];
  n[7] -> no = n[8];

  n[8] -> yes = n[12];
  n[8] -> no = n[12];

  n[9] -> direct = n[10];

  n[10] -> direct = n[13];

  n[11] -> direct = n[10];

  n[12] -> direct = n[11];

  nodo *p = n[0];
  char answer[4];

  do{

    if (p == n[14]) p = NULL;
    else{
      
      if (p -> yes == NULL && p -> no == NULL){
        cout<< p -> mssg << endl;
        p = p -> direct;
      }else{
        cout<< p -> mssg << endl;
        scanf("%s", answer);
        p = strcmp(answer, "yes") == 0 ? p -> yes : p -> no;
        }
    }

  }while (p);
    //Borra todos los nodos que se crearon
    for (int i = 0; i < 14; i++) delete n[i];

    return 0;
  
}