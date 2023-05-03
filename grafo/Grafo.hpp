#ifndef GRAFO_MATRIZ_ADJACENTE_H
#define GRAFO_MATRIZ_ADJACENTE_H

#include <iostream>
#include <list>

using namespace std;

class Grafo
{
    private:
        int numeroVertices;
        list<int>* listaAdjacencia; // Ponteiro para um array contendo a lista de adjacencia 
        int* matrizAdjacencia; // Ponteiro para uma matriz contendo a matriz de adjacencia 
        int* distancia; // Ponteiro para um array contendo a distancia percorrida pelo BFS
    
    public:
        Grafo(int numeroVertices); // Construtor
        int getNumeroVertices();
        void setMatrizAdjacencia(int *matriz);
        void imprimeMatrizAdjacencia();
        int numeroVeticesConexos(); // Calcula a quantidade de vetices conexos
        void bfs(); // BFS(Breadth First Search)
        void dfs(); // DFS(Depth First Search)
};

#endif