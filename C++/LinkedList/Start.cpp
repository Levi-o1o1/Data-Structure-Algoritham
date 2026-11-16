// we can create linked list using two ways (1)class & (2) struct (3)  functions;

// struct way
#include<iostream>
using namespace std;

struct Node{

    int data;
    Node* next;
    
};

int main(){

  Node* first = new Node;
  Node* second = new Node;
  Node* third = new Node;

  first->data = 20;
  first->next = second;

  second->data = 50;
  second->next = third;

  third->data = 75;
  third->next = NULL;

  Node* temp = first;

  while(temp != NULL){
    cout<<temp->data<<" ";
    temp  = temp->next;
  }
  delete third;
  delete second;
  delete first;

return 0;
    
}