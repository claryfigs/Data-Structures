typedef struct No* ArvAVL;

//construtor

struct No{
    int pontos, alt;
    char nome[30];
    struct No* esq;
    struct No* dir;
};

//chamando funções

ArvAVL* cria_AVL();
int insere_ArvAVL(ArvAVL *raiz, char nome[], int pontos);
void alteraValor(ArvAVL* raiz, char nome[], int novoPonto);