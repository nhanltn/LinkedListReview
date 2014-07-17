#ifndef LinkedList_H
#define LinkedList_H

#include "node.h"

class LinkedList{
    public:
        LinkedList(){   size = 0;   first = NULL;   last = NULL;}
        void addFirst(Node *n);
        void addLast(Node *n);
        void add(Node *n, int index);
        void removeFirst();
        void removeLast();
        void removeAt(int index);
        void editAt(int index);
        Node *getLast() {return last;}
        Node *getFirst() {return first;}
        
    private:
        int size;
        Node *first, *last;
};

#endif