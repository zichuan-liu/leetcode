package basic_study;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class STL_array {
	public static void main(String[] args) {
		List result2 = new ArrayList();
		result2.add("ssss");
		int[] nums = { 6, 5, 8, 3, 1, 8, 1, 8, 7 };
		Arrays.sort(nums); // O(nlogn)
		System.out.println(Arrays.toString(nums));

		result2.add(1);
	}
}
