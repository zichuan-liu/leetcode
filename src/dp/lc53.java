package dp;

public class lc53 {
	public int maxSubArray(int[] nums) {
		/**
		 * dp
		 */
		int res = nums[0], sum = 0;
		for (int i : nums) {
			sum = Math.max(sum + i, i);
			res = Math.max(res, sum);
		}
		return res;
	}

	public int maxSubArray2(int[] nums) {
		return 0;
		/**
		 * 分治
		 */
//		public:
//		    struct Status {
//		        int lSum, rSum, mSum, iSum;
//		    };
//
//		    Status pushUp(Status l, Status r) {
//		        int iSum = l.iSum + r.iSum;
//		        int lSum = max(l.lSum, l.iSum + r.lSum);
//		        int rSum = max(r.rSum, r.iSum + l.rSum);
//		        int mSum = max(max(l.mSum, r.mSum), l.rSum + r.lSum);
//		        return (Status) {lSum, rSum, mSum, iSum};
//		    };
//
//		    Status get(vector<int> &a, int l, int r) {
//		        if (l == r) {
//		            return (Status) {a[l], a[l], a[l], a[l]};
//		        }
//		        int m = (l + r) >> 1;
//		        Status lSub = get(a, l, m);
//		        Status rSub = get(a, m + 1, r);
//		        return pushUp(lSub, rSub);
//		    }
//
//		    int maxSubArray(vector<int>& nums) {
//		        return get(nums, 0, nums.size() - 1).mSum;
//		    }
//
//		作者：LeetCode-Solution
//		链接：https://leetcode-cn.com/problems/maximum-subarray/solution/zui-da-zi-xu-he-by-leetcode-solution/
//		来源：力扣（LeetCode）
//		著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
	}

	public static void main(String[] args) {

	}
}
