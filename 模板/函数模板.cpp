#include <iostream>
using namespace std;
void swapInt(int& a, int& b) {
	int temp=a;
	a = b;
	b = temp;
}

void swapDouble(double& a, double& b) {
	double temp=a;
	a = b;
	b = temp;
}
template<typename T>//T是一个通用的数据
void myswap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}
void test01() {
	//使用模板
	//1.自动类型推导
	int a = 10;
	int b = 20;
	/*myswap(a, b);*/

	//2.显示制定类型
	myswap<int>(a, b);
	cout << "a=" << a << endl;
	cout << "b=" <<b <<endl;
}
int main() {

	test01();
	system("pause");
	return 0;
}