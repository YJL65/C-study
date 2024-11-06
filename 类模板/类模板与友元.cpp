#include <iostream>
using namespace std;

template<class T1, class T2>
class Person;
template<class T1, class T2>
void printPerson2(Person <T1, T2> p) {
	cout << "类外实现---name= " << p.m_Name << "  age=" << p.m_Age << endl;
}

template<class T1, class T2>
class Person {
	//全局函数类内实现
	friend void printPerson(Person <T1, T2> p) {
		cout << "name=" << p.m_Name << "age=" <<p.m_Age << endl;
	}
	//全局函数类外实现
	//如果全局函数是类外实现，需要让编译器提前知道
	friend void printPerson2<>(Person <T1, T2> p);
public:
	Person(T1 name, T2 age){
		this->m_Age = age;
		this->m_Name = name;
	}
private:
	T1 m_Name;
	T2 m_Age;
};

void test01() {
	Person<string, int>p("Tom", 12);
	printPerson2(p);
}
int main() {
	test01();

	system("pause");
	return 0;
}