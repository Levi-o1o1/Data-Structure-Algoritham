#include<iostream>

using namespace std;
// this is a linked list node 
class Node{
    public:
    int data;
    Node* next;
    Node(int new_data){
        this->data = new_data;
        this->next = NULL;
    }
};

// A function that traverse and print the singly linked list

void traverse(Node* head){
    while (head != NULL){
        cout<< head->data;

        if(head-> next != NULL)
           cout << "->";
           head = head -> next;
    }
    cout << endl; 
}


int main(){
    // create a linked list data

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    traverse(head);

    return 0;
}