#include <iostream>
using namespace std;
//1.创建一个类，c++编译器会给每个类都添加三个函数
//默认构造（空实现）
//析构函数（空实现）
//拷贝构造（值拷贝）

//2.如果我们写了有参构造函数，编译器不再提供无参构造，但提供拷贝构造
//如果我们写了拷贝构造函数，编译器不在提供其他普通构造函数
class person {
public:
	person() {
		cout << "person 默认构造函数调用" << endl;
	}
	person(int age) {
		m_age = age;
		cout << "person 有参构造函数调用" << endl;
	}
	person(const person& p) {
		m_age = p.m_age;
		cout << "person 拷贝构造函数调用" << endl;
	}
	~person() {
		cout << "person 析构函数调用" << endl;
	}
	int m_age;
};

//void testo1() {
//	person p;
//	p.m_age = 18;
//	person p2(p);
//	cout << "p2的年龄：" << p2.m_age << endl;
//}
void testo2() {
	person p;
	
}
int main() {
	//testo1();
	testo2();
	system("pause");
	return 0;
}