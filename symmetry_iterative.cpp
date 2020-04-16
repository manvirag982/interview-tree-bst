
#include<bits/stdc++.h> 
using namespace std; 

// A Binary Tree Node 
struct Node 
{ 
	int key; 
	struct Node* left, *right; 
}; 

 
Node *newNode(int key) 
{ 
	Node *temp = new Node; 
	temp->key = key; 
	temp->left = temp->right = NULL; 
	return (temp); 
} 


bool isSymmetric(struct Node* root) 
{ 
	if(root == NULL) 
		return true; 
	
	
	if(!root->left && !root->right) 
		return true; 
	
	queue <Node*> q; 
	

	q.push(root); 
	q.push(root); 
	
	
	Node* leftNode, *rightNode; 
	
	while(!q.empty()){ 
		
		
		leftNode = q.front(); 
		q.pop(); 
		
		rightNode = q.front(); 
		q.pop(); 
		
		
		if(leftNode->key != rightNode->key){ 
		return false; 
		} 
		
		
		if(leftNode->left && rightNode->right){ 
			q.push(leftNode->left); 
			q.push(rightNode->right); 
		} 
		
		 
		else if (leftNode->left || rightNode->right) 
		return false; 
		
	
		if(leftNode->right && rightNode->left){ 
			q.push(leftNode->right); 
			q.push(rightNode->left); 
		} 
		
		
		else if(leftNode->right || rightNode->left) 
		return false; 
	} 
	
	return true; 
} 


int main() 
{ 
	
	Node *root = newNode(1); 
	root->left = newNode(2); 
	root->right = newNode(2); 
	root->left->left = newNode(3); 
	root->left->right = newNode(4); 
	root->right->left = newNode(4); 
	root->right->right = newNode(3); 

	if(isSymmetric(root)) 
		cout << "The given tree is Symmetric"; 
	else
		cout << "The given tree is not Symmetric"; 
	return 0; 
} 


