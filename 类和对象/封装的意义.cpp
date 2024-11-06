#include <iostream>
using namespace std;
const double PI = 3.14;
//设计一个圆类，求圆的周长
//圆求周长的公式：2*pi*半径
class circle {
	//访问权限
public:
	//属性
	//半径
	int m_r;
	//行为
	double calculate() {
		return 2 * PI * m_r;
	}
};
int main() {
	//通过圆类创建具体的圆（对象）
	//实例化 （通过一个类 创建一个对象的过程）
	circle c1;
	//给圆对象 的属性进行赋值

	c1.m_r = 10;
	cout << "圆的周长位：" << c1.calculate() << endl;
	system("pause");
	return 0;
}