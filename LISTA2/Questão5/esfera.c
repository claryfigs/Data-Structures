#include "esfera.h"
#include <math.h> //biblioteca para calculos
#include <stdlib.h> //biblioteca para usar o malloc

esfera criar(float raio) {
    esfera Esfera= (esfera) malloc(sizeof(esfera)); //alocando memoria
    Esfera->raio = raio;
    return Esfera;
}

float calcularvolume(esfera Esfera) {
    return (4.0/3.0) * 3,14 * pow(Esfera->raio, 3); //formula do volume
}

float calculararea(esfera Esfera) {
    return 4 * 3,14 * pow(Esfera->raio, 2); //formula da area
}

void mostrarvalores(esfera Esfera){
    printf("Raio: %f", Esfera->raio);
    printf("Volume: %f", calcularvolume(Esfera));
    printf("Area: %f", calculararea(Esfera));

}

