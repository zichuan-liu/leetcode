package backtracking;

import java.util.ArrayList;
import java.util.List;

public class lc22 {
	public List<String> generateParenthesis(int n) {
		List<String> reStrings = new ArrayList<String>();
		String str = "";
		backtrack(reStrings, n, str, 0, 0);
		return reStrings;
	}

	private void backtrack(List<String> reStrings, int n, String str, int c1, int c2) {
		// TODO Auto-generated method stub
		if (c1 > n || c2 > n) {
			return;
		}
		if (c1 == n && c2 == n) {
			reStrings.add(str);
		}
		if (c1 >= c2) {
			backtrack(reStrings, n, str + "(", c1 + 1, c2);
			backtrack(reStrings, n, str + ")", c1, c2 + 1);
		}
	}
}
