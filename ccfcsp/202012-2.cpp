#include<iostream>
#include<algorithm>
using namespace std;
 
typedef struct Node{
	int theta;
	int result;
}Node;
 
bool cmp(Node a,Node b){
	return a.theta<b.theta;
}
 
int main(){
	int m;
	Node node[100005];
	int flag0[100005]={0}; //记录小于每个位置点阈值的result=0的个数 
	int flag1[100005]={0}; //记录大于等于每个位置点阈值的result=1的个数 
	
	/*--输入--*/ 
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>node[i].theta>>node[i].result;
	}
	sort(node,node+m,cmp); //输入后排序 
	
	int i=0,j=1;
	int temp0=0,temp1=0;
	/*--统计小于每个阈值的result=0的个数--*/ 
	while(j<m){
		if(node[j].theta==node[i].theta){
			j++;
			continue;
		}
		int temp=0;
		while(i<j){
			if(node[i].result==0)temp++;
			flag0[i]=temp0;
			i++;
		}
		temp0+=temp;
	}
	while(i<j){
		flag0[i]=temp0;
		i++;
	}
	/*--以上统计小于每个阈值的result=0的个数--*/ 
	/*--以下统计大于等于每个阈值的result=1的个数--*/ 
	for(int i=0;i<m;i++){
		if(node[m-1-i].result==1){
			temp1++;
		}
		flag1[m-1-i]=temp1;
	}
	
	//根据flag0和flag1计算每个阈值的准确个数，输出最大的对应的阈值 
	int ans=0,num=0;
	for(int i=0;i<m;i++){
		if(flag0[i]+flag1[i]>=num){
			num=flag0[i]+flag1[i];
			ans=node[i].theta;
		}
	}
	cout<<ans;
}
