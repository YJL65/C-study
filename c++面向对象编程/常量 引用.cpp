#include <iostream>
using namespace std;
void show(const int& val) {
	//val = 100;
	cout << val<<endl;
}
int main() {
	//使用场景：用来修饰形参，防止误操作

	//int a = 10;
	////加上const后编译器将代码修改 int temp = 10;const int &ref =temp;
	//const int &ref =10;//引用必须引一块合法的内存空间
	//ref = 20;//加入const只能读不能修改
	int a = 10;
	show(a);
	system("pause");
	return 0;
}