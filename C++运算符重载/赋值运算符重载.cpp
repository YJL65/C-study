#include<iostream>
using namespace std;
class Person {
public:
	Person(int age) {
		m_Age = new int (age);//在堆区开辟内存可能会引发深拷贝和浅拷贝的问题。
	}
	~Person() {
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
			cout << "内存已经释放干净" << endl;
		}
	}
	//重载运算符
	Person &operator=(Person& p) {
		//编译器提供浅拷贝 m_Age = p.m_Age
		//应该先判断是否有属性在堆区，如果有先释放干净，再深拷贝
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
		//深拷贝
		m_Age = new int(*p.m_Age);
		return *this;
	}
	int *m_Age;
};

void test01() {
	Person p1(18);
	Person p2(20);
	Person p3(30);
	p3=p2 = p1;//赋值操作
	cout << "p1_Age=" << *p1.m_Age << endl;
	cout << "p2_Age=" << *p2.m_Age << endl;
	cout << "p3_Age=" << *p3.m_Age << endl;
}
int main() {
	test01();
	/*int a = 10;
	int b = 20;
	int v = 30;
	v = b = a;
	cout << a << b << v << endl;*/
	system("pause");
	return 0;
}