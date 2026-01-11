#include <iostream>
#include "../lab1/LinkedList.h"
#include "../lab1/Node.h"
using namespace std;

void bubbleSort(LinkedList& list){
    if (list.head == NULL || list.head->next == NULL) return;

    bool swapped = true;
    while (swapped) {

        swapped = false;
        
        Node* current = list.head;
        while(current->next != NULL){
            if(current-> data > (*(current->next)).data){
                int temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                swapped = true;
            }
            current = current->next;
        }

    }

}

void selectionSort(LinkedList& list){
    if (list.head == NULL || list.head->next == NULL) return;


    Node* swapLocation = list.head;
    while (swapLocation->next != NULL) {
        Node* current = swapLocation->next;
        Node* minNode = swapLocation;
        while(current != NULL){
            if(current-> data < (*(minNode)).data){
                minNode = current;
            }
            current = current->next;
        }
        if (minNode != swapLocation){
            int temp = swapLocation->data;
            swapLocation->data = minNode->data;
            minNode->data = temp;
        }
        swapLocation = swapLocation->next;
    }

}

int main() {

    LinkedList list;
    list.add(55);
    list.add(88);
    list.add(64);
    list.add(102);
    list.add(17);
    cout << "Before sorting: ";
    list.display();
    // bubbleSort() call
    selectionSort(list);
    cout << "After sorting: ";
    list.display();
    return 0;
}
