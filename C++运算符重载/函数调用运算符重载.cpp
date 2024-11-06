#include <iostream> 
using namespace std;
class Myprint {
public:
	//重载函数调用运算符
	void operator()(string test) {
		cout << test << endl;
	}
};
class Myadd {
public:
	int operator()(int n1, int n2) {
		return n1 + n2;
	}
};
void MyPrint02(string test) {
	cout << test << endl;
}
void test01() {
	Myprint p;
	p("hello world");//由于使用起来非常类似于函数调用，因此称为仿函数（重载())
	MyPrint02("hello world");
}
//仿函数灵活，没有固定写法
//加法类
void test02() {
	Myadd a;
	int ret;
	ret=a(100, 20);
	cout << ret << endl;

	//匿名函数对象
	cout << Myadd()(100, 100) << endl;
}
int main() {
	test02();
	system("pause");
	return 0;
}