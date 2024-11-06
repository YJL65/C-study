#include <iostream>
using namespace std;
class Person {
public:
	Person(string Name, int age) {
		m_Age = age;
		name = Name;
	}
	bool operator==(Person& p) {
		if (this->name == p.name && this->m_Age == p.m_Age) {
			return true;
		}
		return false;
	}
	bool operator!=(Person& p) {
		if (this->name == p.name && this->m_Age == p.m_Age) {
			return false;
		}
		return true;
	}
	string name;
	int m_Age;
};


void test01() {
	Person p1("Tom", 18);
	Person p2("Tom", 18);
	if (p1 == p2) {
		cout << "p1和p2相等。" << endl;
	}
	else {
		cout << "p1和p2不相等。" << endl;
	}
	if (p1 != p2) {
		cout << "p1和p2不相等。" << endl;
	}
	else {
		cout << "p1和p2相等。" << endl;
	}
}
int main() {
	test01();
	system("pause");
	return 0;
}