package array;

import java.util.Arrays;

public class lc34 {
	public static int[] searchRange(int[] nums, int target) {
		int[] res = { -1, -1 };
		int len = nums.length;
		int now = (len - 1) / 2;
		while (now >= 0 && now < len) {
			System.out.println(now);
			if (target == nums[now]) {
				if (now == 0 || target != nums[now - 1]) {// 第一个就是now
					res[0] = now;
					res[1] = now;
					for (int i = now + 1; i < len; i++) {
						if (target == nums[i]) {
							res[1] = i;
						}
					}
					return res;
				} else {
					now = now - 1;
					continue;
				}
			} else if (target > nums[now]) {
				now = (now + len - 1) / 2 + 1;
			} else {
				len = now;
				now = (now + 1) / 2 - 1;
			}

		}

		return res;
	}

	public static void main(String[] args) {
		int nums[] = { 1 };
		int target = 1;
		int res[] = searchRange(nums, target);
		System.out.println(Arrays.toString(res));
	}
}
