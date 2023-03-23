#include <iostream>

class No
{
private:
    No *prox;
    int dado;

public:
    No()
    {
        prox = nullptr;
        this->dado = NULL;
    }

    No *getProx();
    void setProx(No *no);
    int getDado();
    void setDado(int novoDado);
};

No *No::getProx() { return prox; }

void No::setProx(No *no) { prox = no; }

int No::getDado() { return dado; }

void No::setDado(int novoDado) { dado = novoDado; }

class Lista
{

private:
    No *cabeca;
    int tamanho;

public:
    Lista(){
        No *cabeca = nullptr;
        int tamanho = 0;
    }
    No *getCabeca();
    void setCabeca(No *novoNo);
    int getTamanho();
    void incrementaTamanho();
    void decrementaTamanho();
    bool vazia();
    bool posicaoValida(int posicao);
    int getElemento(int posicao);
    bool setElemento(int posicao, int novoDado);
    bool insereElemento(int posicao, int dado);
    bool insereElementoInicio(int dado);
    bool insereElementoFim(int dado);
    int retiraElemento(int posicao);
    void mostrarLista();
};

No *Lista::getCabeca()
{
    return cabeca;
}

void Lista::setCabeca(No *novoNo)
{
    cabeca = novoNo;
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
    if(tamanho == 0 ){
        return true;
    }
    
    return false;
}

bool Lista::posicaoValida(int posicao)
{
    // Verifica se a posicao eh valida
    if(posicao <= 0 || posicao > tamanho){
        return NULL;
    }
}

int Lista::getElemento(int posicao)
{
    int dado, contador = 0;
    No no = No();

    // Verifica se a posicao eh valida
    if(!posicaoValida(posicao)){
        return NULL;
    }

    while(contador != posicao-1){
        no = *no.getProx();
        contador++; 
    }

    return no.getDado();
}

bool Lista::setElemento(int posicao, int novoDado){

    int dado = getElemento(posicao), contador = 0;
    No no = No();

    // Verifica se a posicao eh valida
    if(!posicaoValida(posicao)){
        return false;
    }

    while(contador != posicao-1){
        no = *no.getProx();
        contador++; 
    }

    no.setDado(dado);
    return true;

}

bool Lista::insereElemento(int posicao, int dado)
{
    if(vazia()){
        insereElementoInicio(dado);
        return true;

    } else if(!vazia() && posicao == tamanho){
        insereElementoFim(dado);
        return true;
    }

    

}

bool Lista::insereElementoInicio(int dado);
bool Lista::insereElementoFim(int dado);
int retiraElemento(int posicao);
void mostrarLista();

int main()
{ 
    Lista lista = Lista();
    std::cout << lista.getTamanho() + "\n";
    lista.vazia();
}