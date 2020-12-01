package str;

import java.util.Arrays;

public class lc6 {
	public static String convert(String s, int numRows) {
		int len = s.length(), curr = 1, flag = 1;
		if (numRows == 1) {
			return s;
		}

		int dp[] = new int[len];
		for (int i = 0; i < len; i++) {
			dp[i] = curr;
			if (flag == 1)
				curr += 1;
			else
				curr -= 1;
			if (curr > numRows) {
				flag = 0;
				curr -= 2;
			} else if (curr < 1) {
				flag = 1;
				curr += 2;
			}

		}
		System.out.println(Arrays.toString(dp));

		String ss = "", temp = "";
		StringBuilder[] str = new StringBuilder[numRows];
		for (int i = 0; i < numRows; i++) {
			str[i] = new StringBuilder();
		}
		for (int i = 0; i < len; i++) {
			str[dp[i] - 1].append(s.charAt(i));
		}

		for (int i = 0; i < numRows; i++) {
			ss += str[i];
		}

		return ss;
	}

	public static void main(String[] args) {
		String teString = "LEETCODEISHIRING";
		int rows = 3;
		System.out.println(convert(teString, rows));
	}
}
