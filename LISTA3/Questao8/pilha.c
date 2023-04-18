#include "pilha.h"

void initialize(Stack *s) {
  s->top = -1; //verifica se a pilha esta vazia
}

void push(Stack *s, char c) {
  s->data[++(s->top)] = c;
  //colocando letra no topo da pilha
}

char pop(Stack *s) {
  return s->data[(s->top)--]; //removendo letra da pilha
}