#include <iostream>
using namespace std;

//所有对象共享一个函数
//静态成员函数只能访问静态成员变量
//静态成员函数也有访问权限
class Person {
public:
	//静态成员函数
	static void func() {
		m_A = 100;//静态成员函数可以访问静态成员变量
		//m_B = 100;//静态成员函数不可以访问非静态 成员变量，无法区分到底是哪个对象的属性
		cout << "static void func调用" << endl;
	}
	static int m_A;
	int m_B;
};
int Person::m_A = 0;
void test01() {
	//1.通过对象访问
	Person p;
	p.func();

	//2.通过类名来访问
	Person::func();
}

int main(){

	test01();
	system("pause");
	return 0;
}