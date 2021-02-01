# include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int size1 = nums1.size();
		int size2 = nums2.size();
		vector<int> nums(size1+size2);
		int size = size1+ size2;
        //建立变量i1和i2分别表示遍历数组nums1和nums2的下标，i表示数组nums下标
        int i1 = 0, i2 = 0, i = 0;

        //循环直到i1和i2均遍历到数组末尾
        while (i1 < size1 || i2 < size2) {
            //nums1首元素大于nums2或i2已遍历到末尾
            if (i2 >= size2 || (i1 < size1 && nums1[i1] <= nums2[i2])) {  
                nums[i++] = nums1[i1++];
            }
            //nums2首元素大于nums1或i1已遍历到末尾
            else {
                nums[i++] = nums2[i2++];
            }
        }
		return (size1+size2) % 2 == 0 ? ((double)nums[size / 2 - 1] + (double)nums[size / 2]) / 2 : (double)nums[size/2];
    }
};

int main(){
	vector<int> num1 = {1,3,5,9};
		vector<int> num2 = {3,8,9};

	Solution().findMedianSortedArrays(num1,num2);
	return 0;
}
