#include <iostream>
using namespace std;
//第一种解决方式，直接包含源文件
#include"person.hpp"

//第二种方式，将h和cpp种的内容写道一起，后缀名写为".hpp”文件
//template <class T1,class T2>
//class Person {
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//	T1 m_Name;
//	T2 m_Age;
//};
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age) {
//	this->m_Age = age;
//	this->m_Name = name;
//}
//template<class T1, class T2>
//void Person<T1, T2>::showPerson() {
//	cout << "name=" << this->m_Name << "age=" << this->m_Age << endl;
//}

void test01() {
	Person<string, int>p("tom", 12);
	p.showPerson();
}
int main() {
	test01();

	system("pause");
	return 0;
}