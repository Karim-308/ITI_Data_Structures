#include <iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;

int main (){
    LinkedList list;
    list.add(5);
    list.add(10);
    list.add(15);
    list.add(20);
    list.add(25);
    list.add(30);
    list.add(35);
    list.add(40);
    list.display();

    cout<< (bool)list.isEmpty()<<endl;

    cout<< list.getCount()<<endl;

    try{
    cout<< list.getDataByIndex(10)<<endl;}
    catch(exception e){ 
        cout << "You inserted an index that isn't valid"<<endl;

    }

    cout<< list.getDataByIndex(7)<<endl;

    list.deleteNode(50);
    list.deleteNode(10);
    list.display();

    list.insertAfter(5555, 35);
    list.insertBefore(77777, 35);
    list.display();


    list.add(25);
    list.display();
    list.removeAll(25);
    list.display();


    list.clear();


    list.display();

    return 0 ;

}