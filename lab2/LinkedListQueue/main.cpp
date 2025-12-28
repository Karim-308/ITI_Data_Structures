#include <iostream>
#include "Queue.h"
using namespace std;

int main() {

    Queue q;
    
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.display();
    
    q.enqueue(11);
    q.enqueue(112);
    q.display();
    
    
    cout << "deleted value: " <<q.dequeue() << endl;
    q.display();
    
    cout << "deleted value: " << q.dequeue() << endl;
    q.display();
    
    q.enqueue(555);
    q.enqueue(666);
    q.display();
    q.enqueue(777);  // full
    q.display();
    
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();


    
    return 0;
}