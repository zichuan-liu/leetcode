#include<iostream>
#include<vector>
#include<algorithm>	//sort

using namespace std;

struct stu {
	int a;
	int b;
};

int main() {
	vector<stu> test(5); //构造五个stu
	vector<vector<int>> attack(4, vector<int>(4, 0));	//构造二维数组


	//vector<int> vec;				//无参数构造
	//cout << vec[0];				//无元素，程序崩溃
	vector<int> vec1(5);			//5个int类型元素，初始值为0
	for (int i = 0; i < 5; i++) {
		cout << vec1[i] << endl;
	}

	vector<int> vec2(5, 12);		//5个int类型元素，初始值均为12
	for (int i = 0; i < 5; i++) {
		cout << vec2[i] << endl;
	}

	vector<char> vec3(5, 'a');		//5个char类型元素，初始值均为'a'
	for (int i = 0; i < 5; i++) {
		cout << vec3[i] << endl;
	}

	vector<int> vec4(vec2);			//用vec2初始化vec4
	for (int i = 0; i < 5; i++) {
		cout << vec4[i] << endl;
	}
	//迭代器
	vector<int>::iterator ite = vec1.begin();//指向头的迭代器
	vector<int>::iterator ite1 = vec1.end(); //指向尾的迭代器
	vector<int>vec5(ite, ite1);				 //将vec5用迭代器之间的值初始化
	for (int i = 0; i < 5; i++) {
		cout << vec5[i] << endl;
	}

	//size  reserve empty
	vector<int> vec(5);
	cout << vec.size() << endl;
	vec.reserve(10);
	cout << vec.size() << endl;
	cout << vec.empty() <<  endl;



	//输出
	for (int i = 0; i < 5; i++) {
		cout << vec[i] << endl;
	}
	//使用for_each()输出需要添加头文件#include< algorithm >
//	vector<int> vec;
//	for (int i = 0; i < 10; i++) {
//		vec.push_back(i);		//尾部添加 push_back
//	}
//	for_each(vec.begin(), vec.end(), fun);

	//尾部添加 push_back
	vec.push_back(0);
	//尾部删除
	vec.pop_back();
	//删除所有
	vec.clear();				//删除所有元素


	//中间添加（insert）
	vec.insert(vec.begin() + 2, 12);		//在指定迭代器的位置加入一个数据

	//交换
	vec.swap(vec1); //将vec与vec1进行交换


	//排叙
	int a[10] = { 9, 0, 1, 2, 3, 7, 4, 5, 100, 10 };
	sort(a, a +10);

	return 0;
}
