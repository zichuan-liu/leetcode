class Solution {
	public:
		int lengthOfLastWord(string s) {
			int last=0;
			int now=0;
			bool flag = false;
			if(s==" ") return 0;
			for(int i=0; i<s.size(); i++) {
				if(s[i]==' ') {
					flag=true;
				} else {
					if(flag) {
						last = i;
						flag=false;
					}
					now=i;
				}
			}

			return now-last;
		}
};
