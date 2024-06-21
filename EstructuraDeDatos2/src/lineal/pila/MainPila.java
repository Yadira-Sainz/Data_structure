package lineal.pila;

import java.util.Scanner;

public class MainPila {
    public static void main(String[] args) {
        Pila pila = new Pila();
        Scanner lector = new Scanner(System.in);
        int opc;

        do{
            System.out.println("Menú");
            System.out.println("1.- Agregar elemento (push)");
            System.out.println("2.- Eliminar elemento (pop)");
            System.out.println("3.- Mostrar pila");
            System.out.println("0.- Salir");
            opc = lector.nextInt();

            switch (opc){
                case 0:
                    break;
                case 1:
                    pila.push();
                    break;
                case 2:
                    pila.pop();
                    break;
                case 3:
                    pila.mostrarPila();
                    break;
                default:
                    System.out.println("\nIngrese una opción valida");
            }
            System.out.println("Presiona enter para continuar...");
            try{System.in.read();} catch (Exception e){}
        }while(opc != 0);
    }
}
