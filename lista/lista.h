#ifndef LISTA_H
#define LISTA_H

// Definindo o tipo de dado
typedef struct {
  int vetor[20];
  int tamanho;
} tlista;

// Definindo os metodos

/// @brief Retorna uma lista 
/// @return Retorna o endereco da lista criada
extern void criarLista();

/// @brief Mostra os elementos da lista
/// @param lista ponteiro da lista 
/// @return Imprime a lista no terminal
extern void mostrarLista(tlista *lista);

/// @brief Funcao indica se a lista esta vazia
/// @param lista ponteiro da lista 
/// @return Retorna 1 caso a lista esteja vazia, caso contrario retorna 0
extern int vazia(tlista *lista);

/// @brief Funcao indica se a lista esta vazia
/// @param lista ponteiro da lista 
/// @return Retorna 1 caso a lista esteja cheia, caso contrario retorna 0
extern int cheia(tlista *lista);

/// @brief Retorna o tamanho atual da lista
/// @param lista ponteiro da lista
/// @return Retorno e um inteiro
extern int obterTamanho(tlista *lista);

/// @brief Retorna o n-esimo elemento da lista
/// @param lista ponteiro da lista
/// @param posicao posicao do elemento na lista
/// @return Retorna o inteiro na posicao, caso a posicao seja invalida, retorna 0
extern int obterElemento(tlista *lista, int posicao);

/// @brief Modifica o n-esimo elemento da lista
/// @param lista ponteiro da lista
/// @param posicao posicao do elemento na lista
/// @param novoElemento
/// @return Retorna o novo elemento caso a operacao seja bem sucedida, caso contrario, retorna 0
extern int modificarElemento(tlista *lista, int posicao, int novoElemento);

/// @brief Insere na lista um novo elemento na posicao n
/// @param lista ponteiro da lista
/// @param posicao posicao para insercao do elemento na lista
/// @param novoElemento
/// @return Retorna o elemento inserido caso a operacao seja bem sucedida, caso contrario, retorna 0
extern int inserirElemento(tlista *lista, int posicao, int novoElemento);

/// @brief Remove o n-esimo elemento da lista
/// @param lista ponteiro da lista
/// @param posicao posicao do elemento na lista
/// @return Retorna o elemento removido caso a operacao seja bem sucedida, caso contrario, retonra 0
extern int removerElemento(tlista *lista, int posicao);

#endif