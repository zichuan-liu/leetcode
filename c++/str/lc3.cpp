#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //定义两个游标,还有长度,与结果,均初始化为0
        int start(0),end(0),length(0),result(0);
        //只要end<字符串大小
        while(end<s.size())
        {
            //该注释错误		//暂存首个字符char,
            //其实应该是暂存end所指向的那个值,到时候会跟index所指向的值比较
            char tempChar=s[end];
            //定义index,它只用于改变start的指向一般为index+1
            //因为index所处的与end的值相等,则没有统计的必要了
            //for循环只用来判断是否相等
            //
            for(int index=start;index<end;index++)
            {
                //判断是否出现重复字符串
                if(tempChar==s[index])
                {
                    //start++;//这是错误的哦,没有优化呢
                    //如果出现,则将start跳过重复字符index指向的下一字符
                    start=index+1;
                    //保存长度
                    length=end-start;
                    /////////
                    //千万注意,如果相等,则该判断应该结束了
                    break;
                }
            }
            //此时,end向后移动,每一一次,长度+1
            end++;
            length++;
            //返回更新后的length,如果更大,则为它
            result=max(result,length);
        }
        return result;
    }
};

int main(){
	Solution s;
	int len  = s.lengthOfLongestSubstring("pwwkew");
	cout<<len;
	return 0;
}
