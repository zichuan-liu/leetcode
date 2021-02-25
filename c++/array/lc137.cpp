class Solution {
public:
    int singleNumber(vector<int>& nums) {
            int len = nums.size();
            if(len<1) return 0;
            sort(nums.begin(),nums.end());
            int num = nums[0];
            for(int i=1;i<len;i+=3){
                if(num==nums[i]){
                    num = nums[i+2];
                }else{
                    return num;
                }
            }
            return num;
    }
};
