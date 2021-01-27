package tree;

import java.util.HashMap;
import java.util.Map;

import util.TreeNode;

public class lc105 {
	Map<Integer, Integer> indexMap = new HashMap<Integer, Integer>();

	public TreeNode buildTree(int[] preorder, int[] inorder) {
		int n = preorder.length;
		// 构造哈希映射，帮助我们快速定位根节点
		for (int i = 0; i < n; i++) {
			indexMap.put(inorder[i], i);
		}
		return myBuildTree(preorder, inorder, 0, n - 1, 0, n - 1);
	}

	public TreeNode myBuildTree(int[] preorder, int[] inorder, int preorder_left, int preorder_right, int inorder_left,
			int inorder_right) {
		if (preorder_left > preorder_right || inorder_left > inorder_right) {
			return null;
		}
		TreeNode root = new TreeNode();
		// 前序遍历中的第一个节点就是根节点
		int preorder_root = preorder_left;
		// 在中序遍历中定位根节点
		int inorder_root = indexMap.get(preorder[preorder_root]);
		int size_left_subtree = inorder_root - inorder_left;
		root.left = myBuildTree(preorder, inorder, preorder_left + 1, preorder_left + size_left_subtree, inorder_left,
				inorder_root - 1);

		root.right = myBuildTree(preorder, inorder, preorder_left + size_left_subtree + 1, preorder_right,
				inorder_root + 1, inorder_right);

		return root;
	}

}
