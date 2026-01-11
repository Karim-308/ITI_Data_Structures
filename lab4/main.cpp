#include <iostream>
#include "BST.h"

using namespace std;




int main()
{
    Tree t;
    t.add(50);
    t.add(40);
    t.add(30);
    t.add(60);
    t.add(70);
    t.add(65);
    t.add(25);
    t.add(45);
    t.add(47);
    t.add(48);
    t.add(49);
    
    t.getNodeByData(50)!= NULL ? cout<<"found"<<endl :cout<<"Not found"<<endl;
    t.getNodeByData(45)!= NULL ? cout<<"found"<<endl :cout<<"Not found"<<endl;
    t.getNodeByData(21)!=NULL ? cout<<"found"<<endl :cout<<"Not found"<<endl;
    t.getNodeByData(23)!=NULL ?  cout<<"found"<<endl :cout<<"Not found"<<endl;
    
    int parent = t.getParentMain(50);
    if (parent == -1) {
        cout << "root" << endl;
    } else if (parent == -5) {
        cout << "not found" << endl;
    } else {
        cout << "parent is " << parent << endl;
    }

    parent = t.getParentMain(65);
    if (parent == -1) {
        cout << "root" << endl;
    } else if (parent == -5) {
        cout << "not found" << endl;
    } else {
        cout << "parent of 65 is " << parent << endl;
    }

    t.checkDataInTree(21)!=false? cout<<"found"<<endl :cout<<"not found"<<endl;
    t.checkDataInTree(23)!=false? cout<<"found"<<endl :cout<<"not found"<<endl;




    cout<<t.getMaxRightMain(40)<<endl;
    cout <<t.getMaxRightMain(30)<<endl;

   
    return 0;
}