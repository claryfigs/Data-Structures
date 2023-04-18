#ifndef PILHA_H
#define PILHA_H
#define MAX 100

typedef struct {
    char itens[MAX]; //quantidade de itens na pilha
    int topo;
} Pilha;

void inicializa_pilha(Pilha *p);

bool pilha_vazia(Pilha *p);

bool pilha_cheia(Pilha *p);

void push(Pilha *p, char item); //coloca um item na pilha

char pop(Pilha *p); // tira um item

bool verifica_parenteses(char *expr);

#endif