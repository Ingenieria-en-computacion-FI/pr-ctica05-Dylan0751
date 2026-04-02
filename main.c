#include <stdio.h>
#include "pila/pila.h"
#include "cola/cola.h"
#include "cola_circular/colaCircular.h"
#include "bicola/bicola.h"

int main() {

    Pila* p = pila_crear();
    Cola* c = cola_crear();

    pila_push(p,10);
    pila_push(p,20);

    cola_enqueue(c,1);
    cola_enqueue(c,2);

    printf("Repositorio compilado correctamente\n");

    pila_destruir(p);
    cola_destruir(c);

    //COLA CIRCULAR 

     ColaCircular* cc = colaC_crear();

    colaC_enqueue(cc, 10);
    colaC_enqueue(cc, 20);
    colaC_enqueue(cc, 30);

    printf("Frente cola circular: %d\n", colaC_frente(cc));

    printf("Desencolar: %d\n", colaC_dequeue(cc));
    printf("Desencolar: %d\n", colaC_dequeue(cc));

    //BICOLA 

    Bicola* b = bicola_crear();

    bicola_enqueue_frente(b, 1);  
    bicola_enqueue_atras(b, 2);    
    bicola_enqueue_frente(b, 0);   

    printf("\nFrente bicola: %d\n", bicola_frente(b));
    printf("Final bicola: %d\n", bicola_atras(b));

    printf("Desencolado frente: %d\n", bicola_dequeue_frente(b));
    printf("Desencolado atras: %d\n", bicola_dequeue_atras(b));

    colaC_destruir(cc);
    bicola_destruir(b);


    return 0;
}
