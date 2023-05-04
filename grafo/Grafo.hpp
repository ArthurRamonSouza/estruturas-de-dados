#ifndef GRAFO_MATRIZ_ADJACENTE_H
#define GRAFO_MATRIZ_ADJACENTE_H

#include <iostream>
#include "Vertice.hpp"

using namespace std;

class Grafo
{
    private:
        int numeroVertices;
        Vertice* listaAdjacencia; // Ponteiro para um array contendo a lista de adjacencia 
        int** matrizAdjacencia; // Ponteiro para uma matriz contendo a matriz de adjacencia 
        int* distancia; // Ponteiro para um array contendo a distancia percorrida pelo BFS
    
    public:
        Grafo(int numeroVertices); // Construtor
        int getNumeroVertices();
        void matrizParaListaAdjacencia();
        void imprimeListaAdjacencia(Vertice* listaAdjacencia);
        Vertice* getListaAdjacencia();
        void setMatrizAdjacencia(int **matriz);
        void imprimeMatrizAdjacencia();
        int numeroVeticesConexos(); // Calcula a quantidade de vetices conexos
        void bfs(); // BFS(Breadth First Search)
        void dfs(); // DFS(Depth First Search)
};

#endif