#include "lista-encadeada.hpp"

using namespace std;

// No metodos

No::No(int dado) { this->dado = dado; }

No *No::getProximo() { return proximo; }

void No::setProximo(No *no) { proximo = no; }

int No::getDado() { return dado; }

void No::setDado(int novoDado) { dado = novoDado; }

// Lista metodos

Lista::Lista()
{
    cabeca = nullptr;
    tamanho = 0;
}

No *Lista::getCabeca()
{
    return cabeca;
}

void Lista::setCabeca(No *novoNo)
{
    cabeca = novoNo;

    if (vazia())
    {
        tamanho++;
    }
}

int Lista::getTamanho()
{
    return tamanho;
}

bool Lista::vazia()
{
    if (tamanho == 0)
    {
        return true;
    }
    return false;
}

bool Lista::posicaoValida(int posicao)
{
    // Verifica se a posicao eh valida
    if (posicao <= 0 || posicao > tamanho)
    {
        return false;
    }

    return true;
}

int Lista::getElemento(int posicao)
{
    int contador = 1;
    No *no = cabeca;

    // Verifica se a posicao eh valida
    if (!posicaoValida(posicao))
    {
        return -1;
    }

    while (contador < posicao)
    {
        no = no->getProximo();
        contador++;
    }

    return no->getDado();
}

bool Lista::setElemento(int posicao, int novoDado)
{
    int contador = 1, dado = getElemento(posicao);
    No *no = cabeca;

    // Verifica se a posicao eh valida
    if (!posicaoValida(posicao))
    {
        return false;
    }

    while (contador < posicao)
    {
        no = no->getProximo();
        contador++;
    }

    no->setDado(dado);
    return true;
}

bool Lista::insereElemento(int posicao, int dado)
{
    // Insere no inicio da lista
    if (posicao == 1)
    {
        return insereElementoInicio(dado);
    }

    // Insere no fim caso a lista nao esteja vazia e a posicao seja maior ou igual ao tamanho da lista
    else if (!vazia() && posicao+1 >= tamanho)
    {
        return insereElementoFim(dado);
    }

    // Insere no meio da lista
    int contador = 1;
    No *noAnterior = cabeca, *novoNo = new No(dado);

    while (contador < posicao-1)
    {
        noAnterior = noAnterior->getProximo();
        contador++;
    }

    novoNo->setProximo(noAnterior->getProximo());
    noAnterior->setProximo(novoNo);
    tamanho++;

    return true;
}

bool Lista::insereElementoInicio(int dado)
{
    No *novoNo = new No(dado);

    novoNo->setProximo(cabeca);
    cabeca = novoNo;
    tamanho++;

    return true;
}

bool Lista::insereElementoFim(int dado)
{
    No *noNovo = new No(dado), *ultimo;
    ultimo = cabeca;

    while (ultimo->getProximo() != nullptr)
    {
        ultimo = ultimo->getProximo();
    }

    ultimo->setProximo(noNovo);
    tamanho++;

    return true;
}

int Lista::retiraElemento(int posicao)
{
    int dado, contador = 1;
    No *noRemover = cabeca;

    if (!posicaoValida(posicao))
    {
        return -1;
    }

    // Retirar a cabeca da lista
    else if (posicao == 1)
    {
        dado = noRemover->getDado();
        setCabeca(noRemover->getProximo());
        tamanho--
    ;;

        return dado;
    }

    // Se nao for remover a cabeca
    else
    {
        while (contador < posicao)
        {
            noRemover = noRemover->getProximo();
        }

        dado = noRemover->getDado();
        delete (noRemover);
        tamanho--
    ;;

        return dado;
    }
}

// Print da lista personalizado
void Lista::mostrarLista()
{
    if (vazia())
    {
        cout << "{ }\n" << endl;
    }
    else
    {
        No *no = cabeca;

        cout << "{";

        while(no != nullptr){
            if(no->getProximo() == nullptr){
                cout << "[" << no->getDado() << "]" ;
                break;
            }

            cout << "[" << no->getDado() << "]-> " ;

            no = no->getProximo();
        }
        cout << "}\n" << endl;
    }
}