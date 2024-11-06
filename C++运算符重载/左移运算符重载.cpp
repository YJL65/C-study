#include<iostream>
using namespace std;

class Person {
	friend ostream& operator<<(ostream& out, Person p);
public:
	Person(int a, int b) {
		m_A = a;
		m_B = b;
	}
private:
	//利用成员函数重载左移运算符  p.operator<<(cout) 简化版本 p<<cout
	//不会利用成员函数重载<<运算符，因为无法实现cout在左侧
	/*void operator<<() {

	}*/
	int m_A;
	int m_B;
};
//只能利用全局函数重载<<
ostream & operator<<(ostream &out, Person p)//本质operator<<(cout,p) 简化cout<<p
{
	cout << p.m_A << " " << p.m_B;
	return out;
}
void test01() {
	Person p(10,10);

	cout << p<<"hello world" << endl;//链式编程
}
int main() {

	test01();
	system("pause");
	return 0;
}