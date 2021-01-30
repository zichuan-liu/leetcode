package backtracking;

import java.util.ArrayList;
import java.util.List;

public class lc77 {
	public List<List<Integer>> combine(int n, int k) {
		List<List<Integer>> res = new ArrayList<List<Integer>>();

		backtrack(n, k, res, new ArrayList<>(), 1);
		return res;
	}

	private void backtrack(int n, int k, List<List<Integer>> res, ArrayList arrayList, int index) {
		// TODO Auto-generated method stub
		if (arrayList.size() == k) {
			res.add(new ArrayList<Integer>(arrayList));
		}
		for (int i = index; i <= n; i++) {

			arrayList.add(i);
			backtrack(n, k, res, arrayList, i + 1);
			arrayList.remove(arrayList.size() - 1);
		}
	}

}
