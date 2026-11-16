// node: stores data and the next node's address.
// Head: stores the address of the first node.
// LINKED LIST: manages the complete linked list
#include<iostream>
using namespace std;

// create using class 
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class LinkedList{
    private:
     Node* head;

    public:
    LinkedList(){
        head = NULL;
    }

// insertion at the end
// 1. create a new node
// 2. check whether the list is empty
// 3. if empty make the new node the head
// 4. otherwise traverse until the last node.
// 5. connect the last node to the new node

void insertAtEnd(int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;

    }
    temp->next = newNode;
}

// display the list

void display(){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"-> ";
        temp = temp->next;
    }

    cout<< "NULL"<<endl;
}

~LinkedList(){

    Node* temp = head;
    while(temp != NULL){
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
}
};


int main(){

    LinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.display();
    return 0;
}