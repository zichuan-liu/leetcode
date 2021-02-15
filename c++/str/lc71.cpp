#include<string>
#include<iostream>
using namespace std;
class Solution {
	public:
		string simplifyPath(string path) {
			int len = path.size();
			string res ="";
			int flag = 0;
			if(path[len-1]=='/'&&len-2>=0&&path[len-2]=='.') return "/";
			for(int i=len-1; i>=0; i--) {
				if(path[i]!='/'&&path[i]!='.') 				 flag=1;

				if(flag == 0 && path[i]=='/') {
					continue;
				}
				if(i-1>=0) {
					if(path[i]=='/'&&path[i-1]=='/')  continue;

					if(path[i]=='.'&&path[i-1]=='.') break;
//                				if(path[i]=='/'&&path[i-1]=='.') {
//                                    if(i-2>=0&&path[i-2]!='.') continue;
//                                }
				}


				if(path[i]=='.') continue;
				res.push_back(path[i]);

			}
			reverse(res.begin(),res.end());
			return 		res;
		}
};
int main() {

}
