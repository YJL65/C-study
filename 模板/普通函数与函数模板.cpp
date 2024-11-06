#include <iostream>
using namespace std;
int myAdd(int a, int b) {
	return a + b;
}
template <class T>
T myAdd02(T a,T b) {
	return a + b;
}
void test01() {
	int a = 10;
	int b = 20;
	char c = 'c';
	//cout << myAdd02(a, c) << endl;自动推导不能隐式转换
	cout << myAdd02<char>(a, c) << endl;
}


int main() {

	test01();
	system("pause");
	return 0;
}