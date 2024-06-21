#include<iostream>
using namespace std;
// Manejo de la memoria dinamica
typedef struct snode{//Nombre de la estructura

    char *mssg;

    snode *yes; // apuntadores a la misma estructura del mismo tipo
    snode *no;

} node;//Nombre del tipo de dato

node *crear(char *m){
    node *p = new node;
    
    p -> mssg = m;
    p -> yes = nullptr;
    p -> no = nullptr;

    return p;
}

/*int main(int argc, char const *argv[])
{
    node *n1 = crear("Does the damn thing work");
    node *n2 = crear("Don´t fuck whit it");   
    node *n3 = crear("Did you fuck whit it");
    node *n4 = crear("Does anyone know?");
    node *n5 = crear("You dumb shit");
    node *n6 = crear("Hide it");
    node *n7 = crear("You poor bastard");
    node *n8 = crear("Will you catch hell?");
    node *n9 = crear("Can you blame someone else");
    node *n10 = crear("Shit-Can it");
    node *n11 = crear("No problem");

    n1 -> yes = n2;
    n1 -> no = n3;

    n2 -> yes = n11;
    n2 -> no = n11;

    n3 -> yes = n5;
    n3 -> no = n8;

    n4 -> yes = n7;
    n4 -> no = n6;

    n5 -> yes = n4;
    n5 -> no = n4;

    n6 -> yes = n11;
    n6 -> no = n11;

    n7 -> yes = n9;
    n7 -> no = n9;

    n8 -> yes = n7;
    n8 -> no = n10;

    n9 -> yes = n11;
    n9 -> no = n7;

    n10 -> yes = n11;
    n10 -> no = n11;

    node * p = n1;

    do {

        char c;

        cout<< p -> mssg << endl;
        cin >> c;

        if (c == 'y') p = p -> yes; //Este se cambia por la linea 79
        else p = p -> no;

        
    }while (p != nullptr);

    //Borrar todos los nodods que se crearon
    delete n1;
    delete n2;
    delete n3;
    delete n4;
    delete n5;
    delete n6;
    delete n7;
    delete n8;
    delete n9;
    delete n10;
    delete n11;

    return 0;
}*/



//Mejorar el anterior
//Este tipo de programación es una maquina de estado
int main(int argc, char const *argv[])
{

    node *n[11]; // No se puede eliminar todo el arreglo por que es estatico

    n[0] = crear("Does the damn thing work");
    n[1] = crear("Don´t fuck whit it");   
    n[2] = crear("Did you fuck whit it");
    n[3] = crear("Does anyone know?");
    n[4] = crear("You dumb shit");
    n[5] = crear("Hide it");
    n[6] = crear("You poor bastard");
    n[7] = crear("Will you catch hell?");
    n[8] = crear("Can you blame someone else");
    n[9] = crear("Shit-Can it");
    n[10] = crear("No problem");

    n[0] -> yes = n[1];
    n[0] -> no = n[2];

    n[1] -> yes = n[10];
    n[1] -> no = n[1]; //10

    n[2] -> yes = n[4];
    n[2] -> no = n[7];

    n[3] -> yes = n[6];
    n[3] -> no = n[5];

    n[4] -> yes = n[3];
    n[4] -> no = n[4]; //3

    n[5] -> yes = n[10];
    n[5] -> no = n[10];

    n[6] -> yes = n[8];
    n[6] -> no = n[6];//8

    n[7] -> yes = n[6];
    n[7] -> no = n[9];

    n[8] -> yes = n[10];
    n[8] -> no = n[6];

    n[9] -> yes = n[10];
    n[9] -> no = n[9];//10

    node * p = n[0];
    char c;

    do {

        cout<< p -> mssg << endl;

        if (p == n[10]) p = nullptr;
        else{

        cin >> c;
        
        p = c == 'y' ? p -> yes : p -> no;
        //Es lo mismo que la linea 161
        /*if(c == 'y'){
            p = p -> yes;
        }else{
            p = p -> no;
        }*/
        }

    }while (p); 

    //Borrar todos los nodos que se crearon
    for (int i = 0; i < 11; i++) delete n[i];

    return 0;
}