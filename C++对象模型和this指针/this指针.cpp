#include <iostream>
using namespace std;


//1.解决名称冲突
//2.返回对象本身用*this

class Person {
public:
	Person(int age) {
		this->age = age;
		//this指针指向被调用的成员函数所属的对象
	}
	Person &add(Person& p) { //不用引用，返回的是创建新的对象，只有加上引用才会返回它本身
		this->age += p.age;
		//this指向p2的指针，而*this指向的就是p2这个对象本体
		return *this;
	}
	int age;
};
void test01() {
	Person p(18);
	cout << p.age << endl;
}
void test02() {
	Person p1(21);
	Person p2(21);
	//链式编程思想
	p2.add(p1).add(p1).add(p1);
	cout << "p2的年龄为：" << p2.age << endl;
}
int main() {
	test02();
	system("pause");
	return 0;
}