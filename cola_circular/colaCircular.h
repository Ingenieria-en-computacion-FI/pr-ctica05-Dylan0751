#ifndef COLACIRCULAR_H
#define COLACIRCULAR_H
#include <stdbool.h>

#include "../lista/lista.h"

typedef Lista ColaCircular;

ColaCircular* colaC_crear();

bool colaC_vacia(ColaCircular* cola);

void colaC_enqueue(ColaCircular* cola, int dato);

int colaC_dequeue(ColaCircular* cola);

int colaC_frente(ColaCircular* cola);

void colaC_destruir(ColaCircular* cola);

#endif