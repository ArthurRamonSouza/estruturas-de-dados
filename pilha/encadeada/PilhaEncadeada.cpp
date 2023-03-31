#include "PilhaEncadeada.hpp"

bool PilhaEncadeada::vazia()
{
    if (this->dados.getTamanho() == 0)
    {
        return true;
    }
    return false;
}

bool PilhaEncadeada::push(int dado)
{
    return this->dados.insereElementoInicio(dado);
}

int PilhaEncadeada::pop()
{
    return this->dados.retiraElemento(1);
}

int PilhaEncadeada::verTopo()
{
    return this->dados.getCabeca()->getDado();

}

int PilhaEncadeada::getTamanho()
{
    return this->dados.getTamanho();
}