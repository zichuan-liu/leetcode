package tree;

import util.TreeNode;

public class lc108 {
	public TreeNode sortedArrayToBST(int[] nums) {
		return helper(nums, 0, nums.length);
	}

	public TreeNode helper(int[] nums, int l, int r) {
		// TODO Auto-generated method stub
		if (r < l) {
			return null;
		}
		int mid = (l + r) / 2;
		TreeNode node = new TreeNode(nums[mid]);
		node.left = helper(nums, l, mid - 1);
		node.right = helper(nums, mid + 1, r);
		return node;
	}
}
