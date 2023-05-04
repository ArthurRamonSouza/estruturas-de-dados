#include <fstream>
#include <sstream>
#include "Grafo.cpp"

Graph load_from(string fileName)
{
    ifstream f(fileName);
    int n;
    f >> n;

    Graph g(n);

    for (int l = 0; l < n; l++)
    {
        for (int c = 0; c < n; c++)
        {
            int peso;
            f >> peso;
            g.matrizAdjacencia[l][c] = peso;
            if (g.matrizAdjacencia[l][c] > 0)
            {
                g.listaAdjacencia[l].push_back(c);
            }
        }
    }
    return g;
}

int main()
{
    Graph gr = load_from("instancias_grafo/pcv4.txt");

    cout << "\nMatriz de Adjacencia " << endl;
    for (vector<int> linha : gr.matrizAdjacencia)
    {
        for (int elem : linha)
        {
            cout << elem << " ";
        }
        cout << endl;
    }

    cout << "\nLista de Adjacencia " << endl;

    for (vector<int> linha : gr.listaAdjacencia)
    {
        for (int elem : linha)
        {
            cout << elem << " ";
        }
        cout << endl;
    }

    gr.dfs();
    gr.bfs(1);
    cout << "Numero de Componentes Conexas: " << gr.num_componentes_conexas() << endl;


    return 0;
}
