#ifndef VERTICE_H
#define VERTICE_H

#include <iostream>

using namespace std;

class Vertice
{
    private:
        int vertice = 0;
        int qtdAdjacentes = 0;
        Vertice *proximo;

    public:
        Vertice(int vertice);
        int getVertice();
        int getQtdAdjacentes();
        void adicionarAresta(Vertice*listaAdjacencia, int origem, int destino);
        void imprimirAdjacentes(Vertice*listaAdjacencia, int origem);
};

#endif