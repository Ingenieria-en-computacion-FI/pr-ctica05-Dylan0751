#include "colaCircular.h"

ColaCircular* colaC_crear(){

    return lista_crear();
}

bool colaC_vacia(ColaCircular* cola){

    return lista_vacia(cola);
}

void colaC_enqueue(ColaCircular* cola, int dato){

    lista_insertar_tail_CC(cola, dato);
}

int colaC_dequeue(ColaCircular* cola){

    return lista_eliminar_head_CC(cola);
}

int colaC_frente(ColaCircular* cola){

    if(colaC_vacia(cola)){
        return -1;
    }
    return cola->head->dato;
}

void colaC_destruir(ColaCircular* cola){

    lista_destruir_CC(cola);
}
