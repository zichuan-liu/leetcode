class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
		int flag=0, pre=0;
		for(int i;i<nums.size();i++){
			if(i>0&&nums[i-1]==nums[i]) flag++;
			else flag=0;
			if(flag>1) pre++;
			nums[i-pre] = nums[i];
		}
		return nums.size()-pre;
    }
};
