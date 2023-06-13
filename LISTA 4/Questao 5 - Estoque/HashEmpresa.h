
//construtor do produto

struct produto{
    int codigo, quantidade;
    float preco;
    char nome[30];
    struct produto* prox;
};

//construtor tabela

typedef struct{
    int qtd, TABLE_SIZE;
    struct produto **itens;
}Hash;

//criando funções

Hash* criaHash(int tamanho);
int buscaHash(Hash* ha, int cod);
int insereHash(Hash* ha, struct produto pro);
int removeHash(Hash* ha, int cod);
int atualizarPreco(Hash* ha, int cod, float preco);