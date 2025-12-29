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
    
    t.getNodeByData(50)!=NULL? cout<<"Found"<<endl :cout<<"Not Found"<<endl;
    t.getNodeByData(45)!=NULL? cout<<"Found"<<endl :cout<<"Not Found"<<endl;
    t.getNodeByData(65)!=NULL? cout<<"Found"<<endl :cout<<"Not Found"<<endl;
    t.getNodeByData(60)!=NULL? cout<<"Found"<<endl :cout<<"Not Found"<<endl;
    t.getNodeByData(21)!=NULL? cout<<"Found"<<endl :cout<<"Not Found"<<endl;
    t.getNodeByData(23)!=NULL? cout<<"Found"<<endl :cout<<"Not Found"<<endl;
    
    t.checkDataInTree(50)!=false? cout<<"Found"<<endl :cout<<"Not Found"<<endl;
    t.checkDataInTree(45)!=false? cout<<"Found"<<endl :cout<<"Not Found"<<endl;
    t.checkDataInTree(65)!=false? cout<<"Found"<<endl :cout<<"Not Found"<<endl;
    t.checkDataInTree(60)!=false? cout<<"Found"<<endl :cout<<"Not Found"<<endl;
    t.checkDataInTree(21)!=false? cout<<"Found"<<endl :cout<<"Not Found"<<endl;
    t.checkDataInTree(23)!=false? cout<<"Found"<<endl :cout<<"Not Found"<<endl;
    int parent = t.getParentMain(21);
    parent == -1 ? cout<<"Root"<<endl: parent == -5 ? cout<<"<<Not Found>>"<<endl:cout<<"Parent = "<<parent<<endl;
    parent = t.getParentMain(50);//root
    parent == -1 ? cout<<"Root"<<endl: parent == -5 ? cout<<"<<Not Found>>"<<endl:cout<<"Parent = "<<parent<<endl;
    parent = t.getParentMain(65);//70
    parent == -1 ? cout<<"Root"<<endl: parent == -5 ? cout<<"<<Not Found>>"<<endl:cout<<"Parent = "<<parent<<endl;
    parent = t.getParentMain(45);//40
    parent == -1 ? cout<<"Root"<<endl: parent == -5 ? cout<<"<<Not Found>>"<<endl:cout<<"Parent = "<<parent<<endl;

    cout<<"Max Right : "<<t.getMaxRightMain(40)<<endl;


    cout << "Hello world!" << endl;
    return 0;
}