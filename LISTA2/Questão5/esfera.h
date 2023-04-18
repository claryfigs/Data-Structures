#ifndef ESFERA.H

typedef struct{
    float raio;
}*esfera; //referenciando a struct com um ponteiro

esfera criar(float raio);
float calcularvolume(esfera);
float calculararea(esfera);
void mostrarvalores(esfera);

#endif