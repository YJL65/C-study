#include <iostream>
using namespace std;

//自定义整型
class Myinteger {
	friend ostream& operator<<(ostream& out, Myinteger myint);
public:
	Myinteger() {
		m_Num = 0;
	}
	//重载前置++运算符
	Myinteger& operator++() {
		m_Num++;
		return *this;
	}
	//重载后置++运算符 int代表占位参数，可以区分前置和后置
	Myinteger  operator++(int) {
		Myinteger temp = *this;//(返回的是值）局部对象在当前执行完后直接释放了 再次访问非法
		m_Num++;
		return temp;
	}
private:
	int m_Num;
};
//重载运算符<<
ostream& operator<<(ostream& out, Myinteger myint) {
	cout << myint.m_Num;
	return out;
}
void test01() {
	Myinteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}
void test02() {
	Myinteger myint;
	cout << myint++ << endl;
	cout << myint << endl;

}
int main() {
	test02();

	system("pause");
	return 0;
}