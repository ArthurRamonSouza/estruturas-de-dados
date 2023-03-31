#ifndef PILHA_ENCADEADA_H
#define PILHA_ENCADEADA_H

#include "../../lista-encadeada/ListaEncadeada.hpp"

class PilhaEncadeada
{
private:
    Lista dados;

public:
    bool vazia();
    bool push(int dado);
    int pop();
    int verTopo();
    int getTamanho();
};

#endif