#include <iostream>
using namespace std;
//公共继承
class Base1 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
//公共继承
class Soon1 :public Base1 {
public:
	void func() {
		m_A = 10;//公共
		m_B = 10;//保护
		//m_C = 10; 父类中私有不能访问
	}
};
//保护继承
class Soon2 :protected Base1 {
public:
	void func() {
		m_A = 10;//保护
		m_B = 10;//保护
		//m_C = 10; 父类中私有不能访问
	}
};
//私有继承
class Soon3 :private Base1 {
public:
	void func() {
		m_A = 10;//私有
		m_B = 10;//私有
		//m_C = 10; 父类中私有不能访问
	}
};
void test01() {
	Soon1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//类外访问不到
}
int main() {

	system("pause");
	return 0;
}