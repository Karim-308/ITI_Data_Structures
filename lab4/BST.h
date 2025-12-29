#ifndef BST_H
#define BST_H
#include <iostream>
using namespace std;


class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};




class Tree {
    Node* root;
public:
    Tree(int data) : root(new Node(data)) {}
    Tree() : root(NULL) {}
    
    void add(int data){
        if (root == NULL) {
            root = new Node(data);
            return;
        }
        Node* newNode = new Node(data);
        Node* current = root;
        Node* parent = NULL;

        while(current != NULL){
            parent = current;
            if (data < current->data){
                current = current->left;
            } else {
                current = current->right;
            }
        }

        if (data< parent->data){
            parent->left = newNode;
        } else {
            parent->right = newNode;
        }

    }


    Node* getNodeByData(int data){
        Node* current = root;
        if (current == NULL) return NULL;

        while(current){
            if (data == current->data){
                return current;
            } else if (data < current->data){
                current = current->left;
            } else {
                current = current->right;
            }
        }

        return NULL;
    }

     Node* getParent(int data){

        if (root == NULL) return NULL;
        
        Node* current = root;

        if (current->data == data){
            return NULL;
        }  
        while( current  ){
            if ((current->left != NULL && data == current->left->data) || (current->right != NULL && data == current->right->data)){
                return current;
            } else if (data < current->data){
                current = current->left;
            } else {
                current = current->right;
            }
        }
      

        return NULL;
    }


    Node* getMaxRight(Node * current){
        
        if (current == NULL) return NULL;
        
        while(current->right != NULL){
            current = current->right;
        
        }
      return current;
}


bool checkDataInTree(int data){
    if(getNodeByData(data) != NULL){
        return true;
    }
    return false;
}

/////
   int getParentMain(int data){
            Node *node=getNodeByData(data);
            if(node != NULL){
                Node *parent=getParent(node);
                if(parent != NULL){
                    return parent->data;
                }else{
                    return -1; // root
                }
            }else{
                return -5;//NotFound
            }

    }

    int getMaxRightMain(int data){
        Node *node=getNodeByData(data);
        if(node != NULL){
            Node *maxRight=getMaxRight(node);
            return maxRight->data;
        }
        return -1;
    }
Node * getParent(Node * current ){
        //Node * current =getNodeByData(data);
        //current = root;
        if(current == root){
            return NULL;
        }
        if(current != NULL){
            Node * parent = root;
            while (parent != NULL ){
                if(parent->left == current || parent->right == current){
                    return parent;
                }else{
                    //JUMP
                    if(current->data > parent->data){
                        parent=parent->right;
                    }else{
                        parent=parent->left;
                    }
                }
            }

        }
         return NULL;
    }


};

#endif