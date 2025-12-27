#ifndef NODE_H
#define NODE_H

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node (){}
    Node (int data){
        this->data = data;
        this->next = NULL;
        this->prev =NULL;
    }
};

#endif