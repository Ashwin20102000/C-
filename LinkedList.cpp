#include <bits/stdc++.h>
using namespace std;
class Linkedlist{
  public:
  class Node{
    public:
    int data;
    Node *next;
    Node(int data){
      this->data=data;
      this->next=NULL;
    }
  };
  Node *head=NULL,*tail=NULL;
  void addElement(int data){
    Node *newNode = new Node(data);
    if(head==NULL){
      head=newNode;
      tail=newNode;
    }
    else{
      tail->next=newNode;
      tail=newNode;
    }
  }
  void display(){
    Node* temp = head;
    while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
    }
  }
};
int main() {
  Linkedlist li;
  Linkedlist li1;
  li.addElement(12);
  li.addElement(22);
  li.addElement(32);
  li.addElement(92);
  li1.addElement(32);
  li1.addElement(12);
  li.display();
}
