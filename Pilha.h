//code by: Eric Mnz
#ifndef PILHA_H 
#define PILHA_H 

#include <stdio.h> 
#define MAX 100 

typedef int tp_item; 
    
typedef struct { 
    int topo; 
    tp_item item[MAX]; 
} tp_pilha; 

void inicializa_pilha(tp_pilha *p){ 
    p -> topo = -1; 
}

int pilha_vazia(tp_pilha *p){ 
    if (p -> topo == -1) return 1; 
    return 0; 
}

int pilha_cheia(tp_pilha *p){ 
    if (p -> topo == MAX-1){ 
        return 1;
    } else { 
        return 0;
    }
}

int push(tp_pilha *p, tp_item elemento){ 
    if (pilha_cheia(p) == 1) return 0; 
    p -> topo++; 
    p -> item[p -> topo] = elemento; 
    return 1; 
}

int pop(tp_pilha *p, tp_item *elemento){ 
    if( pilha_vazia(p))
     return 0; 
    *elemento = p -> item[p -> topo]; 
    p -> topo--;
    return 1; 
}

int altura_pilha(tp_pilha *p){ 
    return p -> topo+1; 
}

void imprime_pilha(tp_pilha p){ 
    tp_item elemento; 
    printf("\n");
    while (!pilha_vazia(&p)){ 
        pop(&p, &elemento); 
        printf("%d ", elemento);
    }
}

#endif
 