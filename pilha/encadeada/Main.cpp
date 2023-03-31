#include "PilhaEncadeada.hpp"
#include <iostream>

int main(void)
{
    PilhaEncadeada pilha;

    std::cout << "Pilha está vazia? (0 = False, 1 = true) " << pilha.vazia() << std::endl << std::endl;

    // Removendo topo da lista vazia
     std::cout << "Retirando o elemento do topo: " << pilha.pop() << std::endl;

    // Adicionando elementos
    for(int i = 1; i <= 8; i++){
        std::cout << "Adicionando na pilha o elemento " << i << std::endl;
        pilha.push(i);
    }
    
    // Removendo topo
     std::cout << "\nRetirando o elemento do topo: " << pilha.pop() << std::endl;

    // Removendo topo
    std::cout << "\nRetirando o elemento do topo: " << pilha.pop() << std::endl;

    // Ver topo
    std::cout << "\nVisualizar o topo: " << pilha.verTopo() << std::endl;
    
    // Ver o tamanho da pilha
    std::cout << "\nQual o tamanho da pilha: " << pilha.getTamanho() << std::endl;

    return 0;
}
