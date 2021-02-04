#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		int divide(int dividend, int divisor) {
			int res = 0, flag=1;
            int flag2 = dividend;
            if(dividend==-2147483648&&divisor==-1) return 2147483647;
            if(dividend==-2147483648) {dividend+=1;}


			if(dividend>=0&&divisor<0) {
				flag=0;
				divisor = -divisor;
			} else if(dividend<0&&divisor>0) {
				flag=0;
				dividend = -dividend;
			} else if(dividend<0&&divisor<0) {

				dividend = -dividend;
				divisor = -divisor;
			}


			while(dividend>=divisor) {
					dividend-=divisor;
				res++;

			}
		if(flag==1)
			return res;
			else {
                if(flag2==-2147483648) return -res-1;
                return -res;
            }
			}
};s

int main() {
	return 0;
}
