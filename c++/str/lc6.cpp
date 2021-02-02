#include<bits/stdc++.h>

using namespace std;


class Solution {
	public:
		string convert(string s, int numRows) {
			if(numRows==1) {
				return s;
			}
			string res = "";
			int interval = 2*(numRows-1), temp = 1, j=0, flag = 0;

			for(int i=1; i<=numRows; i++) { //第几行
				temp = (numRows-i)*2;
				j=i-1;
				flag = 0;
				if((i!=1) && (i!=numRows)) {
					while(j<s.length()) {
						res += s[j];

						cout<<j<<"  第"<<i<<endl;

						if(!flag)
							j+=temp;
						else
							j=j-temp+interval;

						flag=!flag;
					}
				} else {

					while(j<s.length()) {
						res += s[j];
						j+=interval;
					}
				}
			}
			return res;
		}
};

int main() {
	string res = Solution().convert("PAYPALISHIRING",4);

	cout<<res;
	return 0;
}
