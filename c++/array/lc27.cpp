class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
		int ans = 0,num;
		for (int i=0;i<nums.size();i++) {
            num = nums[i];
			if (num != val) {
				nums[ans] = num;
				ans++;
			}
		}
		return ans;
    }
};
