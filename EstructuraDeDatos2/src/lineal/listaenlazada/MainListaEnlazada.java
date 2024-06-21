package lineal.listaenlazada;

public class MainListaEnlazada {
    public static void main(String[] args) {

        Nodo primer = new Nodo("Hola");
        Nodo segundo = new Nodo(2023);
        Nodo tercer = new Nodo("Welcome");

        primer.enlazarSiguiente(segundo);
        primer.obtenerSigueinte().enlazarSiguiente(tercer);

        System.out.println(primer.obtenerSigueinte().obtenerSigueinte().obtenerValor());

    }
}
