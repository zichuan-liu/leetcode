#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
		int i=0,j=height.size()-1;
		int res = 0,h=0,x=0;
		while(i<j){
			x=j-i;
			h=min(height[i],height[j]);
			res = max(x*h, res);
			if(height[i]<height[j])i++;
			else j--;
		}
		
        return res;
    }
};
