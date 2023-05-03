#include "Grafo.hpp"

Grafo::Grafo(int numeroVertices)
{
    this->numeroVertices = numeroVertices;
    int matriz[numeroVertices][numeroVertices];
    this->matrizAdjacencia = *matriz;
}

int Grafo::getNumeroVertices()
{
    return this->numeroVertices;
}

void Grafo::setMatrizAdjacencia(int *matriz)
{
    this->matrizAdjacencia = matriz;
}

void Grafo::imprimeMatrizAdjacencia()
{
    int matriz = *this->matrizAdjacencia;
    cout << *this->matrizAdjacencia << endl;
    cout << matriz << endl;

    // for (int l = 0; l < this->numeroVertices; l++)
    // {
    //     for (int c = 0; c < this->numeroVertices; c++)
    //     {
    //         if (c == this->numeroVertices - 1)
    //         {
    //             cout << matriz[l][c] << endl;
    //         }
    //         else
    //         {
    //             cout << matriz[l][c] << " " << ends;
    //         }
    //     }
    // }
}

int Grafo::numeroVeticesConexos()
{
    int quantidadeVerticesConexos = 0;
    return quantidadeVerticesConexos;
}

void Grafo::bfs()
{
    return;
}

void Grafo::dfs()
{
    return;
}
