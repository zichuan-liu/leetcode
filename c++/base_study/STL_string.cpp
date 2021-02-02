#include<bits/stdc++.h>
#include<string>
using namespace std;


int main() {
	// 构造函数
	string str1="abcd";
	string str2("abcd");
	string str3=(str2,1,3);//str3="bcd"

	//操作符 ，+ []
	string str1="abcd";
	string str2="defg";
	string str3=str1;
	string str4=str1+str2;
	char tempChar = str1[1];

	//长度
	string str="abcd";
	cout<<str.length(); //4
	cout<<str.size();

	//比较
	string str1="this is a nice day!";
	string str2="nice";
	string str3="it is nice!";
	char s[]="nice";
	cout<<str1.compare(str2)<<endl;   //1
	cout<<str2.compare(s)<<endl;       //0
	cout<<str1.compare(10,4,str2)<<endl;  //0
	cout<<str1.compare(10,4,str3,6,4);    //0

	//复制
	string str1="this is a nice day!";
	char str2[20];
	str1.copy(str2,4,10);
	//输出
	for(int i=0; i<4; i++) {
		cout<<str2[i];
	}

	//是否为空
	string str="abc";
	str.empty();  //false

	//返回字串
	string str1="it is a nice day";
	string str2=str1.substr(8,4); //str2="nice";

	//交换
	string str1="good";
	string str2="great";
	str1.swap(str2);//str1="great";str2="good";
	
	
	//子串substr
	str1.substr(0,str1.length());
	 
	
	return 0;
}
