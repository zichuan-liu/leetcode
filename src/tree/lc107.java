package tree;

import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

import util.TreeNode;

public class lc107 {

	public List<List<Integer>> levelOrderBottom(TreeNode root) {
		ArrayList<List<Integer>> res = new ArrayList<List<Integer>>();
		if (root == null) {
			return res;
		}
		Queue<TreeNode> queue = new LinkedList<TreeNode>();
		queue.add(root);
		while (!queue.isEmpty()) {
			List<Integer> level = new ArrayList<Integer>();
			int currentLevelSize = queue.size();
			for (int i = 0; i < currentLevelSize; i++) {
				TreeNode node = queue.poll();
				level.add(node.val);
				if (node.left != null) {
					queue.add(node.left);
				}
				if (node.right != null) {
					queue.add(node.right);
				}
			}
			res.add(level);
		}
		Collections.reverse(res);
		return res;
	}
}
