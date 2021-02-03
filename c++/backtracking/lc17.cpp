#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		vector<string> letterCombinations(string digits) {
			vector<string> solves;
			if(digits.empty())	return solves;

			unordered_map<char,string> mymap = {
				{'2', "abc"},
				{'3', "def"},
				{'4', "ghi"},
				{'5', "jkl"},
				{'6', "mno"},
				{'7', "pqrs"},
				{'8', "tuv"},
				{'9', "wxyz"}
			};
			string res;
			backtrack(solves,res,digits,mymap, 0);
			return solves;
		}

		void backtrack(vector<string>& solves, string res, string digits, unordered_map<char,string>& mymap, int index) {
			if(digits.length()==index)	{
				solves.push_back(res);
				return;
			}
			char digit = digits[index];
			string letters = mymap.at(digit);
			for(int i=0; i<letters.length(); i++) {
				res.push_back(letters[i]);
				backtrack(solves, res, digits, mymap, index+1);
				res.pop_back();
			}
		}
};
