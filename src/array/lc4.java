package array;

public class lc4 {
	public static double findMedianSortedArrays(int[] nums1, int[] nums2) {
		int n1 = nums1.length;
		int n2 = nums2.length;
		int n = n1 + n2;
		int mergeVector[] = new int[n];
		int index = 0;
		int index1 = 0;
		int index2 = 0;

		while (index <= n / 2 && index1 < n1 && index2 < n2) {
			if (nums1[index1] < nums2[index2]) {
				mergeVector[index] = nums1[index1];
				index1++;
			} else {
				mergeVector[index] = nums2[index2];
				index2++;
			}
			index++;
		}
		while (index <= n / 2 && index1 < n1) {
			mergeVector[index] = nums1[index1];
			index1++;
			index++;
		}

		while (index <= n / 2 && index2 < n2) {
			mergeVector[index] = nums2[index2];
			index2++;
			index++;
		}

		if (n % 2 == 0) {
			return ((double) (mergeVector[n / 2] + mergeVector[n / 2 - 1])) / 2;
		} else {
			return mergeVector[n / 2];
		}

	}

	public static void main(String[] args) {
		int x1[] = { 1, 3 }, x2[] = { 2 };
		double res = findMedianSortedArrays(x1, x2);
		System.out.println(res);
	}
}
