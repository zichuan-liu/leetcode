package array;

import java.util.Arrays;

public class lc16 {
	public static int threeSumClosest(int[] nums, int target) {
		/**
		 * 暴力，O(n^3)
		 */
		Arrays.sort(nums); // O(nlogn)
		int left = 0, right = nums.length - 1, res = -1, sum = -1, detal = 1000000;
//		if (nums[left] > target) {
//			return nums[left] + nums[left + 1] + nums[left + 2];
//		} else if (nums[right] < target) {
//			return nums[right] + nums[right - 1] + nums[right - 2];
//		}
		while (left < right) {
			while (left < right) {
				for (int i = left + 1; i < right; i++) {
					sum = nums[left] + nums[right] + nums[i];
					System.out.println(nums[left] + "|||||" + nums[right] + "|||||" + nums[i] + "=" + sum);

					if (detal > Math.abs(sum - target)) {
						res = sum;
						detal = Math.abs(sum - target);
					}

				}
				--right;
			}
			right = nums.length - 1;
			++left;
		}

		return res;
	}

	public int threeSumClosest2(int[] nums, int target) {
		Arrays.sort(nums);
		int result = nums[0] + nums[1] + nums[2];
		for (int i = 0; i < nums.length - 2; i++) {
			int left = i + 1;
			int right = nums.length - 1;
			while (left != right) {
				int sum = nums[i] + nums[left] + nums[right];
				if (Math.abs(sum - target) < Math.abs(result - target))
					result = sum;
				if (sum > target) {
					right--;
				} else {
					left++;
				}
			}
		}
		return result;
	}
//
//	作者：已注销
//	链接：https://leetcode-cn.com/problems/3sum-closest/solution/dui-shuang-zhi-zhen-fa-jin-xing-yi-dian-you-hua-da/
//	来源：力扣（LeetCode）
//	著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

	public static void main(String[] args) {
		int nums[] = { 1, 2, 5, 10, 11 };

		int target = 12;
		System.out.println(threeSumClosest(nums, target));
	}
}
