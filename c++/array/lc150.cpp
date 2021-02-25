#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		int evalRPN(vector<string>& tokens) {
			stack<int> s;
			int len = tokens.size(),i=1;
			if(len==0) return 0;
			s.push(stoi(tokens[0]));
			while(!s.empty()&&i!=len) {
				string token = tokens[i];
                                // cout<<s.top()<<endl;
				if(token=="+") {
					int x = s.top();
					s.pop();
					int y = s.top();
					s.pop();
					s.push(x+y);
				} else if(token=="-") {
					int x = s.top();
					s.pop();
					int y = s.top();
					s.pop();
					s.push(y-x);
				} else if(token=="/") {
					int x = s.top();
					s.pop();
					int y = s.top();
					s.pop();
					s.push(y/x);
				} else if(token=="*") {
					int x = s.top();
					s.pop();
					int y = s.top();
					s.pop();
					s.push(y*x);
				} else{
					s.push(stoi(tokens[i]));
				}
				i++;
			}
			return s.top();
		}
};

int main() {

	return 0;
}
