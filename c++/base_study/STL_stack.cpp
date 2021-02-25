//c++ stl栈stack的头文件为: 
#include <stack> 
//c++ stl栈stack的成员函数介绍
//
//操作 比较和分配堆栈
//
//empty() 堆栈为空则返回真
//
//pop() 移除栈顶元素
//
//push() 在栈顶增加元素
//
//size() 返回栈中元素数目
//
//top() 返回栈顶元素
//
using namespace std;  
int main(void)  
{  
    stack<double>s;//定义一个栈  
    for(int i=0;i<10;i++)  
        s.push(i);  
    while(!s.empty())  
    {  
        printf("%lf\n",s.top());  
        s.pop();  
    }  
    cout<<"栈内的元素的个数为："<<s.size()<<endl;  
    return 0;  
}
