#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;

Node(int data){
    cout<<"constructor called"<<endl;
    this->data=data;
    this->next=NULL;
}

};
int main(){


Node *node1= new Node(14);
cout<<node1->data<<endl;
cout<<node1->next<<endl;










    return 0;

}
