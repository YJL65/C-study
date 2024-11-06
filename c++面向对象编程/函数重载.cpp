#include <iostream>
using namespace std;
//函数重载
//可以让函数名相同，提高复用性


//函数重载的满足条件
//1.同一个作用域下
//2.函数名相同
//3.函数参数类型不同，或者个数不同，或者顺序不同
void func() {
	cout << "this is a function" << endl;
}
//void func(int a) {
//	cout << "this is a function?" << endl;
//}
void func(double a) {
	cout << "this is a function????" << endl;
}
//注意：函数的返回值不能作为函数重载条件
//int func(double a) {
//	cout << "this is a function????" << endl;
//}

//1.引用作为函数重载的条件
void func(int& a) {		//int &a = 10不合法
	cout << "this is a function////" << endl;
}
void func(const int& a) {
	cout << "this is a function????" << endl;
}
//2.函数重载碰到默认参数
void func2(int a,int b=10) {
	cout << "this is a function????1" << endl;
}
void func2(int a) {
	cout << "this is a function????2" << endl;
}
int main() {
	const int a = 10;
	/*func(10);*///传入静态常量的引用
	func2(2,20);//当函数重载碰到默认参数，出现二义性，报错,应尽量避免这种情况
	system("pause");
	return 0;
}