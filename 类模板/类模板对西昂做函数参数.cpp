#include <iostream>
using namespace std;
//1.指定传入类型
template<class T1, class T2>
class Person {
public:
	Person(T1 name, T2 age) {
		this->m_Age = age;
		this->m_Name = name;
	}
	T1 m_Name;
	T2 m_Age;
	void showPerson() {
		cout << "name=" << m_Name << "age=" << m_Age << endl;
	}
};
///指定传入的参数类型
void printPerson01(Person<string, int> p) {
	p.showPerson();
}
//参数模板化
template<class T1, class T2 = int>
void printPerson02(Person<T1,T2> p) {
	p.showPerson();
	
}

template<class T>
void printPerson03(T p) {
	cout << typeid(T).name() << endl;
	p.showPerson();
}
void test01() {
	Person<string, int>p("顿悟看", 15);
	printPerson01(p);
}
void test02() {
	Person<string, int>p("幽默", 15);
	printPerson02(p);
}
void test03() {
	Person<string, int>p("理由", 15);
	printPerson03(p);
}
int main() {

	test03();
	system("pause");
	return 0;
}