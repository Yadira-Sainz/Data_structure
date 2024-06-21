package lineal.cola;

public class Cola {
    NodoCola inicio, fin;
    int tama;

    public Cola(){ //Este constructor solo inicializa las variables
        inicio = fin = null;
        tama = 0;
    }

    public boolean estaVacia(){
        return inicio == null;
    }

    public void insertar(int elemento){
        NodoCola nuevo = new NodoCola(elemento);
        if(estaVacia()){
            inicio = nuevo;
        }else{
            fin.siguiente = nuevo;
        }
        fin = nuevo;
        tama++;
    }

    public int quitar(){
        int aux = inicio.dato;
        inicio = inicio.siguiente;
        tama--;
        return aux;
    }

    public int inicioCola(){
        return inicio.dato;
    }

    public int tamanioCola(){
        return tama;
    }
}
