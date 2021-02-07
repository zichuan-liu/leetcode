class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() <=1){
            return intervals;
        }

        vector<vector<int>> haha;
        int i = 0;
        sort(intervals.begin(), intervals.end());

        for(int j = 1; j < intervals.size(); j++){
     
            if(intervals[i][1] >= intervals[j][0] ){
                if(intervals[i][1] < intervals[j][1]){
                    intervals[i][1] = intervals[j][1];
                }
             
            }else{
                haha.push_back(intervals[i]);
                i = j;
            }
            
        }

     
        haha.push_back(intervals[i]);

        return haha;
    }
};

