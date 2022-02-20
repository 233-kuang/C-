#include<iostream>
using namespace std;

//常量的定义方法
//#define 定义常量
#define Max 10
//const修饰变量

int main03()
{
	//Max = 14;定义为常量不可修改
	//cout << Max << endl;
	const int a = 10;
	//a = 20; const修饰的变量不可修改
	cout << a << endl;
	return 0;
}