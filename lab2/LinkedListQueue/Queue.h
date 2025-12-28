#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include "Node.h"
using namespace std;

class Queue {

Node * front;
Node * back;

public:

Queue(): front(nullptr) , back(nullptr){}

bool isEmpty(){return front == nullptr;}

void enqueue (int data){
    Node* newNode  = new Node(data);

    if (front == nullptr){
        front = back = newNode;
        return;
    }

    back->next = newNode;
    back = newNode;

}


int dequeue(){
    if(isEmpty()){

        cout<< "Queue is empty"<<endl;
        return -9999;

    }

    int data = front -> data;
    Node * temp = front ;
    front = front-> next;

    if(front == nullptr) back = nullptr;

    delete temp;
    return data;

}

void display() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return;
    }

    Node* current = front;
    int count = 1;
    while (current) {
        cout << count++ << ": " << current->data<< " ";
        current = current->next;
    }
    cout<<endl;
}
~Queue() {
    while (front != nullptr) {
        Node* temp = front;
        front = front->next;
        delete temp;
    }
}

};

#endif