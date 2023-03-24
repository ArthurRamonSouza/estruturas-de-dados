#include "Lista-encadeada.hpp"

using namespace std;

int main()
{
    Lista lista;

    // Printando a lista vazia
    cout << "Lista vazia (0 = False, 1 = True)? " << lista.vazia() <<". Tamanho da lista: " << lista.getTamanho() << endl;
    cout << "Lista ";
    lista.mostrarLista();

    // Adicionando alguns elemntos
    lista.insereElemento(1, 2);
    lista.insereElemento(2, 4);
    lista.insereElemento(3, 6);
    lista.insereElemento(4, 8);
    cout << "Adicionando elementos: ";
    lista.mostrarLista();

    lista.insereElemento(1, 10);
    cout << "Adicionado o 10 na primeira posicao:";
    lista.mostrarLista();

    lista.insereElemento(3, 12);
    lista.insereElemento(7, 14);
    lista.insereElemento(8, 16);
    cout << "Adicionado o 12 na terceira posicao, 14 e 16 no final";
    lista.mostrarLista();

    cout << "Retornado elemento da posicao 5: " << lista.getElemento(5) << endl << endl;

    cout << "Retirado o primeiro elemento da lista: " << lista.retiraElemento(1) << endl;
    lista.mostrarLista();
   
    cout << "Lista vazia (0 = False, 1 = True)? " << lista.vazia() <<". Tamanho da lista " << lista.getTamanho() << endl;
    cout << "Lista ";
    lista.mostrarLista();
}