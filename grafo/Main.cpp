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
            g.M[l][c] = peso;
            if (g.M[l][c] > 0)
            {
                g.L[l].push_back(c);
            }
        }
    }
    return g;
}

int main()
{
    Graph gr = load_from("instancias_grafo/pcv10.txt");

    cout << "\nMatriz de Adjacencia " << endl;
    for (vector<int> linha : gr.M)
    {
        for (int elem : linha)
        {
            cout << elem << " ";
        }
        cout << endl;
    }

    cout << "\nLista de Adjacencia " << endl;

    for (vector<int> linha : gr.L)
    {
        for (int elem : linha)
        {
            cout << elem << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Caminho percorrido pelo DFS para achar o 3: "; gr.dfs(3); cout << endl;
    int distancia = gr.bfs(0, 3);
    cout << "Distancia de vertices calculada pelo BFS entre os vertices é: " << distancia << " (valor -1 significa que não há caminhos)" << endl << endl;

    cout << "Caminho percorrido pelo DFS para achar o 9: "; gr.dfs(9); cout << endl;
    distancia = gr.bfs(7, 9);
    cout << "Distancia de vertices calculada pelo BFS entre os vertices é: " << distancia << " (valor -1 significa que não há caminhos)" << endl << endl;

    cout << "Caminho percorrido pelo DFS para achar o 1: "; gr.dfs(1); cout << endl;
    distancia = gr.bfs(0, 5);
    cout << "Distancia de vertices calculada pelo BFS entre os vertices é: " << distancia << " (valor -1 significa que não há caminhos)" << endl << endl;

    cout << "Numero de Componentes Conexas: " << gr.num_componentes_conexas() << endl;
    return 0;
}
