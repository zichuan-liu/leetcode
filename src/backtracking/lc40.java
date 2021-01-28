package backtracking;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class lc40 {
	public List<List<Integer>> combinationSum(int[] candidates, int target) {
		List<List<Integer>> ress = new ArrayList<>();
		int sum = 0;
		Arrays.sort(candidates);

		backtrack(ress, candidates, target, sum, new ArrayList<Integer>(), 0);
		return ress;
	}

	private void backtrack(List<List<Integer>> ress, int[] candidates, int target, int sum, ArrayList<Integer> res,
			int index) {
		// TODO Auto-generated method stub
		if (sum > target) {
			return;
		}
		if (sum == target) {
			ress.add(new ArrayList<>(res));
		} else {
			for (int i = index; i < candidates.length; i++) {
				if (i > index && candidates[i] == candidates[i - 1])
					continue;
				res.add(candidates[i]);
				backtrack(ress, candidates, target, sum + candidates[i], res, i + 1);
				res.remove(res.size() - 1);
			}
		}

	}
}
