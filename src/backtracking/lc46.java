package backtracking;

import java.util.ArrayList;
import java.util.List;

public class lc46 {
	List<List<Integer>> res = new ArrayList<>();

	public List<List<Integer>> permute(int[] nums) {
		fun(nums, new ArrayList<Integer>(), 0);

		return res;
	}

	private void fun(int[] nums, ArrayList<Integer> nowlist, int index) {
		// TODO Auto-generated method stub
		if (nowlist.size() == nums.length) {
			res.add(new ArrayList<Integer>(nowlist));
		}
		for (int i = 1; i <= nums.length; i++) {
			if (!nowlist.contains(i)) {
				nowlist.add(i);
				fun(nums, nowlist, i + 1);
				nowlist.remove(nowlist.size() - 1);
			}

		}
	}
}
