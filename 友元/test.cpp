#include <iostream>
using namespace std;

void test();
class Build;
class Person {
	friend class Build;
	friend void test();
public:
	Person(int a,int b) {
		m_a = a;
		m_b = b;
	}
	int m_a;
private:
	int m_b;
};
class Build {
public:
	void func(int a, int b) {
		Person t(a, b);
		cout << "访问的a:" << t.m_a << " " << "访问的b:" << t.m_b << endl;
	}
};
void test() {
	Person p(10,20);
	cout << "访问的a:" << p.m_a << " " << "访问的b:" << p.m_b << endl;
}
int main() {
	Build p;
	cout << sizeof(p) << endl;
	p.func(30,40);
	test();
	system("pause");
	return 0;
}