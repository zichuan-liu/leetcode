package tree;

import java.util.ArrayList;
import java.util.List;

import javax.swing.tree.TreeNode;

public class lc94 {
	public List<Integer> inorderTraversal(TreeNode root) {
		List<Integer> res = new ArrayList<Integer>();
		innorder(root, res);
		return res;
	}

	public void innorder(TreeNode root, List<Integer> res) {
		if (root == null) {
			return;
		}
		// inorder(root.left, res);
		// res.add(root.val);
		// inorder(root.right, res);

	}

}
