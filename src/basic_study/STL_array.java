package basic_study;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class STL_array {
	public static void main(String[] args) {
		List result2 = new ArrayList();
		result2.add("ssss");
		int[] nums = { 6, 5, 8, 3, 1, 8, 1, 8, 7 };
		int numsss[][] = { { 1, 2, 3 }, { 4, 5, 6 } };

		Arrays.sort(nums); // O(nlogn)
		System.out.println(Arrays.toString(nums));
		System.out.println(Arrays.deepToString(numsss));// 打印二维数组
		result2.add(1);
	}
}
