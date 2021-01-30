package backtracking;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class lc51 {
	public static List<List<String>> solveNQueens(int n) {
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

		return res;

	}

	private static void backtrack(int n, int k, char[][] queen, int[][] attack, List<List<String>> res) {
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
			System.out.println(Arrays.deepToString(attack) + "   " + k + "," + i);

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

				System.out.println("回溯：" + Arrays.deepToString(attack) + "   " + k + "," + i);

				queen[k][i] = '.';// 回溯
			}
		}

	}

	private static void put_attack(int x, int y, int[][] attack, int n) {
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
//		System.out.println(Arrays.deepToString(attack));
	}

	public static void main(String[] args) {
//		int[][] attack = new int[4][4];

//		put_attack(1, 1, attack, 4);
		solveNQueens(4);
	}
}
