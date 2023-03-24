#include "lista-encadeada.hpp"

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
    int dado, contador = 0;
    No no = No();

    // Verifica se a posicao eh valida
    if (!posicaoValida(posicao))
    {
        return -1;
    }

    while (contador != posicao - 1)
    {
        no = *no.getProximo();
        contador++;
    }

    return no.getDado();
}

bool Lista::setElemento(int posicao, int novoDado)
{

    int dado = getElemento(posicao), contador = 0;
    No no = No();

    // Verifica se a posicao eh valida
    if (!posicaoValida(posicao))
    {
        return false;
    }

    while (contador != posicao - 1)
    {
        no = *no.getProximo();
        contador++;
    }

    no.setDado(dado);
    return true;
}

bool Lista::insereElemento(int posicao, int dado)
{
    // Insere no inicio caso a lista esteja vazia
    if (vazia())
    {
        insereElementoInicio(dado);
        return true;

        // Insere no fim caso a lista nao esteja vazia e a posicao seja maior ou igual ao tamanho da lista
    }
    else if (!vazia() && posicao >= tamanho)
    {
        insereElementoFim(dado);
        return true;
    }

    // Insere no meio da lista
    int contador = 0;
    No no, novoNo;

    while (contador < posicao)
    {
        no = *no.getProximo();
        contador++;
    }

    novoNo.setProximo(no.getProximo());
    no.setProximo(&novoNo);
    incrementaTamanho();

    return true;
}

bool Lista::insereElementoInicio(int dado)
{
    No no;

    no.setDado(dado);
    no.setProximo(getCabeca());
    setCabeca(&no);
    incrementaTamanho();

    return true;
}

bool Lista::insereElementoFim(int dado)
{
    No no, ultimo;
    no.setDado(dado);

    while (ultimo.getProximo() != NULL)
    {
        ultimo = *ultimo.getProximo();
    }

    ultimo.setProximo(&no);
    incrementaTamanho();

    return true;
}

int Lista::retiraElemento(int posicao)
{
    int dado, contador = 1;
    No noRemover = *getCabeca();

    if (!posicaoValida(posicao))
    {
        return -1;
    }
    else if (posicao == 1)
    { // Retirar a cabeca da lista
        dado = noRemover.getDado();
        setCabeca(noRemover.getProximo());
        decrementaTamanho();

        return dado;
    }
    else
    {

        while (contador != posicao - 1)
        {
            noRemover = *noRemover.getProximo();
        }

        dado = noRemover.getProximo()->getDado();
        noRemover = *noRemover.getProximo();
        // delete(&noRemover);
        decrementaTamanho();
        return dado;
    }
}

void Lista::mostrarLista()
{
    No no = *cabeca;

    // Print da lista personalizado
    cout << "{";

    for (int i = 1; i <= tamanho; i++)
    {
        cout << "[ %d ]-> " << no.getDado();

        if (i == tamanho)
        {
            cout << "}" << endl;
        }
        no = *no.getProximo();
    }
}