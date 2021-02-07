#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        if(!matrix.size()||!matrix[0].size()) return ans;
        int u=0;       //上边界
        int d=matrix.size()-1; //下边界
        int l=0;           //左边界
        int r=matrix[0].size()-1;//右边界
        int i,j;
        while(true){   
            for(j=l;j<=r;j++){ //遍历上边
                ans.push_back(matrix[u][j]);
            }
            if(++u>d) break;     //判断上下边界中间还有没有未遍历的元素
            for(i=u;i<=d;i++){  //遍历右边
            	ans.push_back(matrix[i][r]);
			}
			if(--r<l) break;    //判断左右边界中间还有没有未遍历的元素
			for(j=r;j>=l;j--){//遍历下边
				ans.push_back(matrix[d][j]);
			}
			if(--d<u) break;  //判断上下边界中间还有没有未遍历的元素
			for(i=d;i>=u;i--){//遍历左边
			    ans.push_back(matrix[i][l]);	
			}
			if(++l>r) break;//判断左右边界中间还有没有未遍历的元素
			
        }
        return ans;
		}
};


int main(){
	
	return 0;
}
