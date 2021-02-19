#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	int w,s;
	int res =0;
	for(int i=0;i<n;i++){
		 scanf("%d%d", &w,&s);
		 res += w*s;
	}
	cout<<max(res,0)<<endl;
	return 0;
}
