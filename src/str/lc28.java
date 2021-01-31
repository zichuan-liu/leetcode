package str;

public class lc28 {
	public int strStr(String haystack, String needle) {
		int m = haystack.length(), n = needle.length();
		if (n == 0)
			return 0;
		for (int i = 0; i <= m - n; i++) {
			for (int j = 0; j < n; j++) {
				if (haystack.charAt(i + j) != needle.charAt(j))
					break;
				if (j == n - 1)
					return i;
			}
		}
		return -1;
	}
}
