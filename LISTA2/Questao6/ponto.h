#ifndef PONTO_H
#define PONTO_H

typedef struct 
{
    float x, y; //coordenadas do ponto no plano
} Ponto;

void libera(Ponto* p); //limpar memoria
Ponto acessa(Ponto* p, float x, float y); //acessa o valor
void atribuir(Ponto* p, float* x, float* y); //retorna a distancia entre os pontos
float distancia(Ponto* p1, Ponto* p2);
Ponto* cria(float x, float y);
Ponto* soma(Ponto* p1, Ponto* p2);

#endif