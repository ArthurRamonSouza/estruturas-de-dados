#include "Vertice.hpp"

Vertice::Vertice(int vertice)
{
    this->vertice = vertice;
}

int Vertice::getVertice(){return this->vertice;}

int Vertice::getQtdAdjacentes(){return this->qtdAdjacentes;}
// Função para adicionar uma aresta ao grafo
void Vertice::adicionarAresta(Vertice *listaAdjacencia, int origem, int destino)
{
    // Cria um novo vertice para a lista de adjacência da origem
    Vertice *novoVertice = new Vertice(destino);
    //novoVertice->proximo = &listaAdjacencia[origem];
    listaAdjacencia[origem] = *novoVertice;
    this->qtdAdjacentes++;
    //cout << "qtdadj: " << this->qtdAdjacentes << endl;
}

void Vertice::imprimirAdjacentes(Vertice *listaAdjacencia, int origem)
{

    for (int l = 0; l < this->qtdAdjacentes; l++)
    {
        cout << l << " -> " << listaAdjacencia[l].vertice << " ";
    }
    cout << endl;
}