#include "PilhaSequencial.hpp"

PilhaSequencial::PilhaSequencial()
{
    this->tamanho = 0;
    this->topo = -1;
}

PilhaSequencial::~PilhaSequencial()
{
    //delete this->dados;
}

bool PilhaSequencial::cheia()
{
    if (this->tamanho == TAM_MAX)
    {
        return true;
    }
    return false;
}

bool PilhaSequencial::vazia()
{
    if (this->tamanho == 0)
    {
        return true;
    }
    return false;
}

bool PilhaSequencial::push(int dado)
{
    if (this->cheia())
    {
        return false;
    }

    this->dados[tamanho] = dado;
    tamanho++;
    return true;
}

int PilhaSequencial::pop()
{
    if (this->vazia())
    {
        return -1;
    }

    int dado = dados[tamanho-1];
    this->tamanho--;
    return dado;
}

int PilhaSequencial::verTopo()
{
    if (this->vazia())
    {
        return -1;
    }

    return this->dados[tamanho];

}

int PilhaSequencial::getTamanho()
{
    return this->tamanho;
}