#include <iostream>
using namespace std;

class Building;
class Gooday {
public:
	Gooday();

	void visit();//让visit函数可以访问building中私有成员
	void visit2();//让visit2函数不可以访问building中私有成员

	Building* building;
};

class Building {
	//告诉编译器 Gooday类下的visit函数作为本类的好朋友，可以访问私有成员
	friend void Gooday::visit();
public:
	Building();
	string m_Sittingroom;
private:
	string m_Bedroom;
};
//类外实现成员函数
Building::Building() {
	m_Bedroom = "卧室";
	m_Sittingroom = "客厅";
}
Gooday::Gooday() {
	building = new Building;
}
void Gooday::visit() {
	cout << "visit函数正在访问： " << building->m_Sittingroom << endl;
	cout << "visit函数正在访问： " << building->m_Bedroom << endl;
}
void Gooday::visit2() {
	cout << "visit2函数正在访问： " << building->m_Sittingroom << endl;
	//cout << "visit2函数正在访问：" << building->m_Bedroom << endl;
}
void test01() {
	Gooday gg;
	gg.visit();
	gg.visit2();
}
int main() {
	test01();
	system("pause");
	return 0;
}