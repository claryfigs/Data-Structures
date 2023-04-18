#include "complexos.h"
#include <stdlib.h>

complexo* criar(float x, float y){
    complexo* z = (complexo*) malloc(sizeof(complexo)); //alocar memória para o complexo
    z->x = x; //adicionando os valores do construtor dentro do espaço de memória
    z->y = y;
    return z;
}

complexo* somar(complexo* z1, complexo* z2){ //dois numeros complexos diferentes
    return criar(z1->x + z2->x , z1-> y + z2-> y);
    //soma separadamente a parte real(x) e complexa(y)
}

complexo* multi(complexo* z1, complexo* z2){
    float real = z1->x * z2->x ; 
    float imaginario = z1->x * z2->y ;
    complexo* z = criar(real, imaginario);
    //multiplicando separadamente real e imaginario
    return z;
}

void destruit(complexo* z){
    free(z); //limpar memória do ponteiro
}
