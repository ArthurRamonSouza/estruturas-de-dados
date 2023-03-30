#include "PilhaSequencial.hpp"

// int main(int agrc, char *argv[])
// arguments count, arguments values
int main()
{

    PilhaSequencial pilha;

    std::cout << "Pilha está vazia? (0 = False, 1 = true) " << pilha.vazia() << std::endl << std::endl;

    // Removendo topo da lista vazia
     std::cout << "\nRetirando o elemento do topo: " << pilha.pop() << std::endl;

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
    
    // VEr o tamanho da pilha
    std::cout << "\nQual o tamanho da pilha: " << pilha.getTamanho() << std::endl;

    std::cout << "\nPilha está cheia? (0 = false, 1 = true) " << pilha.cheia() << std::endl << std::endl;
}