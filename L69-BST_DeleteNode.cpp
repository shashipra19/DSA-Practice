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

Node* minVal(Node* root){
	Node* temp=root;
	while(temp->left != NULL){
		temp=temp->left;
	}
	return temp;
}

Node* maxVal(Node* root){
	Node* temp=root;
	while(temp->right!=NULL){
		temp=temp->right;
	}
	return temp;
}

Node* deleteFromBST(Node* root,int val){
	//base case
	if(root==NULL){
		return root;
	}
	if(root->data==val){
		//0 child
		if(root->left==NULL && root->right==NULL){
			delete root;
			return NULL;
		}	
		//1 child
		     //left child
		    if(root->left!=NULL && root->right==NULL){
		    	Node* temp=root->left;//store root left data before delete root
			    delete root;
			    return temp;
		    }
		     //right child
		    if(root->left==NULL && root->right!=NULL){
			    Node* temp=root->right;//store root right data before delete root
			    delete root;
			    return temp;
		    }
		//2 child
		if(root->left!=NULL && root->right!=NULL){
			int mini=minVal(root->right) -> data;
			root->data=mini;
			root->right= deleteFromBST(root->right,mini);
			return root;
		}
	}
	else if(root->data > val){
		//left me jao
		root->left=deleteFromBST(root->left,val);
		return root;
	}
	else{
		//right me jao
		root->right=deleteFromBST(root->right,val);
		return root;
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
    cout<<"Minimum value of BST is "<<minVal(root)->data<<endl;
    cout<<"Maximum value of BST is "<<maxVal(root)->data<<endl;
    cout<<"Deleting Node from BST"<<endl;
    root=deleteFromBST(root,10);
    cout<<"Printing after deletion"<<endl;
    levelOrderTraversal(root);
	return 0;
}
