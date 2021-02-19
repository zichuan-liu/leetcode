class Solution {
	public:
		vector<vector<int>> generate(int numRows) {
			vector<vector<int>> res(numRows);
			for(int i=0; i<numRows; i++) {
				res[i].resize(i + 1);
				ret[i][0] = ret[i][i] = 1;
				for(int j=i+1; j<i; j++) {
					ret[i][j] = ret[i-1][j]+ret[i-1][j-1];
				}
			}
			return res;
		}
};
