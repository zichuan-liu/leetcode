class Solution {
	public:
		bool canJump(vector<int>& nums) {
			int max = nums.size();
			int index=0;
			for(int i=0; i<max; i++) {
				if(i<=index) {
					index = max(nums[i]+i,index);
					if(index>=max-1){
						return true;
					}	
				}
			}

			return false;

		}
};
