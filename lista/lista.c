#include "lista.h"
#include <stdio.h>

void criarLista(tlista *lista)
{
    lista->tamanho = 0;
}

void mostrarLista(tlista *lista)
{
    printf("[");
    for (int i = 0; i < lista->tamanho; i++)
    {
        if ((i + 1) != lista->tamanho)
        {
            printf("%d, ", lista->vetor[i]);
        }
        else
        {
            printf("%d]\n", lista->vetor[i]);
        }
    }
}

int vazia(tlista *lista)
{
    return (lista->tamanho == 0);
}

int cheia(tlista *lista)
{
    if (lista->tamanho == 20)
    {
        return 1;
    }
    return 0;
}

int obterTamanho(tlista *lista)
{
    return lista->tamanho;
}

int obterElemento(tlista *lista, int posicao)
{
    if (posicao < 1 || posicao > lista->tamanho || vazia(lista) == 1)
    {
        return 0;
    }
    return lista->vetor[--posicao];
}

int modificarElemento(tlista *lista, int posicao, int novoElemento)
{
    if (obterElemento(lista, posicao) != 0)
    {
        lista->vetor[--posicao] = novoElemento;
        return novoElemento;
    }
    return 0;
}

int inserirElemento(tlista *lista, int posicao, int novoElemento)
{
    if (posicao > 0 && cheia(lista) != 1)
    {
        int aux = lista->tamanho;

        // Aumentando o tamanho da lista
        lista->tamanho++;

        // Insere no final da lista caso a posicao seja maior do que o tamanho da lista
        if (posicao >= lista->tamanho)
        {
            return lista->vetor[aux] = novoElemento;
        }

        // Se nao, posicao < lista->tamanho. Entao faca:

        // Percorrer a lista de tras pra frente, subindo a posicao de cada elemento que sucede o elemento inserido
        posicao--;
        for (int i = lista->tamanho; i >= 0; i--)
        {
            int aux = i;
            if (i == posicao)
            {
                lista->vetor[i] = novoElemento;
                return lista->vetor[i];
            }
            lista->vetor[i] = lista->vetor[--aux];
        }
    }
    return 0;
}

int removerElemento(tlista *lista, int posicao)
{
    if (posicao > 0 && posicao < lista->tamanho && vazia(lista) == 0)
    {
        // Diminuindo tamanho da lista
        lista->tamanho--;

        posicao--;
        int elemento = lista->vetor[posicao];

        // Percorrer a lista de frente pra tras, diminuindo a posicao de cada elemento que sucede o elemento removido
        for (int i = 0; i < lista->tamanho; i++)
        {
            int aux = i;
            aux++;
            if (i == posicao)
            {
                lista->vetor[i] = lista->vetor[aux];
            }
        }

        return elemento;
    }

    return 0;
}