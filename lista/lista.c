#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lista.h"

Lista* lista_crear(){
    
    Lista *lista;
    lista = (Lista *)malloc(sizeof(Lista));
    lista-> head = NULL;
    lista-> tail = NULL;
    
    return lista;
}

bool lista_vacia(Lista* lista){
    return lista->head == NULL;
}

void lista_insertar_head(Lista* lista, int dato){

    Nodo* newNodo = nodo_crear(dato);
    if(lista_vacia(lista)){
        lista->head = lista->tail = newNodo;
    }else{
        newNodo->siguiente = lista->head;
        lista->head = newNodo;
    }

}

void lista_insertar_tail(Lista* lista, int dato){
    
    Nodo* newNodo = nodo_crear(dato);
    if(lista_vacia(lista)){
        lista->head = lista->tail = newNodo;
    }else{
        lista->tail->siguiente = newNodo;
        lista->tail = newNodo;
    }

}

int lista_eliminar_head(Lista* lista){

    if(lista_vacia(lista)){
        return -1;
    }
    Nodo* temp = lista->head;
    int dato = temp->dato;

    lista->head = temp->siguiente;

    if (lista->head == NULL){
        lista->tail == NULL;
    }

    nodo_destruir(temp);
    return dato;

}

int lista_eliminar_tail(Lista* lista){

    if(lista_vacia(lista)){
        return -1;
    }
    Nodo* actual = lista->head;

    if(lista->head == lista->tail){
        int dato = actual->dato;
        nodo_destruir(actual);
        lista->head = NULL;
        lista->tail = NULL;

        return dato;
    }

    while(actual->siguiente != lista->tail){
        actual = actual->siguiente;
    }
    Nodo* temp = lista->tail;
    int dato = temp->dato;
    actual->siguiente = NULL;
    lista->tail = actual;

    nodo_destruir(temp);

    return dato;
   
}

void lista_imprimir(Lista* lista)
{
    Nodo* actual = lista->head;

    while(actual != NULL)
    {
        printf("%d -> ", actual->dato);
        actual = actual->siguiente;
    }

    printf("NULL\n");
}

void lista_destruir(Lista* lista){

    while(!lista_vacia(lista)){
        lista_eliminar_head(lista);
    }
    free(lista);
    
}
