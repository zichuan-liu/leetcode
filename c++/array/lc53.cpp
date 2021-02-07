class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    	if(nums==NULL) return -INT_MAX;
		int max=nums[0],curr=nums[0];
		for(int i=1;i<nums.size();i++){
			if(curr>0){
				curr+=nums[i];
			}else{
				curr=nums[i];
			}
			max= max(max, curr);
		}
		return max;
    }
};
