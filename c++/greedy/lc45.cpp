class Solution {
public:
    int jump(vector<int>& nums) {
		int maxPos = 0,end=0, res=0;
		for(int i=0;i<nums.size();i++){
            maxPos = max(maxPos, i + nums[i]);
			if(end==i){
				end = maxPos;
				res++;
			}
		}
		return res;
    }
};
