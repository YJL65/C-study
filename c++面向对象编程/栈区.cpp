#include <iostream>
using namespace std;
//栈区：由编译器自动分配释放，存放函数的参数值、返回值、局部变量等。
//栈区数据注意事项——不要返回局部变量的地址
//栈区的数据由编译器管理开辟和释放

int* func() {
	int a = 10;//局部变量存放在栈区，栈区的数据在函数执行完后自动释放
	return &a;
}
int* func1() {
	int a = 10;//局部变量存放在栈区，栈区的数据在函数执行完后自动释放
	return &a;
}
int main() {
	int* p = func();
	cout << *p << endl;//第一可以打印数据，是因为编译器做了保留
	cout << *p << endl;
	int* p1 = func1();
	cout << *p1 << endl;
	cout << *p1 << endl;
	system("pause");
	return 0;
}
