#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
#define max(a,b) ( ((a)>(b)) ? (a):(b) )
#define min(a,b) ( ((a)>(b)) ? (b):(a) )

class Solution {
public:
	public:
		string multiply(string num1, string num2) {
			if (num1 == "0" || num2 == "0") {
				return "0";
			}
			string ans = "0";
			int m = num1.size(), n = num2.size();
			for (int i = 0; i < m; i++) {
				char curr_char = num1[m-1-i];
				cout<<num2<<"  "<<curr_char<<endl;
				string curr= multiplyStringChar(num2, curr_char);
				string curr_zero = "";
				for(int j=0;j<i;j++){
					curr_zero+="0";
				}
				curr+=curr_zero;
//				cout<<curr<<endl;
				ans = addStrings(ans, curr);
			}
            return ans;
		}

		string addStrings(string num1, string num2) {
			int i = num1.length() - 1, j = num2.length() - 1, add = 0;
			string ans = "";
			int x,y, result;
			while (i >= 0 || j >= 0 || add != 0) {
				x = i >= 0 ? num1[i] - '0' : 0;
				y = j >= 0 ? num2[j] - '0' : 0;
				result = x + y + add;
				ans.push_back('0' + result % 10);
				add = result / 10;
				i -= 1;
				j -= 1;
			}
			// 计算完以后的答案需要翻转过来
			reverse(ans.begin(), ans.end());
			return ans;
		}

		string multiplyStringChar(string num1, char cNum) {
			string ans = "0";

			if(cNum == '1') return num1;
			if(cNum == '0') return ans;
			int len = cNum-'0';
			for(int i=0; i<len; i++) {
				ans = addStrings(ans, num1);
			}
			return ans;
		}

};

int main() {
	Solution().multiply("567","1234");
}
