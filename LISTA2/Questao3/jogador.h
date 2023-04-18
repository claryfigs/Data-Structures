#ifndef JOGADOR_H //definir o arquivo h com esse nome
#define JOGADOR_H 

typedef struct aux{
    char nome[50];
    int jogos;
    int gols;
    int assist;
}*Jogador; //ponteiro jogador

Jogador AtribuirJogador(char[], int, int, int); //nome da função e os parametros

void Imprimir(Jogador); //a função não retorna nada, já que é só pra mostrar o jogador

void BomJogador(Jogador); //retorna um inteiro

#endif //fechar a definição