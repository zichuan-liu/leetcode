class Solution {
	public:
		int numTrees(int n) {
			if(n) return backtack(1,n);
			else return 0;
		}
		unordered_map<int, int> m;


		int backtack(int start, int end) {
			if(start>end) return 1;
			int res = 0;
			for(int i=start; i<=end; i++) {

				int lft = m[i - 1 - start] ? m[i - 1 - start] : backtack(start, i - 1);
				int rgt = m[end - i - 1] ? m[end - i - 1] : backtack(i + 1, end);

				res += lft*rgt;
			}
			m[end-start] = res;
			return res;
		}
};
