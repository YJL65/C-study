#include <iostream>
using namespace std;

class Base {
public:
	Base() {
		m_A = 100;
	}
	void func() {
		cout << "Base下同名成员函数" << endl;
	}
	void func(int a) {
		cout << "son（int a)下同名成员函数" << endl;
	}
	int m_A;

};
class son :public Base {
public:
	son() {
		m_A = 200;
	}
	void func() {
		cout << "son下同名成员函数" << endl;
	}	
	int m_A;
};
//同名成员属性
void test01() {
	son s;
	cout << "son下m_A= " << s.m_A << endl;
	//如果通过子类对象 访问到父类中同名成员，需要加作用域
	cout << "Base 下m_A= " << s.Base::m_A << endl;
}
//同名成员函数
void test02() {
	son s;
	s.func();//直接调用是子类中的同名成员
	s.Base::func();
	//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
	//如果想访问到父类中被隐藏的同名成员函数，需要加作用域
	s.Base::func(100);
}
int main() {
	test02();
	system("pause");
	return 0;
}