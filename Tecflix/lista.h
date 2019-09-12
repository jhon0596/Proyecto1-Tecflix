#ifndef LISTA_H
#define LISTA_H

#include "node.h"
class Lista
{
public:
    Lista();
    void addF(int i);
    void deleteF();
    void editP(int index, int valor);
    int getP(int index);
    node *head,*tail;

private:
    int size;

};


#endif // LISTA_H
