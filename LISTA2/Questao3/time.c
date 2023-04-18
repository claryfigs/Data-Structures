#include "time.h" //chamar o outro arquivo
#include "jogador.h"
#include <stdlib.h> //usar o malloc com essa biblioteca
#include <string.h> //facilitar a manipulação de vetores(não usar na prova)

Time AtribuirTime(char nome[], Jogador jogadores[], int vitorias, int empates, int derrotas){
    Time novo = (Time)malloc(sizeof (Time));//alocar memoria pro ponteiro

    strcpy(novo->nome, nome); //valor alocado dentro da memória, usando a biblioteca
    for(int i = 0; i < 11; i++){
        novo->jogador[i] = jogadores[i]; //passar por todos os jogadores
    }
    novo->vitorias = vitorias;
    novo->empates= empates;
    novo->derrotas= derrotas;
    
    return novo;
}

void Imprimir(Time time){
    printf("Nome:%s", time->nome); //imprimindo valor dentro da struct
    
    printf("Jogadores:");
    for(int i = 0; i < 11; i++){
    Imprimir(time->jogador[i]);
    }

    printf("Vitorias:%d", time->vitorias);
    printf("Empates:%d", time->empates);
    printf("Derrotas:%d", time->derrotas);
}

int Pontuacao(Time time){
    return( (time->vitorias * 3) + (time->empates));
}