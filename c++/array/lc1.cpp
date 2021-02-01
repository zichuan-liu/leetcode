# include<vector>
# include<iostream>
# include<string>
using namespace std;

class Solution {
	public:
		vector<int> twoSum(vector<int>& nums, int target) {
			int n = nums.size();
			for (int i = 0; i < n; ++i) {
				for (int j = i + 1; j < n; ++j) {
					if (nums[i] + nums[j] == target) {
						cout<<i<<","<<j<<endl;
						return {i, j};
					}
				}
			}
			return {};
		}
};

int main() {
	Solution s; 
	vector<int>  test = {1,2,3,4};
	s.twoSum(test,3);
}
