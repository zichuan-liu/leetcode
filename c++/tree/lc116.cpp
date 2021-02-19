#include<bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};


class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){	//²ã´Î±éÀú 
        	int currlevel = q.size();
			Node* left_root = q.front();
			q.pop(); 
            	if(left_root->left) q.push(left_root->left);
				if(left_root->right) q.push(left_root->right);
			for(int i=1;i<currlevel;i++){
				Node* node = q.front();
				q.pop();
				left_root->next = node;
				left_root = node;
				
				if(node->left) q.push(node->left);
				if(node->right) q.push(node->right);
			}
			left_root->next=nullptr;
		}
		return root;
    }
};
int main(){
	return 0;
}
