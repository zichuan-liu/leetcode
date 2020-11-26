package array;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class lc18 {
	public static List<List<Integer>> fourSum(int[] nums, int target) {
		List<List<Integer>> res = new ArrayList<>();
		if (nums == null || nums.length <= 3) {
			return res;
		}
		Arrays.sort(nums); // 排序+双指针
		int len = nums.length;
		for (int i = 0; i < len; i++) {
			if (i - 1 >= 0 && nums[i] == nums[i - 1]) {
				continue;
			}
			for (int j = i + 1; j < len; j++) {
				if (j - 1 >= i + 1 && nums[j - 1] == nums[j]) {
					continue;
				}
				int tr = target - nums[i] - nums[j];
				int left = j + 1, right = len - 1;
				while (left < right) {
					if (nums[left] + nums[right] == tr) {
						List<Integer> tp = new ArrayList<>();
						tp.add(nums[i]);
						tp.add(nums[j]);
						tp.add(nums[left]);
						tp.add(nums[right]);
						res.add(tp);
						while (left < right && nums[left] == nums[++left])
							;
						while (left < right && nums[right] == nums[--right])
							;
					} else if (nums[left] + nums[right] > tr) {
						right--;
					} else {
						left++;
					}
				}
			}
		}
		return res;
	}

	public static void main(String[] args) {
		int test[] = { 1, 0, -1, 0, -2, 2 };
		List<List<Integer>> ans = fourSum(test, 0);
		System.out.println(ans.toString());
	}
}
