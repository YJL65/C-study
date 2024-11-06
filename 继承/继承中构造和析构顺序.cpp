#include <iostream>
using namespace std;
class Base {
public:
	Base() {
		cout << "这是Base的构造函数" << endl;
	}
	~Base() {
		cout << "这是Base的析构函数" << endl;
	}
};
class son :public Base {
public:
	son() {
		cout << "这是son的构造函数" << endl;
	}
	~son() 
	{
		cout << "这是son的析构函数" << endl;
	}
};
void test01() {
	//Base b;
	son s;
}
int main() {
	test01();
	system("pause");
	return 0;
}

//继承中构造和析构顺序如下：
//先构造父类再构造子类，析构的顺序和构造相反