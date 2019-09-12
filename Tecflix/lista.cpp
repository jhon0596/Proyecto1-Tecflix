#include "lista.h"
#include"node.h"
Lista::Lista()
{
    head= nullptr;
    tail = nullptr;
    size = 0;
}

void Lista::addF(int i) {

    node *temp=new node;
    temp->setValor(i);
    temp->setNext(nullptr);
    size++;
    if(head == nullptr)
    {
        head=temp;
        tail=temp;
        temp= nullptr;
    }
    else
    {
        tail->setNext(temp);
        tail =temp;

    }
}

void Lista::deleteF() {
    size--;
    node *temp;
    temp=head;
    head=head->getNext();
    delete temp;
}
void Lista::editP(int index, int valor){

    if(index == 0) {
        head->setValor(valor);
    } else {

        node* curr = head;
        for(int i = 0; i < index; ++i) {
            curr = curr->next;
        }
        curr->setValor(valor);
    }
}

int Lista::getP(int index){
    if(index == 0) {

            return head->getValor();
        } else {

            node* curr = head;
            for(int i = 0; i < index; ++i) {
                curr = curr->next;
            }
            return curr->getValor();
        }
}



