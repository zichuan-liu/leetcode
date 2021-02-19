/**P4779：Dijkstra+堆优化+前向星读取**/
#include<queue>
#include<iostream>
#include<cstdio>
#include<vector>
#include<utility>
#define mp(x,y) make_pair(x,y)
using namespace std;

const int MaxN = 100010, MaxM = 500010;
priority_queue<pair<int, int> > q;//第一个是路径的长度，第二个是节点的编号
//优先队列为了排叙 取出最后一个最小 

int n,m,s;
	
	
//连边的定义
struct edge {
	int next, to, w;
} edge[MaxM];

//链式前向星
int head[MaxN], cnt;//head为邻接表的节点头，cnt是全局指针

void addEdge(int u, int v, int w) {
	edge[++cnt].next = head[u];
	edge[cnt].w = w;
	edge[cnt].to = v;
	head[u] = cnt;
}


bool vis[MaxN];	//是否走过该节点
int ans[MaxN];	//到该节点的最小路径


void dijkstra() {
	for(int i=1; i<=n; i++) {//边设为无穷大 
		ans[i]=2147483647;//0x3f 
	}

	ans[s] = 0;
	q.push(mp(0,s));
	while(!q.empty()){
		int u=q.top().second;//当前节点 
		q.pop();//不要u
		
		if(vis[u])	//			如果来过，跳出循环 
			continue;
		vis[u] = 1;
		for(int i=head[u]; i;i=edge[i].next){
			int v=edge[i].to,w=edge[i].w;
			if(ans[v]>ans[u]+w) {
				ans[v] = ans[u]+w;
				q.push(mp(-ans[v],v));//负号为排序需要，我们要最后一个 
			}
		} 
	}
	
}


int main() {

	cin>>n>>m>>s;		//给定一个 n 个点，m 条有向边的带非负权图，请你计算从 s 出发，到每个点的距离。
	int u,v,w;
	for(int i=1; i<=n; i++) {
		cin>>u>>v>>w;
		addEdge(u,v,w);
	}

//	//遍历第一个节点的临边
//	for(int i=head[1];i!=0;i=edge[i].next){
//		cout<<edge[i].to<<" ";
//	}
	dijkstra();
	
	 for(int i=1;i<=n;i++){
	 	cout<<ans[i]<<' ';
	 }


	return 0;
}
