package lineal.listaenlazada;

public class Nodo {
    Object valor;
    Nodo siguiente;

    public Nodo(Object valor){
        this.valor = valor;
        this.siguiente = null;
    }

    public Object obtenerValor(){
        return valor;
    }

    public void enlazarSiguiente(Nodo n){
        siguiente = n;
    }

    public Nodo obtenerSigueinte(){
        return siguiente;
    }

}
