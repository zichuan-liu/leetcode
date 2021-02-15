class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return help(root, LONG_MIN, LONG_MAX);
    }
    
    bool help(TreeNode* root, int down, int up){
    	if(root==nullptr) return true;
    	if(root->val<down||root->val>up) return false;
    	return help(root->left, down, root->val) && help(root->right, root->val,up);
	}
};
