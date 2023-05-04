#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Grafo.cpp"

using namespace std;

Grafo arquivoParaGrafo(string nomeArquivo)
{
    ifstream arquivo(nomeArquivo);
    int tamanho_matriz;
    Grafo *grafo;

    if (arquivo.is_open())
    {
        arquivo >> tamanho_matriz;
        int **novaMatriz = new int *[tamanho_matriz];
        for (int i = 0; i < tamanho_matriz; i++)
        {
            novaMatriz[i] = new int[tamanho_matriz];
        }

        grafo = new Grafo(tamanho_matriz);

        for (int l = 0; l < tamanho_matriz; l++)
        {
            for (int c = 0; c < tamanho_matriz; c++)
            {
                arquivo >> novaMatriz[l][c];
            }
        }
        grafo->setMatrizAdjacencia(novaMatriz);
        arquivo.close();
    }

    return *grafo;
}

int main()
{
    string nomeArquivo = "instancias_grafo/pcv4.txt";

    Grafo grafo = arquivoParaGrafo(nomeArquivo);

    grafo.imprimeMatrizAdjacencia();
    cout << "\n" << grafo.getNumeroVertices() << endl;

    grafo.matrizParaListaAdjacencia();
    //grafo.getListaAdjacencia();
    grafo.imprimeListaAdjacencia();

    return 0;
};