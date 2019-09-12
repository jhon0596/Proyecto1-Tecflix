#ifndef NODE_H
#define NODE_H


class node
{
public:
    node();
    node *getNext() const;
    void setValor(int valor);
    void setNext(node* pun);
    int getValor() const;
    node *next;
private:
    int valor;

};

#endif // NODE_H
