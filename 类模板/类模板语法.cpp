#include <iostream>
#include<string>
using namespace std;

template<class NameType, class AgeType>
class Person {
public:
	Person(NameType name, AgeType age) {
		this->age = age;
		this->name = name;
	}
	NameType name;
	AgeType age;
	void showPerson() {
		cout << "name=" << name << "age=" << age << endl;
	}
};


void test01(){
	Person < string, int > p("孙科", 31);
	p.showPerson();
}
int main() {
	test01();

	system("pause");
	return 0;
}