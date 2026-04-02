#ifndef LISTA_H
#define LISTA_H
#include <stdbool.h>

#include "../nodo/nodo.h"

typedef struct {
    Nodo* head;
    Nodo* tail;
} Lista;

Lista* lista_crear();

bool lista_vacia(Lista* lista);

void lista_insertar_head(Lista* lista, int dato);

void lista_insertar_tail(Lista* lista, int dato);

int lista_eliminar_head(Lista* lista);

int lista_eliminar_tail(Lista* lista);

void lista_imprimir(Lista* lista);

void lista_destruir(Lista* lista);

//Funciiones para implementar Cola Circular 

void lista_insertar_head_CC(Lista* lista, int dato);

void lista_insertar_tail_CC(Lista* lista, int dato);

int lista_eliminar_head_CC(Lista* lista);

int lista_eliminar_tail_CC(Lista* lista);

void lista_imprimir_CC(Lista* lista);

void lista_destruir_CC(Lista* lista);

#endif
