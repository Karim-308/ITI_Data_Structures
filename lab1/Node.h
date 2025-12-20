#include <iostream>


class Node{
    private:
    int data;
    Node* next;
    Node* prev;
    public:
    Node (){}
    Node (int data){
        this->data = data;
        this->next = NULL;
        this->prev =NULL;

    }
}