#ifndef PILHA_SEQUENCIAL_H
#define PILHA_SEQUENCIAL_H

#define TAM_MAX 100

class PilhaSequencial 
{
private:
    int dados[TAM_MAX];
    int tamanho;
    int topo;

public:
    PilhaSequencial();
    ~PilhaSequencial();
    bool cheia();
    bool vazia();
    bool push(int dado);
    int pop();
    int verTopo();
    int getTamanho();
};

#endif