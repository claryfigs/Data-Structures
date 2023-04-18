#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "ponto.h"

Ponto acessa(Ponto* p, float x, float y){
    return *p; //acessando o valor do ponteiro
}

void atribuir(Ponto* p, float* x, float* y){
    *x = p->x;
    *y = p->y; //atribuindo valores aos ponteiros
}

float distancia(Ponto* p1, Ponto* p2){
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y; //distancia entre os ponteiros
    return sqrt(dx*dx + dy*dy);
}

void libera(Ponto* p){
    free(p); //limpa espaço de memoria
}

Ponto* cria(float x, float y){
    Ponto* p = (Ponto*) malloc(sizeof(Ponto)); //especifica tamanho da memoria
    if (p == NULL){
        printf("Memoria Insuficiente!\n");
        exit(1); //caso nao tenha espaço de memoria para o ponto
    }
    p->x = x;
    p->y = y;
    return p;
}

Ponto* soma(Ponto* p1, Ponto* p2){
    return cria(p1->x + p2->x , p1->y + p2->y);
    //retornando um novo ponto
}

int main(){
    Ponto* p1 = cria(2,3);
    Ponto* p2 = cria(2,3);
    Ponto* p3 = soma(p1,p2);

    printf("%f %f", p3->x, p3->y);
    //mostrar as coordenadas do p3
    return 0;
}