#include "Grafo.hpp"

Grafo::Grafo(int numeroVertices)
{
    this->numeroVertices = numeroVertices;
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
    Vertice *adjacentes;
    adjacentes = (Vertice *)malloc(numeroVertices * sizeof(Vertice *));

    for (int i = 0; i < this->numeroVertices; i++)
    {
        adjacentes[i] = Vertice(i);
    }

    for (int l = 0; l < this->numeroVertices; l++)
    {
        for (int c = 0; c < this->numeroVertices; c++)
        {
            adjacentes[l].adicionarAresta(adjacentes, l, this->matrizAdjacencia[l][c]);
            cout << adjacentes[l].getVertice() << " -> " << this->matrizAdjacencia[l][c] << " ";
        }
        cout << endl;
    }

    this->listaAdjacencia = adjacentes;
}

Vertice *Grafo::getListaAdjacencia() { return this->listaAdjacencia; }

void Grafo::imprimeListaAdjacencia(Vertice *listaVerticeAdjacentes)
{
    for (int l = 0; l < this->numeroVertices; l++)
    {
        for (int c = 0; c < listaVerticeAdjacentes[l].getQtdAdjacentes(); c++)
        {
            //cout << c << endl;
            //cout << l << " -> " << listaVerticeAdjacentes[c].getVertice() << " ";
        }
        //cout << endl;
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
