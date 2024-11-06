#include <iostream>
using namespace std;


void test01() {
	const char* str = "hello world";
	string str1(str);
	cout << str1 << endl;
	cout << str1.length() << endl;
}
int main() {

	test01();
	system("pause");
	return 0;
}