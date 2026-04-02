#ifndef BICOLA_H
#define BICOLA_H
#include <stdbool.h>

#include "../lista/lista.h"

typedef Lista Bicola;

Bicola* bicola_crear();

bool bicola_vacia(Bicola* bicola);

//INSERTAR

void bicola_enqueue_frente(Bicola* bicola, int dato);
void bicola_enqueue_atras(Bicola* bicola, int dato);

//ELIMINAR

int bicola_dequeue_frente(Bicola* bicola);
int bicola_dequeue_atras(Bicola* bicola);

//CONSULTAR

int bicola_frente(Bicola* bicola);
int bicola_atras(Bicola* bicola);

void bicola_destruir(Bicola* bicola);

#endif