#include "bicola.h"

Bicola* bicola_crear(){

    return lista_crear();
}

bool bicola_vacia(Bicola* bicola){

    return lista_vacia(bicola);
}

//INSERTAR

void bicola_enqueue_frente(Bicola* bicola, int dato){

    lista_insertar_head(bicola, dato);
}

void bicola_enqueue_atras(Bicola* bicola, int dato){

    lista_insertar_tail(bicola, dato);
}

//ELIMINAR

int bicola_dequeue_frente(Bicola* bicola){

    return lista_eliminar_head(bicola);
}

int bicola_dequeue_atras(Bicola* bicola){

    return lista_eliminar_tail(bicola);
}

//CONSULTAR

int bicola_frente(Bicola* bicola){

    if(bicola_vacia(bicola)){
        return -1;
    }

    return bicola->head->dato;
}
int bicola_atras(Bicola* bicola){

    if(bicola_vacia(bicola)){
        return -1;
    }

    return bicola->tail->dato;
}

void bicola_destruir(Bicola* bicola){

    lista_destruir(bicola);
}
