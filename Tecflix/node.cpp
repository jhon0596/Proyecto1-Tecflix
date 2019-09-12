#include "node.h"

node::node()
{

}

void node::setValor(int valor) {
    this->valor =valor;
}

int node::getValor() const {
    return valor;
}

node *node::getNext() const {
    return next;
}

void node::setNext(node *pun) {
    this->next=pun;
}

