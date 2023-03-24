#include "lista-encadeada.hpp"

No No::(int dado) { dado = dado; }

No *No::getProximo() { return proximo; }

void No::setProximo(No *no) { proximo = no; }

int No::getDado() { return dado; }

void No::setDado(int novoDado) { dado = novoDado; }