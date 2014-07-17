#include "list.h"
void LinkedList::addFirst(Node *n){
    n->setNext(first);
    first = n;
    size++;
}

void LinkedList::addLast(Node *n){
    if (first == NULL){
        first = n;
        last = n;
    } else {
        last->setNext(n);
        last = n;
    }
    size++;
}

void LinkedList::add(Node *n, int index){
    if (index == 0)
        addFirst(n);
    else if (index == size)
        addLast(n);
    else {
        Node *p, *q;
        int pos= 0;
        p= first;
        while (p != NULL && pos != index){
        q= p;
        p= p->getNext();
            pos++;
        }
        
        //find position --> insert n as q --> n --> p
        if (pos== index){
            q->setNext(n);
            n->setNext(p);
        }
    }
}

void LinkedList::removeFirst(){
    Node *p;
    p = first;
    first = first->getNext();
    delete p;
}

void LinkedList::removeLast(){
    Node *p;
    p = first;
    while (p->getNext() != last)
        p = p->getNext();
        
    Node *q = last;
    last = p;
    last->setNext(NULL);
    delete q;
}

void LinkedList::removeAt(int index){
    if (index == 0)
        removeFirst();
    else if (index == size)
        removeLast();
    else {
        Node *p, *q;
        p = first;
        int pos = 0;
        while (p != NULL && pos != index-1){
            q = p;
            p = p->getNext();
            pos++;
        }
        
        if (pos == index-1){
            p = p->getNext();
            q->setNext(p);
        }
            
    }
}

Node* LinkedList::get(int index){
    if (index == 0)
        return first;
    else if (index == size)
        return last;
    else {
        Node *p;
        p = first;
        int pos = 0;
        while (p != NULL && pos != index){
            p = p->getNext();
            pos++;
        }
        
        if (pos == index)
            return p;
    }
}

void LinkedList::editAt(int index, Node newValue){
    Node *p;
    p = get(index);
    int i = newValue.getData();
    if (p != NULL)
        p->setData(newValue.getData());
}
