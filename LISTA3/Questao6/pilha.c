#include <stdio.h> //printf
#include <stdlib.h> //malloc
#include <stdbool.h> //booleano
#include <string.h> //usar string
#include "pilha.h"

void inicializa_pilha(Pilha *p) {
    p->topo = -1;
    //construtor da pilha
}

bool pilha_vazia(Pilha *p) {
    return p->topo == -1;
    //se inicia no 0, se existir um -1,
    //significa que está vazia, retorna true
}

bool pilha_cheia(Pilha *p) {
    return p->topo == MAX - 1;
    //verifica se ainda existe espaço dentro do MAX
}

void push(Pilha *p, char item) { //colocar item
    if (pilha_cheia(p)) {
        printf("Erro: pilha cheia!\n");
        exit(1);
    } else {
        p->topo++; //controlando a quantidade
        p->itens[p->topo] = item; //quantidade nova de itens
    }
}

char pop(Pilha *p) { //tirar itens
    if (pilha_vazia(p)) {
        printf("Erro: pilha vazia!\n");
        exit(1);
    }
        char item = p->itens[p->topo];
        p->itens[p->topo]=NULL;
        p->topo--;
        return item;//retorno o novo topo
    }

bool verifica_parenteses(char *expr) { //verifica se os parenteses estão sendo fechados
    Pilha p;
    inicializa_pilha(&p); //cria a pilha com referencia de memória

    int tam = strlen(expr);
    //pega o tamanho da string, necessita de biblioteca

    for (int i = 0; i < tam; i++) {
        if (expr[i] == '(') {   //verifica se tem abertura de parentese
            push(&p, expr[i]);  //adiciona na posição da frente
        } else if (expr[i] == ')') { //verifica o parentese fechado
            
            if (pilha_vazia(&p) || pop(&p) != '(') {
                //se a pilha nao estiver vazia ou se for caracteres
                return false; //está incorreto
            }
        }
    }""
    return pilha_vazia(&p);
}