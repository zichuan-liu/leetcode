/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
	TreeNode* head = new TreeNode(0), cur = head;
    void flatten(TreeNode* root) {
		cur->right = root;
		cur->left = nullptr;
		cur = cur->right; 
		flatten(root->left);
		flatten(root->right);
		
		root = head->right;
    }
};
