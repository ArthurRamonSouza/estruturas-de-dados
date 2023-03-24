#ifndef LISTA_ENCADEADA_HPP
#define LISTA_ENCADEADA_HPP
#include <iostream>

class No
{

private:
    No *proximo;
    int dado;

public:
    No(int dado);
    No *getProximo();
    void setProximo(No *no);
    int getDado();
    void setDado(int novoDado);
};

class Lista
{

private:
    No *cabeca;
    int tamanho;

public:
    Lista();
    No *getCabeca();
    void setCabeca(No *novoNo);
    int getTamanho();
    bool vazia();
    bool posicaoValida(int posicao);
    int getElemento(int posicao);
    bool setElemento(int posicao, int novoDado);
    bool insereElemento(int posicao, int dado);
    bool insereElementoInicio(int dado);
    bool insereElementoFim(int dado);
    int retiraElemento(int posicao);
    void mostrarLista();
};

#endif