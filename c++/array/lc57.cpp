class Solution {
	public:
		vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
			vector<vector<int>> res;
			intervals.push_back(newInterval);
			sort(intervals.begin(), intervals.end());

			int i = 0;

			for(int j = 1; j < intervals.size(); j++) {
				if(intervals[i][1] >= intervals[j][0] ) {
					if(intervals[i][1]<intervals[j][1]){
						intervals[i][1] = intervals[j][1];
					}
				}else{
					res.push_back(intervals[i]);
					i=j;
				}
			}
			            return res;

		}
};
