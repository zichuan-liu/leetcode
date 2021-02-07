#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		int index = 0;
		string ans;
		string getPermutation(int n, int k) {
			string res;
			vector<bool> vec(n, false);
			backtrace(k, res, vec, n);
			cout<<ans<<endl;
			return ans;
		}

		void backtrace(int k, string& res, vector<bool>& vec,int n) {
			if(index==k) return;
			if(res.size()==n) {
				++index;
				if(index==k) ans=res;
				return;
			}

			for(int i=1; i<=n; i++) {
				if(!vec[i-1]){
					vec[i-1] = true;
					res+=i+'0';
					backtrace(k,res, vec,n);
					res.pop_back();
					vec[i-1] = false;

				}
				
			}

		}
};

int main() {
	Solution().getPermutation(3,3);
	return 0;
}
