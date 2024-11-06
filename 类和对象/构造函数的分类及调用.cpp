#include <iostream>
using namespace std;
//分类
//按参数分类 无参构造和有参构造
//按类型分类 普通构造和拷贝构造
class person {
public:
	person() {
		cout << "无参构造" << endl;
	}
	person(int a) {
		age = a;
		cout << "有参构造" << endl;
	}
	//拷贝构造函数
	person(const person &p) {
		//将传入的人身上的所有属性，拷贝到我身上
		age = p.age;
		cout << "拷贝构造函数" << endl;
	}
	~person() {
		cout << "析构" << endl;
	}
	int age;
};

//调用
void test() {
	//1.括号法
	//person p;//默认构造函数的调用
	//person p2(10);//有参构造函数
	//person p3(p2);
	//注意事项1
	//调用默认构造函数是，不要加()
	//因为下面这行代码，编译器会认为是一个函数的声明,不会认为在创建对象
	//person p();
	/*cout << "p2的年龄:" << p2.age << endl;
	cout << "p3的年龄：" << p3.age << endl;*/

	//2.显示法
	//person p1;
	//person p2 = person(10);//有参构造
	//person p3 = person(p2);//拷贝构造

	//person(10);//匿名对象 特点：当前执行结束后，系统会立即回收匿名对象
	//cout << "aaaa" << endl;
	// 注意事项2
	// 不要利用拷贝构造函数 初始化匿名对象		编译器认为person(p3)等价于person p3;对象声明
	//person(p3);·
	//3.隐式转换法
	person p4 = 10;//相当于写了person p4 = person(10)
	person p5 = p4;
}
int main() {

	test();
	system("pause");
	return 0;
}