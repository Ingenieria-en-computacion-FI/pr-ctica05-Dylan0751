#include <stdlib.h>
#include "nodo.h"

Nodo* nodo_crear(int dato){
    Nodo *nodo;
    nodo = (Nodo *)malloc(sizeof(Nodo));
    if(nodo != NULL){
        nodo->dato = dato;
        nodo->siguiente = NULL;
    }
    return nodo;
 }

void nodo_destruir(Nodo* nodo){
    if(nodo != NULL){
        free(nodo);
    }
    
}
