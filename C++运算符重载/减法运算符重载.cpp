#include <iostream>
using namespace std;

class Person {
public:
	Person(){}
	Person(int a, int b) {
		m_A = a;
		m_B = b;
	}
	/*Person operator-(Person & p) {
		Person temp;
		temp.m_A = this->m_A - p.m_A;
		temp.m_B = this->m_B - p.m_B;
		return temp;
	}*/
	int m_A;
	int m_B;
};

Person operator-(Person& a, Person& b) {
	Person temp;
	temp.m_A = a.m_A - b.m_A;
	temp.m_B = a.m_B - b.m_B;
	return temp;
}
Person operator-(Person& a, int num) {
	Person temp;
	temp.m_A = a.m_A;
	temp.m_B = a.m_B - num;
	return temp;
}
void test01() {
	Person A(20, 30);
	Person B(20, 10);
	Person C = A - B;
	Person D = operator-(C, 20);
	cout << "m_A=" << D.m_A << "   m_B=" << D.m_B << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}