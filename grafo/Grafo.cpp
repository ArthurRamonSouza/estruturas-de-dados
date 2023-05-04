#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

const int BRANCO = 0;
const int CINZA = 1;
const int PRETO = 2;

class Graph
{
private:
    int n;
    vector<int> pai;
    vector<int> d;
    vector<int> cor;

public:
    vector<vector<int>> M;
    vector<vector<int>> L;
    Graph(int n)
    {
        this->n = n;
        this->M = vector<vector<int>>(n, vector<int>(n, 0));
        this->L = vector<vector<int>>(n);
        this->pai = vector<int>(n, -1);
        this->d = vector<int>(n, -1);
        this->cor = vector<int>(n, BRANCO);
    }

    void add_edge(int u, int v)
    {
        M[u][v] = 1;
        L[u].push_back(v);
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

    int bfs(int origem, int destino)
    {
        queue<int> fila;
        vector<int> distancia(this->n, -1);
        vector<int> cor(this->n, BRANCO);

        fila.push(origem);
        cor[origem] = CINZA;
        distancia[origem] = 0;

        while (!fila.empty())
        {
            int atual = fila.front();
            fila.pop();

            if (atual == destino)
            {
                return distancia[atual];
            }

            for (auto vizinho : this->L[atual])
            {
                if (cor[vizinho] == BRANCO)
                {
                    cor[vizinho] = CINZA;
                    distancia[vizinho] = distancia[atual] + 1;
                    fila.push(vizinho);
                }
            }

            cor[atual] = PRETO;
        }

        return -1; // não há caminho entre os vértices
    }

    void dfs(int source)
    {
        stack<int> pilha;
        pilha.push(source);

        while (!pilha.empty())
        {
            int u = pilha.top();
            pilha.pop();

            if (cor[u] == PRETO)
                continue;

            cout << u << " "; // imprime o vértice visitado

            cor[u] = PRETO;

            for (auto v : L[u])
            {
                if (cor[v] == BRANCO)
                {
                    pilha.push(v);
                    cor[v] = CINZA;
                    pai[v] = u;
                }
            }
        }
    }
};
