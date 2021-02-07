class Solution {
	public:
		vector<vector<int>> generateMatrix(int n) {
			vector<vector<int>> ans(n,vector<int>(n,0));
			if(n==0) return ans;
			int u=0;       //上边界
			int d=n-1; //下边界
			int l=0;           //左边界
			int r=n-1;//右边界
			int c=1;
			int j; 
			while(c<=n*n) {
				for(j=l; j<=r; j++) { //遍历上边
					ans[u][j] = c++;
				}
				u++;
					
				for(j=u; j<=d; j++) { //遍历右边
					ans[j][r] = c++;
				}
				r--;
				for(j=r; j>=l; j--) { //遍历下边
					ans[d][j] = c++;
				}
				d--;
				for(j=d; j>=u; j++) { //遍历左边
					ans[j][l] = c++;
				}
				l++;
			}
			return ans;
		}
};
