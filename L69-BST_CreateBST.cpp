//#include<bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;
class Node{
	public:
		int data;
		Node* left;
		Node* right;
	Node(int d){
		this->data=d;
		this->left=NULL;
		this->right=NULL;	
	}	
};

Node* insertIntoBST(Node* root,int d){
	//base case
	if(root==NULL)
	{
		root=new Node(d);
		return root;
	}
	
	if(d > root->data){
		//insert into right part
		root->right=insertIntoBST(root->right,d);
	}
	else{
		//insert into left part
		root->left=insertIntoBST(root->left,d);
	}
	return root;
}

void takeInput(Node* &root){
	int data;
	cin>>data;
	while(data != -1){
		root=insertIntoBST(root,data);
		cin>>data;
	}
}

//Tree Travesal
void levelOrderTraversal(Node* root){
	queue<Node*> q;
	q.push(root);
	q.push(NULL);//seperator
	
	while(!q.empty()){
		Node* temp=q.front();
		q.pop();
		
		if(temp==NULL){//Old level completely traverse
			cout<<endl;
			if(!q.empty()){//Queue still have some child
				q.push(NULL);
			}
		}
		else{
			cout<<temp->data<<" ";
			if(temp->left){ //temp left non empty
				q.push(temp->left);
			}
			if(temp->right){//temp right non empty
				q.push(temp->right);
		    }
		}
	}
}
int main(){
	Node* root=NULL;
	cout<<"Enter data to the create BST"<<endl;
	takeInput(root);
	cout<<"Printing BST"<<endl;
    levelOrderTraversal(root);
	return 0;
}
