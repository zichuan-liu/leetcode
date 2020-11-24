package array;

public class lc11 {
	public static int maxArea(int[] height) {
		int length = height.length;
		int i = 0, j = length - 1;
		int res = 0;
		int area = 0;
		while (i < j) {
			area = (j - i) * Math.min(height[i], height[j]);
			res = Math.max(area, res);
			if (height[i] < height[j])
				++i;
			else {
				--j;
			}
		}
		return res;
	}

	public static void main(String[] args) {
		int[] test = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
		System.out.println(maxArea(test));
	}
}
