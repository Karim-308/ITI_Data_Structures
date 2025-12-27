#include <iostream>
#include "Deque.h"
using namespace std;

int main() {

    Deque dq(5);
    
    dq.insertRear(5);
    dq.insertRear(10);
    dq.insertRear(15);
    dq.display();
    
    dq.insertFront(11);
    dq.insertFront(112);
    dq.display();
    
    
    cout << "deleted value: " <<dq.deleteFront() << endl;
    dq.display();
    
    cout << "deleted value: " << dq.deleteRear() << endl;
    dq.display();
    
    dq.insertRear(555);
    dq.insertRear(666);
    dq.display();
    dq.insertRear(777);  // full
    dq.display();
    
    dq.deleteFront();
    dq.deleteFront();
    dq.deleteFront();
    dq.deleteFront();
    dq.deleteFront();
    dq.display();


    
    return 0;
}