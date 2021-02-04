class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        if(len==0||len==1)	return len;
		int now = 0;
        for(int i=1;i<n;i++){
        	if(nums[i]==nums[now]){
        		continue;
			}else{
				now++;
				nums[i]=nums[now];
			}
		}
		return now+1;
    }
};
