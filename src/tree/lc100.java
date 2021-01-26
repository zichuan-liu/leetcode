package tree;

import util.TreeNode;

public class lc100 {
	public boolean isSameTree(TreeNode p, TreeNode q) {
		if (p == null && q == null) {
			return true;
		} else if (p != null && q != null) {
			return isSameTree(p.left, q.left) && isSameTree(p.right, q.right) && p.val == q.val;
		}
		return false;
	}
}
