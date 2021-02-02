#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		string longestCommonPrefix(vector<string>& strs) {
			int num = strs.size(),j=0;
			if(num==0) return "";
			string res = "";
			string one = strs[0];
			auto minlen = one.size();
				for(int i=1; i<num; i++) {
					if(strs[i].size()<minlen){
						minlen = strs[i].size();
					}
				}
			
			
			while(j<minlen) {
				for(int i=1; i<num; i++) 
					if(strs[i][j]!=one[j]) 
						return res;
				res+=one[j];
				j++;
			}
			return res;
		}
};
