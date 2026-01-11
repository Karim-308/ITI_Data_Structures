#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <stdexcept>
using namespace std;


#include "Node.h"
class LinkedList {
  Node *head;
  Node *tail;
public:
  LinkedList() : head(nullptr), tail(nullptr) {}

  // add
  void add(int data) {
    Node *newNode = new Node(data);

    if (head == NULL) {

      head = newNode;
      tail = newNode;
      return;
    }

    
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
  }
  

  bool isEmpty() {
    return head == NULL;
}

int getCount(){
    int count = 0;
    Node* temp = head;
    while (temp){
        count++;
        temp = temp->next;
    }
    return count;
}

int getDataByIndex(int index) {
    if(index<0 || index+1 >getCount())   throw std::out_of_range("Index Out of Bounds");

    Node* temp = head;
    int i =0; 
    while(i<index){
        temp = temp->next;
        i++;
    }
    return temp->data;

  
}

void deleteNode(int value){
    if (head == NULL )return;
    Node* current = head;

    while (current && current->data != value){
    current  =current ->next;    
    }

    if (current == NULL) return;



    if (head == tail){
        head = NULL;
        tail = NULL;
        delete current;
        return;
        
    }


    if (current == tail){
        tail->prev->next =NULL;
        tail= current->prev;
        delete current;
        return;
    }

    if (current == head){
        head->next->prev = NULL;
        head = head -> next;
        delete current;
        return;

    }



    Node* before = current->prev;
    Node* after = current->next;

    before->next = after;
    after->prev = before;

    delete current;



}


void insertAfter(int data, int afterData) {
   if (head == NULL) return;

   Node* current = head;
   while (current && current->data != afterData){
    current  =current ->next;    
    }

    if (current == NULL) return;

    Node* newNode  = new Node(data);

    newNode->next = current->next;
    newNode->prev = current;
    current->next = newNode;

    if (newNode->next != NULL) {
        newNode->next->prev = newNode;
    }

    if (current == tail) tail = newNode;


}
void insertBefore(int data, int beforeData){
    if (head == NULL) return;

    Node* current = head;
    while (current && current->data != beforeData){
     current  =current ->next;    
     }
 
     if (current == NULL) return;

     Node* newNode  = new Node(data);

     Node* prevNode = current->prev;

     newNode->next = current;
     newNode->prev = prevNode;
     current->prev = newNode;

     if (prevNode != NULL) {
         prevNode->next = newNode;
     }

     if (current == head) head = newNode;
     
} 	



void clear(){
    while (head != NULL){
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    tail = NULL;
}

  ~LinkedList(){
    while (head != NULL){
        Node* temp = head;
        head = head->next;
        delete temp;
    }
  }

  
  void removeAll (int data){

    Node* current = head;

    while (current ){

        Node * temp = current -> next;
        
        if (current-> data == data)
            {
                deleteNode(data);
            }
            current = temp;
    }
  }


  void display(){

    Node * temp = head;
    int count = 1;

    while (temp){

        cout <<count++<<": "<< temp->data << " ";
        temp = temp->next;

    }
    cout <<endl;

  }


void friend bubbleSort(LinkedList& list);
void friend selectionSort(LinkedList& list);
void friend insertionSort(LinkedList& list);
void friend binarySort(LinkedList& list);
int friend linearSearch(LinkedList& list, int target);
int friend binarySearch(LinkedList& list, int target);


};

#endif