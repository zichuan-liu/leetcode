package backtracking;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class lc47 {
	List<List<Integer>> res = new ArrayList<>();

	public List<List<Integer>> permute(int[] nums) {
		Arrays.sort(nums);
		fun(nums, new ArrayList<Integer>());

		return res;
	}

	private void fun(int[] nums, ArrayList<Integer> nowlist) {
		// TODO Auto-generated method stub
		if (nowlist.size() == nums.length) {
			res.add(new ArrayList<Integer>(nowlist));
		}
		for (int i = 0; i < nums.length; i++) {
			if (i > 0 && nums[i] == nums[i - 1]) {
				continue;
			}
			if (!nowlist.contains(nums[i])) {
				nowlist.add(nums[i]);
				fun(nums, nowlist);
				nowlist.remove(nowlist.size() - 1);
			}

		}
	}
}
