#ifndef PILHA_H
#define PILHA_H

#define MAX_SIZE 100

typedef struct {
  char data[MAX_SIZE]; //DADOS
  int top; //TOPO da pilha
} Stack;

void initialize(Stack *s); //inicializar
void push(Stack *s, char c);
char pop(Stack *s);

#endif