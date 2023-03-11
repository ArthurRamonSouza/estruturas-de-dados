#include "lista.h"
#include <stdio.h>

int main(void) {

  tlista lista;
  criarLista(&lista);
  printf("Vazia: %d\n", vazia(&lista));
  printf("Cheia: %d\n", cheia(&lista));

  printf("Inserir Elemento: 5 na posicao 1 %d\n", inserirElemento(&lista, 1, 5));
  printf("Inserir Elemento: 4 na posicao 6 %d\n", inserirElemento(&lista, 6, 4));
  printf("Inserir Elemento: 3 na posicao 2 %d\n", inserirElemento(&lista, 2, 3));
  printf("Inserir Elemento: 66 na posicao 3 %d\n", inserirElemento(&lista, 3, 66));

  printf("Obter Tamanho: %d\n", obterTamanho(&lista));
  printf("Obter Elemento 1: %d\n", obterElemento(&lista, 1));

  printf("Modificar Elemento 1 para 9: %d\n", modificarElemento(&lista, 1, 9));
  mostrarLista(&lista);
  printf("Remover Elemento 1: %d\n", removerElemento(&lista, 1));
  printf("Inserir Elemento: 7 na posicao 2 %d\n", inserirElemento(&lista, 2, 7));
  mostrarLista(&lista);
  return 0;
}