package lineal.pila;

import java.util.Scanner;

public class Pila {
    Scanner lector=new Scanner(System.in);
    int pilaNumerica[] = new int[5]; //Creamos un pila
    int tope = -1;

    public void push(){
        if(tope >= pilaNumerica.length-1){
            System.out.println("La pila se encuentra llena");
        }else{
            tope += 1;
            System.out.println("Ingresa el dato: ");
            pilaNumerica[tope] = lector.nextInt();
        }
    }

    public void pop(){
        if(tope == -1){
            System.out.println("La pila esta vacia");
        }else{
            System.out.println("Se ha eliminado un elemento en la pila");
            pilaNumerica[tope] = 0;
        }
    }

    public void mostrarPila(){
        for(int tope = 4; tope >= 0; tope--){
            System.out.println("Datos en la pila: " + pilaNumerica[tope]);
        }
    }
}
