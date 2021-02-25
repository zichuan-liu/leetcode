class Solution {
	public:
		int len;
		vector<vector<string>> partition(string s) {
			len = s.size();
			if(len<1) return {{}};

			vector<vector<string>> res;
			vector<string> ans;

			backtrack(s, res, ans, 0);

			return res;
		}

		void backtrack(string s, vector<vector<string>> & res, vector<string>&  ans, int index) {
			if(index==len) res.push_back(ans);
			
			for(int i=index; i<len; i++) {
					if(!isHui(s,index,i)) continue;

                    // cout<<s.substr(index,i)<<endl;
					ans.push_back(s.substr(index,i-index+1));
					backtrack(s,res,ans, i+1);
					ans.pop_back();
			}

		}

		bool isHui(string s, int l, int r) {

			while(l<r) {
				if(s[l]!=s[r]) {
					return false;
				}
                l++;
                r--;
			}
			return true;
		}
};
