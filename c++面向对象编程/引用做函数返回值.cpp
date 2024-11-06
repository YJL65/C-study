#include <iostream>
using namespace std; 
//1.不要返回局部变量的引用
int& test() {
	int a = 10;
	return a;
}
//2.函数的调用可以作为左值(等号左边的值)
int& test02() {
	static int a = 10;//全局区的数据在程序结束后系统释放
	return a;
}
int main() {
	/*int& ref = test();
	cout << ref << endl;*///a的内存已被释放
	int& ref = test02();
	test02() = 1000;
	cout << ref << endl;
	system("pause");
	return 0;
}