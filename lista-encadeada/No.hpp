#ifndef NO_HPP
#define NO_HPP

class No
{

private:
    No *proximo;
    int dado;

public:
    No(int dado);
    No *getProximo();
    void setProximo(No *no);
    int getDado();
    void setDado(int novoDado);
};

#endif