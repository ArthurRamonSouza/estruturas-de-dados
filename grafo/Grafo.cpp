#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int BRANCO = 0;
const int CINZA = 1;
const int PRETO = 2;

class Graph
{
private:
    int numVertices;
    vector<int> pai;
    vector<int> distancias;
    vector<int> cor;

public:
    vector<vector<int>> matrizAdjacencia;
    vector<vector<int>> listaAdjacencia;
    Graph(int n)
    {
        this->numVertices = n;
        this->matrizAdjacencia.resize(n, vector<int>(n, 0));
        this->listaAdjacencia.resize(n);
        this->pai.resize(n);
        this->distancias.resize(n, -1);
        this->cor.resize(n, BRANCO);
    }

    int num_componentes_conexas()
    {
        int n_comp = 0;
        for (auto p : pai)
        {
            if (p == -1)
            {
                n_comp += 1;
            }
        }
        return n_comp;
    }

    void bfs(int source)
    {
        this->cor[source] = CINZA;
        this->distancias[source] = 0;
        pai[source] = -1;
        queue<int> Q;
        Q.push(source);

        while (!Q.empty())
        {
            int u = Q.front();
            Q.pop();
            for (int v : this->listaAdjacencia[u])
            {
                if (cor[v] == BRANCO)
                {
                    cor[v] = CINZA;
                    distancias[v] = distancias[u] + 1;
                    pai[v] = u;
                    Q.push(v);
                }
            }
            cor[u] = PRETO;
        }
        cout << "Distancias: ";
        for (int dist : distancias)
        {
            cout << dist << " ";
        }
        cout << endl;

        cout << "Pais (-1 significa que é o vertice atual): ";
        for (int p : pai)
        {
            cout << p << " ";
        }
        cout << endl;

        for (int i = 0; i < this->numVertices; i++)
        {
            this->cor[i] = BRANCO;
        }
    }

    void dfs_visit(int u)
    {
        cor[u] = CINZA;

        for (int v = 0; v < numVertices; v++)
        {
            if (matrizAdjacencia[u][v] != 0 && cor[v] == BRANCO)
            {
                pai[v] = u;
                distancias[v] = distancias[u] + 1;
                dfs_visit(v);
            }
        }

        cor[u] = PRETO;
    }

    void dfs()
    {
        for (int u = 0; u < numVertices; u++)
        {
            if (cor[u] == BRANCO)
            {
                pai[u] = -1;
                distancias[u] = 0;
                dfs_visit(u);
            }
        }

        for (int i = 0; i < this->numVertices; i++)
        {
            this->cor[i] = BRANCO;
        }
    }
};