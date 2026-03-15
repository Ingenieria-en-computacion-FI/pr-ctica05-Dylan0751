#include "pila.h"

Pila* pila_crear(){
   
    return lista_crear();
   
}

int pila_vacia(Pila* pila){
    
    return lista_vacia(pila);
   
}

void pila_push(Pila* pila, int dato){
    
    lista_insertar_tail(pila, dato);
   
}

int pila_pop(Pila* pila){
    
    return lista_eliminar_tail(pila);
   
}

int pila_top(Pila* pila){

    if(pila_vacia(pila)){
        return -1;
    }
    return pila->tail->dato;
    
}

void pila_destruir(Pila* pila){

    lista_destruir(pila);
    
}
