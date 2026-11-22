#include<iostream>

using namespace std;

class Node{
   public:
        int data;
        Node* next;
        
        Node(int val){   // constrcutor 
			this-> data = val;
		    this-> next = NULL;	
		} 
        
};


void InsertFront(int val){
	
	if(Node* temp = new Node(val)){
		temp -> next = head;
		head = temp;
	}
}
int main(){
	
   Node* node1 = new Node(50);
   cout << node1 -> data << endl;
   cout << node1 -> next << endl;
   	
	
}
