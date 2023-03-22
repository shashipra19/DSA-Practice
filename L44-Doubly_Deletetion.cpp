#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* prev;//Creating pointer
		Node* next;
		//Constructor
		Node(int d){
			this->data=d;
			this->prev=NULL;
			this->next=NULL;
		}
		~Node(){
		int value=this->data;
		//memory free
		if(this->next!=NULL){
			delete next;
			this->next=NULL;
		}
		cout<<"Memory is free for node with data "<<value<<endl;
	}
};
//Traverse Linked List
void print(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
//Length of Linked List
int getLength(Node* head){
	int len=0;
	Node* temp=head;
	while(temp!=NULL){
		len++;
		temp=temp->next;
	}
	return len;
}

//Insert at head
void insertAtHead(Node* &head,int d){
	//Empty List
	if(head==NULL){
		Node* temp=new Node(d);
		head=temp;
	}
	else{
	Node* temp=new Node(d);
	temp->next=head;
	head->prev=temp;
	head=temp;
	}
}

//Insert at tail
void insertAtTail(Node* &tail,int d){
	Node* temp=new Node(d);
	tail->next=temp;
	temp->prev=tail;
	tail=temp;
}
//Insert at any position
void insertAtPosition(Node* &tail,Node* &head,int position, int d){
	//Insert At start
	if(position==1){
		insertAtHead(head,d);
		return;
	}
/*	if(len==position-1){
		insertAtTail(tail,d);
	} */
	
	
	
	Node* temp=head;
	int cnt=1;
	while(cnt<position-1){
		temp=temp->next;
		cnt++;
	}
	
	//Insert At Last
	if(temp->next ==NULL){
		insertAtTail(tail,d);
		return;
	}
	
	//Creat New Node
	Node* nodeToInsert=new Node(d);
	nodeToInsert->next=temp->next;
	temp->next->prev=nodeToInsert;
	temp->next=nodeToInsert;
	nodeToInsert->prev=temp;
}
//Deleting
void deleteNode(int position,Node* &head){
	//Deleting first node or start node
	if(position==1){
		Node* temp=head;
		temp->next->prev=NULL;
		head=temp->next;
		//memory free start node
		temp->next=NULL;
		delete temp;
	}
	else{
		//Deleting middle node or last node
		Node* curr=head;
		Node* prev=NULL;
		
		int cnt=1;
		while(cnt<position){
			prev=curr;
			curr=curr->next;
			cnt++;
		}
		curr->prev=NULL;
		prev->next=curr->next;
		curr->next=NULL;
		delete curr;
	}
}

int main(){
	Node* node1=new Node(10);
	Node* head=node1;
	Node* tail=node1;
	print(head);
	
	insertAtHead(head,11);
	print(head);
	
	insertAtHead(head,13);
	print(head);
	
	insertAtHead(head,15);
	print(head);
	
	insertAtTail(tail,20);
	print(head);
	
	insertAtPosition(tail,head,2,100);
	print(head);
	
	deleteNode(2,head);
	print(head);
	deleteNode(5,head);
	print(head);
	
	
	
	
	cout<<"Length of LL "<<getLength(head)<<endl;
	return 0;
}
