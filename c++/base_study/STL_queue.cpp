#include<iostream>
#include<queue>
#include<stdlib.h>
using namespace std;
class T
{
public:
	int x,y,z;
	T(int a,int b,int c):x(a),y(b),z(c)
	{
	}
};
bool operator<(const T&t1,const T&t2)
{
	return t1.z<t2.z;
}
int main(void)
{
	priority_queue<T>q;
	q.push(T(4,4,3));
	q.push(T(2,2,5));
	q.push(T(1,5,4));
	q.push(T(3,3,6));
	while(!q.empty())
	{
		T t=q.top();
		q.pop();
		cout<<t.x<<" "<<t.y<<" "<<t.z<<endl;
	}
	system("Pause");
	return 1;
	
	
//q.empty()               如果队列为空返回true，否则返回false
//q.size()                返回队列中元素的个数
//q.pop()                 删除队列首元素但不返回其值
//q.front()               返回队首元素的值，但不删除该元素
//q.push()                在队尾压入新元素
//q.back()                返回队列尾元素的值，但不删除该元素
}
