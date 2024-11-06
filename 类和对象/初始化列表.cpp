#include <iostream>
using namespace std;

class person {
public:

	//传统初始化操作
	/*person(int a, int b, int c)
	{
		m_a = a;
		m_b = b;
		m_c = c;
	}*/

	//初始化列表初始化属性
	person(int a,int b,int c) :m_a(a), m_b(b), m_c(c){

	}
	int m_a;
	int m_b;
	int m_c;
};

void testo1() {
	/*person p(10, 20, 30);*/
	person p(30,20,10);
	cout << p.m_a << endl;
	cout << p.m_b << endl;
	cout << p.m_c << endl;
}

int main() {
	testo1();
	system("pause");
	return 0;
}