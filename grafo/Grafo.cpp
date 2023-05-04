#include "Grafo.hpp"

Grafo::Grafo(int numeroVertices)
{
    this->numeroVertices = numeroVertices;
    this->listaTamanhos = (int *)malloc(numeroVertices * sizeof(int));
    this->matrizAdjacencia = (int **)malloc(numeroVertices * sizeof(int *));
    for (int i = 0; i < numeroVertices; i++)
    {
        this->matrizAdjacencia[i] = (int *)malloc(numeroVertices * sizeof(int));
    }
}

int Grafo::getNumeroVertices()
{
    return this->numeroVertices;
}

void Grafo::setMatrizAdjacencia(int **matriz)
{
    this->matrizAdjacencia = matriz;
}

void Grafo::imprimeMatrizAdjacencia()
{
    for (int l = 0; l < this->numeroVertices; l++)
    {
        for (int c = 0; c < this->numeroVertices; c++)
        {
            if (c == this->numeroVertices - 1)
            {
                cout << this->matrizAdjacencia[l][c] << endl;
            }
            else
            {
                cout << this->matrizAdjacencia[l][c] << " " << ends;
            }
        }
    }
}

void Grafo::matrizParaListaAdjacencia()
{
    // Criando a lista de adjacencias a partir da lista de tamnhos
    this->listaAdjacencia = (int **)malloc(numeroVertices * sizeof(int *));

    // Contando numero de elementos na matriz diferentes de 0
    for (int l = 0; l < this->numeroVertices; l++)
    {
        this->listaTamanhos[l] = 0;
        for (int c = 0; c < this->numeroVertices; c++)
        {
            if (this->matrizAdjacencia[l][c] != 0)
            {
                this->listaTamanhos[l]++;
            }
        }
        this->listaAdjacencia[l] = (int *)malloc(this->listaTamanhos[l] * sizeof(int));
    }

    // Mapeando elementos diferentes de 0 da matriz para a lista
    for (int l = 0; l < this->numeroVertices; l++)
    {
        int contador = 0;
        for (int c = 0; c < this->numeroVertices; c++)
        {
            if (this->matrizAdjacencia[l][c] != 0)
            {
                this->listaAdjacencia[l][contador] = this->matrizAdjacencia[l][c];
                contador++;
            }
            
        }
    }
}

int **Grafo::getListaAdjacencia() { return this->listaAdjacencia; }

void Grafo::imprimeListaAdjacencia()
{
    for (int l = 0; l < this->numeroVertices; l++)
    {
        cout << l << " ->";
        for (int c = 0; c < this->listaTamanhos[l]; c++)
        {
            if (c == this->numeroVertices - 1)
            {
                cout << " " << this->listaAdjacencia[l][c];
            }
            else
            {
                cout << " " << this->listaAdjacencia[l][c] << " ";
            }
        }
        cout << endl;
    }
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
