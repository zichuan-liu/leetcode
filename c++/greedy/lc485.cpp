class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
		if(!nums.size()) return 0;
		int maxx = 0, now=nums[0], res=0;
		for(int i=0;i<nums.size();i++){
			if(nums[i]==1) maxx++;
			else maxx=0;
			res = max(maxx, res);
		}
		return res;
    }
};
