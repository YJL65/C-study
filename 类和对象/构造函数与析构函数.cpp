#include <iostream>
using namespace std;

//对象的初始化和清理
//1.构造函数 进行初始化
class Person {
public:
	//没有返回值 不用void
	//函数名 与类名相同
	//构造函数可以有参数，可以发生重载
	//创建对象的时候，构造函数自动调用，且只调用一次
	Person() {
		cout << "Person构造函数的调用" << endl;
	}
	//2.清理函数 进行清理
	//没有返回值，无void
	//函数名和类名相同 名称前加~
	//析构函数不可以有参数，不可以发生重载
	//对象在销毁前 会自动调用析构函数，且只调用一次
	~Person() {
		cout << "Person的析构函数调用" << endl;
	}
};
//构造和析构必须有的实现，自己不提供，编译器会提供空的析构和构造
void testo1() {
	Person p;//在栈上的数据，testo1执行后，释放这个对象
}

int main() {
	testo1();
	//Person p1;
	system("pause");
	return 0;
}