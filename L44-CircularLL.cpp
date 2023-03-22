#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
	//Constructor
	Node(int d){
		this->data=d;
		this->next=NULL;	
	}
	~Node(){
		int value=this->data;
		if(this->next!=NULL){
			delete next;
			next=NULL;
		}
		cout<<"Memory is free for node with data "<<value<<endl;
	}	
};

void insertNode(Node* &tail,int element,int d){
	//Empty Linked list
	if(tail==NULL){
		Node* newNode=new Node(d);
		tail=newNode;
		newNode->next=newNode;
	}
	else{
		//Non empty List
		//assuming that the element is present in the list
		Node* curr=tail;
		while(curr->data!=element){
			curr=curr->next;
		} 
		//element found ->curr is representing element node
		Node* temp=new Node(d);
		temp->next=curr->next;
		curr->next=temp;
	}
}
void deleteNode(Node* &tail, int value){
	//empty list
	if(tail==NULL){
		cout<<"List is Empty"<<endl;
		return;
    }
    else{
    	//Non Empty List
    	Node* prev=tail;
    	Node* curr=prev->next;
    	while(curr->data!=value){
    		prev=curr;
    		curr=curr->next;
		}
		prev->next=curr->next;
		//1 Node List
		if(tail==curr){
			tail=NULL;
		}
		//>=2 Node List
		else if(tail==curr){
			tail=prev;
		}
		curr->next=NULL;
		delete curr;
	}
}
//Printing LinkedList
void print(Node* tail){
	Node* temp=tail;
	//List is empty
	if(tail==NULL){
		cout<<"List is Empty"<<endl;
		return;
	}
	
	do{
		cout<<tail->data<<" ";
		tail=tail->next;
	}while(tail!=temp);
	cout<<endl;
}

int main(){
	Node* tail=NULL;
	insertNode(tail,5,3);
	print(tail);
	insertNode(tail,3,7);
	print(tail);
	insertNode(tail,7,2);
	print(tail);
	insertNode(tail,3,8);
	print(tail);
	insertNode(tail,2,9);
	print(tail);
	deleteNode(tail,8);
	print(tail);
	deleteNode(tail,2);
	print(tail);
	return 0;
}
