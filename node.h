#ifndef Node_H
#define Node_H

#include <cstddef>

class Node{
    public:
        Node(){ data = 0;   next = NULL;}
        Node(int newData) {data = newData;   next = NULL;}
        int getData(){  return data;};
        void setData(int newData){  data = newData;}
        Node *getNext(){    return next;};
        void setNext(Node *nextNode){next = nextNode;}
    
    private:
        int data;
        Node *next;
};

#endif