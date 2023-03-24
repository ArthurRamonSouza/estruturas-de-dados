#include "lista-encadeada.hpp"

using namespace std;

// No metodos

No::No(int dado) { this->dado = dado; }

No *No::getProximo() { return proximo; }

void No::setProximo(No *no) { proximo = no; }

int No::getDado() { return dado; }

void No::setDado(int novoDado) { dado = novoDado; }

// Lista metodos

No *Lista::getCabeca()
{
    return cabeca;
}

void Lista::setCabeca(No *novoNo)
{
    cabeca = novoNo;

    if (vazia())
    {
        incrementaTamanho();
    }
}

int Lista::getTamanho()
{
    return tamanho;
}

void Lista::incrementaTamanho()
{
    tamanho++;
}

void Lista::decrementaTamanho()
{
    tamanho--;
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
    int dado, contador = 1;
    No *no = getCabeca();

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
    No *no = getCabeca();

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
    // Insere no inicio caso a lista esteja vazia
    if (vazia() && posicao == 1)
    {
        return insereElementoInicio(dado);
        ;

        // Insere no fim caso a lista nao esteja vazia e a posicao seja maior ou igual ao tamanho da lista
    }
    else if (!vazia() && posicao >= tamanho)
    {
        return insereElementoFim(dado);
        ;
    }

    // Insere no meio da lista
    int contador = 0;
    No *noAnterior, *novoNo = &No(dado);

    while (contador < posicao)
    {
        noAnterior = noAnterior->getProximo();
        contador++;
    }

    novoNo->setProximo(noAnterior->getProximo());
    noAnterior->setProximo(novoNo);
    incrementaTamanho();

    return true;
}

bool Lista::insereElementoInicio(int dado)
{
    No *no = &No(dado);

    no->setProximo(getCabeca());
    setCabeca(no);
    incrementaTamanho();

    return true;
}

bool Lista::insereElementoFim(int dado)
{
    No *noNovo = &No(dado), *ultimo;
    ultimo = getCabeca();

    while (ultimo->getProximo() != nullptr)
    {
        ultimo = ultimo->getProximo();
    }

    ultimo->setProximo(noNovo);
    incrementaTamanho();

    return true;
}

int Lista::retiraElemento(int posicao)
{
    int dado, contador = 1;
    No *noRemover = getCabeca();

    if (!posicaoValida(posicao))
    {
        return -1;
    }
    
    // Retirar a cabeca da lista
    else if (posicao == 1)
    {
        dado = noRemover->getDado();
        setCabeca(noRemover->getProximo());
        decrementaTamanho();

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
        delete(noRemover);
        decrementaTamanho();
        
        return dado;
    }
}

void Lista::mostrarLista()
{
    No *no = cabeca;

    // Print da lista personalizado
    cout << "{";

    for (int i = 1; i <= tamanho; i++)
    {
        if (i == tamanho)
        {
            cout << "[ %d ]->+}" << no->getDado() << endl;
        }

        cout << "[ %d ]-> " << no->getDado();

        no = no->getProximo();
    }
}