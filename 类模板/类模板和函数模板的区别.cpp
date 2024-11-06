#include <iostream>
using namespace std;

template<class NameType, class AgeType=int>
class Person {
public:
	Person(NameType name, AgeType age) {
		this->m_Age = age;
		this->m_Name= name;
	}
	NameType m_Name;
	AgeType m_Age;
	void showPerson() {
		cout << "name=" << m_Name << "age=" <<m_Age << endl;
	}
};

void test01() {
	//Person p("孙", 1000);无无法自动推导
	Person <string>p("孙", 1000);
	p.showPerson();
}
int main() {

	test01();
	system("pause");
	return 0;
}