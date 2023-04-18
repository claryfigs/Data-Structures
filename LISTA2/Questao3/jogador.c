#include "jogador.h" //chamar o outro arquivo
#include <stdlib.h> //usar o malloc com essa biblioteca
#include <string.h> //facilitar a manipulação de vetores(não usar na prova)

Jogador AtribuirJogador(char nome[], int jogos, int gols, int assist){
    Jogador novo = (Jogador)malloc(sizeof (Jogador));//alocar memoria pro ponteiro

    strcpy(novo->nome, nome); //valor alocado dentro da memória, usando a biblioteca
    novo->jogos = jogos;
    novo->gols = gols;
    novo->assist = assist;
    
    return novo;
}

void Imprimir(Jogador jogador){
    printf("Nome:%s", jogador->nome); //imprimindo valor dentro da struct
    printf("Jogos:%d", jogador->jogos);
    printf("Gols:%d", jogador->gols);
    printf("Assistencia:%d", jogador->assist);
}

void BomJogador(Jogador jogador){
    if (jogador->gols >= jogador->jogos){
        printf("o jogador fez um gol em cada jogo");
    } else {
        printf("o jogador é um lixo");
    }
}