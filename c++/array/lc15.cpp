#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
	public:
		vector<vector<int>> threeSum(vector<int>& nums) {
			int len = nums.size();
			vector<vector<int>> res;
			if(len<3)	return res;
			sort(nums.begin(), nums.end());
			int target,x=0,y=len-1;
			for(int i=0; i<len; i++) {
				//ШЅжи
				if(i>0&&nums[i]==nums[i-1])	continue;
				target = nums[i];
				x=i+1;
				y=len-1;
				while(x<y) {
					
//					cout <<i <<" "<<x<<" "<<y<<endl;
					if(x>i+1&&nums[x]==nums[x-1]) {

						++x;
						continue;
					}
					if(y<len-1&&nums[y]==nums[y+1]) {
						--y;continue;
					}
					
					if(nums[x]+nums[y]==-target) {
						vector<int> solve({target,nums[x], nums[y]});
						for (int k = 0; k < 3; k++) {
							cout << solve[k];
						}
						cout << endl;
						res.push_back(solve);
												++x;

					} else if(nums[x]+nums[y]+target<0) {
						++x;
					} else if(nums[x]+nums[y]+target>0) {
						--y;
					}
				}
			}
			return res;
		}
};

int main() {
	vector<int> test({-4,-1,-1,0,1,2}); 
	Solution().threeSum(test);
	return 0;
}
