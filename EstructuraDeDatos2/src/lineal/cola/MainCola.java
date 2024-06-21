package lineal.cola;

import java.util.Scanner;

public class MainCola {
    public static void main(String[] args) {
        Scanner lector = new Scanner(System.in);
        Cola cola = new Cola();
        int opcion;

        do {
            System.out.println("***** MENÚ DE UNA COLA *****");
            System.out.println("1.- Insertar elemento");
            System.out.println("2.- Quitar elemento");
            System.out.println("3.- ¿La cola esta vacia?");
            System.out.println("4.- Elemento al inicio");
            System.out.println("5.- Tamaño");
            System.out.println("0.- Salir");
            opcion = lector.nextInt();

            switch (opcion) {
                case 0:
                    break;
                case 1:
                    System.out.println("Ingresa el elemento: ");
                    int elemento = lector.nextInt();
                    cola.insertar(elemento);
                    break;
                case 2:
                    if (!cola.estaVacia()) {
                        System.out.println("Elemento atendido");
                        cola.quitar();
                    } else {
                        System.out.println("La cola esta vacia");
                    }
                    break;
                case 3:
                    if (cola.estaVacia()) {
                        System.out.println("La cola esta vacia");
                    } else {
                        System.out.println("La cola NO esta vacia");
                    }
                    break;
                case 4:
                    if (!cola.estaVacia()) {
                        System.out.println("El elemento al inicio de la cola es: " + cola.inicioCola());
                    } else {
                        System.out.println("La cola esta vacia");
                    }
                    break;
                case 5:
                    System.out.println("El tamaño de la cola es: " + cola.tamanioCola());
                    break;
                default:
                    System.out.println("Dato invalido...");
            }
            System.out.println("Presiona enter para continuar...");
            try{System.in.read();}catch (Exception e){}
        } while (opcion != 0);
    }
}
