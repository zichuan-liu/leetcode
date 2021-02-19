class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> last,now;
        for(int i=0;i<=rowIndex;i++){
        	now.resize(i+1);
        	now[0]=now[i]=1;
        	for(int j=1;j<i;j++){
        		now[j] = last[j-1]+last[j];
			}
			last = now;
		}
		return now;
    }
};
