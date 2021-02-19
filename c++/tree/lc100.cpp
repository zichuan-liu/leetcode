
class Solution {
	public:
		bool isBalanced(TreeNode* root) {
			if(root==nullptr) return true;

			return abs(height(root->left) - height(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right);

		}


		int height(TreeNode* root) {
			if(root==nullptr) return 0;
			return max(height(root->left),height(root->right))+1;
		}
};
