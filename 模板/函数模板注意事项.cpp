#include <iostream>
using namespace std;
template<class T>
void myswap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}
//模板必须要确定出T的类型才可以使用

template<class T>
void func() {

}
void test01() {
	int a = 10;
	int b = 20;
	char c = 'c';
	//myswap(a, c);推导出不一致的T类型

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}

void test02() {
	func<int>();
}
int main() {


	system("pause");
	return 0;
}