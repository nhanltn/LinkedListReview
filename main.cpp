#include <iostream>
#include "list.h"

using namespace std;

void printList(LinkedList list);

int main(){
    cout << "Welcome to LinkedList Review using C/C++" << endl;
    
    LinkedList list;
    Node *n;
    for (int i = 0; i < 10; i++){
        n = new Node(i);
        list.addLast(n);
    }
    
    n = new Node(11);
    list.add(n, 5);
    n = new Node(10);
    list.add(n, 0);
    n = new Node(15);
    list.add(n, 15);
    
    list.removeAt(0);
    list.removeAt(6);
    
    printList(list);
}

void printList(LinkedList list){
    Node *n;
    n = list.getFirst();
    while (n != NULL){
        cout << "node " << n->getData() << endl;
        n = n->getNext();
    }
}

