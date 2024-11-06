#include <iostream>
#include<vector>
using namespace std;

class Person {
public:
	Person(string name, int age) {
		this->m_Age = age;
		this->m_Name = name;
	}
	string m_Name;
	int m_Age;
};
void test01() {
	vector<Person> v;
	Person p1("adad", 10);
	Person p2("adad", 20);
	Person p3("adad", 30);
	v.push_back(p1);
	v.push_back(p2);

	v.push_back(p3);
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "mingzi:" << (*it).m_Name << endl;
		cout << "age:" << (*it).m_Age << endl;
	}
}
void test02() {
	vector<Person*> v;
	Person p1("adad", 10);
	Person p2("adad", 20);
	Person p3("adad", 30);
	v.push_back(&p1);
	v.push_back(&p2);

	v.push_back(&p3);
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "mingzi:" << (*it)->m_Name << endl;
		cout << "age:" << (*it)->m_Age << endl;
	}
}
int main() {

	test02();
	system("pause");
	return 0;
}