#include <iostream>
using namespace std;

class Base {
public:
	static void func() {
		cout << "Base下——func" << endl;
	}
	static void func(int a) {
		cout << "Base下——func(int a)" << endl;
	}
	static int m_A;
};
int Base:: m_A=100;



class son:public Base {
public:
	static void func() {
		cout << "son下——func" << endl;
	}
	static int m_A;
};
int son::m_A = 200;
//同名静态成员属性
void test01() {
	son s;
	//1.通过对象访问
	cout << "son 下m_A=" << s.m_A << endl;
	cout << "Base 下m_A=" << s.Base::m_A << endl;
	cout << endl;
	//2.通过类名访问
	cout << "通过类名访问：" << endl;
	cout << "son 下 m_A=" << son::m_A << endl;
	//第一个::代表通过类名访问 第二个::代表访问父类作用域下
	cout << "Base下m_A=" << son::Base::m_A << endl;
}
void test02() {
	son s;
	//通过对象
	s.func();
	s.Base::func();
	//通过类名
	son::func();
	//子类出现和父类同名静态成员函数，也会隐藏父类所有同类静态成员函数
	son::Base::func(100);
}
int main() {
	test02();
	system("pause");
	return 0;
}