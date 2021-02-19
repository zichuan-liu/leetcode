#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;


bool vis[1000000];	//是否走过该节点
long long ans[1000000];	//到该节点的最小路径

//图的定义
struct edge {
	int next;
	int to;
	int w;
} edge[1000000];

/**链式前向星**/
int head[1000000];//head[i]为i点的第一条边
int cnt=0;//指针
void addedge(int u,int v,int w) { //起点，终点，权值
	edge[++cnt].next=head[u];//更新cnt
	edge[cnt].to=v;
	edge[cnt].w=w;
	head[u]=cnt;
}


int main() {
	int m,n,s;
	cin>>m>>n>>s;	//个数、有向边的个数、出发点的编号。
	for(int i=1; i<=n; i++) {
		ans[i]=2147483647;
	}
	ans[s]=0;	//初始节点的最小路径为0

	for(int i=1; i<=n; i++) {//链式前向星
		int a,b,c;
		cin>>a>>b>>c;
		addedge(a,b,c);
	}

	//遍历图：在遍历以x为起点的所有边时，只需要这样就行： 	for(int i=head[x];i!=0;i=edge[i].next)

	/**Dijkstra**/
	int pos=s;	//当前位置
	while(vis[pos]==0) {
		long long minn=2147483647;
		vis[pos]=1;	//pos节点访问过

		//遍历图的第pos个节点
		for(int i=head[pos]; i!=0; i=edge[i].next) {
			if(!vis[edge[i].to]&&ans[edge[i].to]>ans[pos]+edge[i].w) { //如果当前节点走向edge[i].to的节点没被访问，并且权重大于它
				ans[edge[i].to]=ans[pos]+edge[i].w;	//让权重等于它
			}
		}
		for(int i=1; i<=m; i++) {
			if(ans[i]<minn&&vis[i]==0) {
				minn=ans[i];
				pos=i;
			}
		}
	}
	
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<' ';
	}
	
	
	return 0;
}


/**Dijkstra
	1.定义ans[100000]，ans[i]代表到达i点的最小花费

	2.定义bool数组visit，代表是否来过这里， ans[起点]=0,其余的赋值为inf

	注意：这里的访问过，是指“以这个点为中心计算过”，而不是ans值被更新过

	3.定义一个curr变量，visit[current]=1（访问过），代表现在的位置，初始值为起点。

	4. 列举所有与curr相联通的的点，将这些点(i)的ans值更新：

	ans[i]=min(ans[i],ans[curr]+ans[i]=min(ans[i],ans[curr]+到这些点需要的花费 ))

	5. 列举所有没有过的的点，找到ans值最小的点，赋值给curr，visit[current]=1（访问过）

	6 所有点都访问过（visit[i]都==1），程序结束。此时，ans[i]代表从起点到i的最短路径
	伪代码：
	bool vis[1000000];//是否访问过
	int ans[1000000];
	int curr=起点;
	memset(ans,0x7fffffff,sizeof(ans))
	while(vis[curr]==0)
	{
	vis[curr]=1;
	for(int i;列举所有curr连通的点）
	{
		ans[i]=min(ans[i],ans[curr]+k)//k代表从curr点到i点的最短路
	}
	int minn=2147483647;
	for(int i=1;i<=m;i++)//列举所有点
	{
		if(vis[i]==0&&ans[i]<minn)//没访问过且小
	    {
	    	minn=ans[i];//更新最小值
	        curr=i;//更新下一个点
	    }
	}
	}**/
