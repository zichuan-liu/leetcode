package dp;

public class lc64 {
	public int minPathSum(int[][] grid) {
		/**
		 * dp[i][j] = min(dp[i-1][j], dp[i][j-1])+grid[i][j]
		 */
//		int res = 0;
		int rows = grid.length, columns = grid[0].length;
		int[][] dp = new int[rows][columns];
		dp[0][0] = grid[0][0];
		for (int i = 1; i < rows; i++) {
			dp[i][0] = dp[i - 1][0] + grid[i][0];
		}
		for (int i = 1; i < columns; i++) {
			dp[0][i] = dp[0][i - 1] + grid[0][i];
		}
		for (int i = 1; i < rows; i++) {
			for (int j = 1; j < columns; j++) {
				dp[i][j] = Math.min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
			}
		}
		return dp[rows - 1][columns - 1];
	}

	public static void main(String[] args) {

	}
}
