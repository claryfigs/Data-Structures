#ifndef NCOMPLEXO.H
#define NCOMPLEXO.H

typedef struct numerocomplexo{
    float x;
    float y;
}complexo;

complexo* criar(float x, float y); //recebe duas variaveis

complexo* somar(complexo* z1, complexo* z2); //recebe dois numeros complexos

complexo* multi(complexo* z1, complexo* z2); //recebe dois numeros complexos

void destruir(complexo* z); //nao retorna nada, somente limpa a memoria

#endif
