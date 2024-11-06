#include <iostream>
using namespace std;

void test01() {
	string str1 = "hello world";
	string str2 = str1;
	cout << "str1=" << str1 << endl;
	cout << "str2=" << str2 << endl;
	string str3;
	str3.assign("hello cpp");
	cout << "str3=" << str3 << endl;
	string str4;
	str4.assign("hello cpp", 5);
	cout << "str4=" << str4 << endl;
	string str6;
	str6.assign(str4);
	cout << "str6=" << str6<< endl;
	string str7;
	str7.assign(5, 'w');
}

int main() {


	system("pause");
	return 0;
}