#include <iostream>
using namespace std;
int g_a = 40;
const int c_a = 40;
int main() {
	//全局区：存放全局变量、静态变量、常量（字符串常量、全局常量）
	//不在全局区的变量：局部变量、局部常量
	int a = 40;
	static int s_a = 40;
	const int c_l_a = 40;
	cout << "普通局部变量的地址：" << (int)&a << endl;
	cout << "全局变量的地址：" << (int)&g_a << endl;
	cout << "静态变量的地址：" << (int)&s_a << endl;
	cout << "字符串常量的地址：" << (int)"hello world" << endl;
	cout << "全局常量的地址：" << (int)&c_a << endl;
	cout << "局部常量的地址：" << (int)&c_l_a << endl;
	system("pause");
	return 0;
}