#ifndef TIME_H //definir o arquivo h com esse nome
#define TIME_H 
#include "jogador.h" //chamando dados do arquivo jogador

typedef struct aux{
    char nome[50];
    Jogador jogador[11]; //vetor de jogadores
    int vitorias;
    int empates;
    int derrotas;
}*Time; //ponteiro time

Time AtribuirTime(char[], Jogador[], int, int, int); //nome da função e os parametros

void Imprimir(Time); //a função não retorna nada, já que é só pra mostrar o jogador

int Pontuacao(Time); //retorna um inteiro

#endif //fechar a definição