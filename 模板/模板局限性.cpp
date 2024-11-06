#include <iostream>
using namespace std;

class Person {
public:
	Person(string name, int age) {
		this->Age = age;
		this->name = name;
	}
	string name;
	int Age;
};
template<class T>
bool myCompare(T a, T b) {
	if (a == b)
		return true;
	return false;
}
//利用具体化Person的版本实现代码，具体优先调用
template<> bool myCompare(Person a,Person b) {
	if (a.Age==b.Age && a.name==b.name)
		return true;
	return false;
}
void test01() {
	int a = 10;
	int b = 20;
	if (myCompare(a, b)) {
		cout << "a==b" << endl;
	}
	else {
		cout << "a!=b" << endl;
	}
}
void test02() {
	Person a("tom", 10);
	Person b("tom", 10);
	if (myCompare(a, b)) {
		cout << "a==b" << endl;
	}
	else {
		cout << "a!=b" << endl;
	}
}
int main() {
	test02();

	system("pause");
	return 0;
}