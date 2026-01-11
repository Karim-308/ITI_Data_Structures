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

void insertionSort(LinkedList& list){
    if (list.head == NULL || list.head->next == NULL) return;

    Node* current = list.head->next;

    while (current != NULL) {
        int key = current->data;
        Node* compare = list.head;

        while (compare != current) {
            if (compare->data > key) {
                int temp = compare->data;
                compare->data = key;
                key = temp;
            }
            compare = compare->next;
        }
        current->data = key;
        current = current->next;
    }
}

int linearSearch(LinkedList& list, int target){
    Node* current = list.head;
    int index = 0;

    while (current != NULL) {
        if (current->data == target) {
            return index;
        }
        current = current->next;
        index++;
    }

    return -1;
}

int binarySearch(LinkedList& list, int target){
    Node* start = list.head;
    Node* end = NULL;

    while (start != end) {
        Node* slow = start;
        Node* fast = start;
        while (fast != end && fast->next != end) {
            slow = slow->next;
            fast = fast->next->next;
        }

        Node* mid = slow;
        if (mid->data == target) {
            Node* temp = list.head;
            int index = 0;
            while (temp != mid) {
                temp = temp->next;
                index++;
            }
            return index;
        }

        if (mid->data < target) {
            start = mid->next;
        } else {
            end = mid;
        }
    }

    
    return -1;
}

int main() {

    LinkedList list;
    list.add(55);
    list.add(88);
    list.add(64);
    list.add(102);
    list.add(17);
    list.display();
    //bubbleSort(list);
    //selectionSort(list);
    insertionSort(list);
    cout << "insertion sort: ";
    list.display();
    int target = 64;
    int result = linearSearch(list, target);
    if (result != -1) {
        cout <<target << " index " << result << endl;
    } else {
        cout <<target << " not found" << endl;
    }

    int res = binarySearch(list, 64);
    if ( res !=-1) cout <<target << " found at "<<res << endl;
    return 0;
}
