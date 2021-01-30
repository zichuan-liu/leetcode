package backtracking;

import java.util.ArrayList;
import java.util.List;

public class lc52 {

	public int totalNQueens(int n) {
		List<List<String>> res = new ArrayList<List<String>>();
		int[][] attack = new int[n][n];
		char[][] queen = new char[n][n];

		char[] str = new char[n];// 字符串数组

		// 初始化attack和queen
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				attack[i][j] = 0;
				queen[i][j] = '.';

			}
		}

		// 回溯开始
		backtrack(n, 0, queen, attack, res);

		return res.size();

	}

	private void backtrack(int n, int k, char[][] queen, int[][] attack, List<List<String>> res) {
		// TODO Auto-generated method stub
		if (k == n) {
			List<String> qu = new ArrayList<>();
			for (int i = 0; i < n; i++) {
				String s = new String(queen[i]);
				qu.add(s);
			}
			res.add(qu);
			return;
		}

		for (int i = 0; i < n; i++) {

			if (attack[k][i] == 0) { // 如果可以放
				queen[k][i] = 'Q';
				// 改变attack
				int[][] temp_attack = new int[n][n];
				for (int j = 0; j < n; j++) {
					for (int q = 0; q < n; q++) {
						temp_attack[j][q] = attack[j][q];
					}
				}

				put_attack(k, i, attack, n);
				backtrack(n, k + 1, queen, attack, res);

				for (int j = 0; j < n; j++) {
					for (int q = 0; q < n; q++) {
						attack[j][q] = temp_attack[j][q];
					}
				}

				queen[k][i] = '.';// 回溯
			}
		}

	}

	private void put_attack(int x, int y, int[][] attack, int n) {
		// TODO Auto-generated method stub
		attack[x][y] = 1;

		for (int i = 0; i < n; i++) {
			attack[x][i] = 1; // 横着
			attack[i][y] = 1; // 竖着
			if (x - i >= 0 && y - i >= 0) {
				attack[x - i][y - i] = 1;
			}
			if (x + i < n && y + i < n) {
				attack[x + i][y + i] = 1;
			}
			if (x + i < n && y - i >= 0) {
				attack[x + i][y - i] = 1;
			}
			if (x - i >= 0 && y + i < n) {
				attack[x - i][y + i] = 1;
			}
		}
//	System.out.println(Arrays.deepToString(attack));
	}
}
