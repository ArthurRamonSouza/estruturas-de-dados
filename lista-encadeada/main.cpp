#include "lista-encadeada.hpp"

using namespace std;

int main()
{
    Lista lista;

    lista.insereElemento(1, 2);
    lista.insereElemento(2, 4);
    lista.insereElemento(1, 6);

    lista.mostrarLista();

    cout << "A lista está vazia? " << lista.vazia() << endl;

    lista.getElemento(1);
    cout << "A lista está vazia? " << lista.vazia() << endl;

    lista.mostrarLista();
}