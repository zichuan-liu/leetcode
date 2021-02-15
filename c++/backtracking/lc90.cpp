class Solution {
	public:
		vector<vector<int>> subsetsWithDup(vector<int>& nums) {
			vector<vector<int>> res;
			vector<int> temp;
			sort(nums);
			backtrack(res, nums, 0, temp);

			return res;
		}

		void backtrack(vector<vector<int>>& res, vector<int>& nums, int index, vector<int>& temp) {
			res.push_back(temp);

			for(int i=index; i<nums.size(); i++) {
				//和上个数字相等就跳过
				if (i > index && nums[i] == nums[i - 1]) {
					continue;
				}
				temp.push_back(nums[i]);
				backtrack(res,nums,i+1,temp);
				temp.pop_back();
			}
		}
};
