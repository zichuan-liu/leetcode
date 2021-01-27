package tree;

import java.util.HashMap;
import java.util.Map;

import util.TreeNode;

public class lc106 {
	Map<Integer, Integer> indexMap = new HashMap<Integer, Integer>();

	public TreeNode buildTree(int[] inorder, int[] postorder) {
		int n = inorder.length;

		for (int i = 0; i < n; i++) {
			indexMap.put(inorder[i], i);
		}
		return myBuildTree(inorder, postorder, 0, n - 1, 0, n - 1);
	}

	private TreeNode myBuildTree(int[] inorder, int[] postorder, int i, int j, int k, int l) {
		if (k > l || i > j) {
			return null;
		}
		TreeNode root = new TreeNode(postorder[l]);
		int postorderroot = l;
		int inorder_root = indexMap.get(postorder[postorderroot]);
		int right_len = j - inorder_root;
		root.right = myBuildTree(inorder, postorder, inorder_root + 1, j, postorderroot - right_len, postorderroot - 1);
		root.left = myBuildTree(inorder, postorder, i, inorder_root - 1, k, postorderroot - right_len - 1);

		return root;
	}
}
