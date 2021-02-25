#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left, *right;
	TreeNode():val(0),left(nullptr),right(nullptr) {
	}
	TreeNode(int x): val(x),left(nullptr), right(nullptr) {
	}
	TreeNode(int x, TreeNode* left, TreeNode* right):
		val(x),left(left),right(right) {
	}
};

class Solution {
	public:
		int sumNumbers(TreeNode* root) {
			if(!(root->left&&root->right)) return root->val;


			vector<int> res;

			dfs(root, res, 0);

			int sum = 0;
			for(int i=0; i<res.size(); i++) {
				sum+=res[i];
			}
			return sum;
		}

		void dfs(TreeNode* root, vector<int>& res, int path) {
			path = path*10+root->val;

			if(root->left==nullptr&&root->right==nullptr) {
				res.push_back(path);
				return;
			}

			if(root->left!=nullptr) dfs(root->left, res, path);

			// path = path/10; //»ØËÝ

			if(root->right!=nullptr) dfs(root->right, res, path);
		}
};


int main () {

	return 0;
}
