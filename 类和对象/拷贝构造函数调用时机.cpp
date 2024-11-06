#include <iostream>
using namespace std;

//1.使用一个已经创建完毕的对象来初始化一个新对象
//2.值传递的方式给函数参数传值
//3.值方式返回局部对象

class person {
public:
	person() {
		cout << "person 默认构造函数调用" << endl;
	}
	person(int age) {
		m_age = age;
		cout << "person 有参构造函数调用" << endl;
	}
	person(const person& p) {
		m_age = p.m_age;
		cout << "person 拷贝构造函数调用" << endl;
	}
	~person() {
		cout << "person 析构函数调用" << endl;
	}
	int m_age;
};

//1.使用一个已经创建完毕的对象来初始化一个新对象
void testo1() {
	person p1(20);
	person p2(p1);
	cout << "p2的年龄：" << p2.m_age << endl;
}
//2.值传递的方式给函数参数传值
void dowork(person p) {

}
void testo2() {
	person p;
	dowork(p);
}
//3.值方式返回局部对象
person dowork2() {
	person p1;
	cout << (int*)&p1 << endl;
	return p1;
}
void testo3() {
	person p = dowork2();
	cout << (int*)&p << endl;
}
int main() {
	testo3();
	system("pause");
	return 0;
}