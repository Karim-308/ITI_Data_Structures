#ifndef DEQUE_H
#define DEQUE_H
using namespace std;

class Deque{

int *arr;
int front;
int rear;
int capacity;

public:

Deque(int c) : capacity(c){
arr = new int [c];
front = -1;
rear= -1;
}


~Deque(){
    delete[] arr;
}



void insertFront(int data){
    if ((front - 1 + capacity) % capacity == rear ) {
    
        return;
    }
    if (front == -1 ) {
        front = 0;
        rear= 0 ;
        
    }
    else {
        front = (front - 1 + capacity) % capacity;
    }

    arr[front] = data;
}

void insertRear(int data){

    if ((rear + 1 ) % capacity == front ) {
    
        return;
    }
    if (front == -1 ) {
        front = 0;
        rear= 0 ;
    }
    else {
        rear = (rear + 1 ) % capacity;
    }

    arr[rear] = data;
}

int deleteRear() {
   
    if (front == -1) {
        
        return -99999;
    }
    
    int data = arr[rear];
    
    if (front == rear) {
        front = -1;
        rear = -1;
    }
 
    else {
        rear = (rear - 1 + capacity) % capacity;
    }
    
    return data;
}


int deleteFront() {
   
    if (front == -1) {
        
        return -99999;
    }
    
    int data = arr[front];
    
    if (front == rear) {
        front = -1;
        rear = -1;
    }
 
    else {
        front = (front +1 ) % capacity;
    }
    
    return data;
}


void display(){
    if (front == -1) {
        cout << "Deque is empty" << endl;
        return;
    }
    int current = front;
    int count = 1;

    while (current != rear){
     cout <<count++ << ": "<< arr[current]<< " ";
     current = (current +1 )% capacity;   
    }
    cout << count << ": " << arr[rear] << endl;

}








};



#endif