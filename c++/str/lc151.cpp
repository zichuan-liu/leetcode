class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());


		int len = s.size();
		stack<char> stack;
		string res;
		for(int i=0;i<len;i++){
			char c = s[i];
			if(c==' '){
				if(!stack.empty()){
					while(!stack.empty()){
						res.push_back(stack.top());	
						stack.pop();
					}
					res.push_back(' ');
				}
			}else{
				stack.push(c);
			}
		}
					while(!stack.empty()){
						res.push_back(stack.top());	
						stack.pop();
					}
        if(res[res.size()-1]==' ') res = res.substr(0, res.size()-1);
	return		res;
		
    }
};
