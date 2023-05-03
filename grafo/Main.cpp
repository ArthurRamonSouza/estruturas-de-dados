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
        grafo = new Grafo(tamanho_matriz);
        int matriz[tamanho_matriz][tamanho_matriz];
        for (int l = 0; l < tamanho_matriz; l++)
        {
            for (int c = 0; c < tamanho_matriz; c++)
            {
                arquivo >> matriz[l][c];
            }
        }

        grafo->setMatrizAdjacencia(*matriz);
    }

    arquivo.close();
    return *grafo;
}

int main()
{
    string nomeArquivo = "instancias_grafo/pcv10.txt";

    Grafo grafo = arquivoParaGrafo(nomeArquivo);

    grafo.imprimeMatrizAdjacencia();
    cout << grafo.getNumeroVertices() << endl;

    return 0;
};