#include <iostream>
using namespace std;
int main() {
	//1.引用必须初始化
	//2.引用一旦初始化后，就不可以更改
	int a = 10;
	int &b = a;
	int c = 20;
	b = c;//赋值操作而不是更改引用
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	system("pause");
	return 0;
}