#include <iostream>
using namespace std;

//类做友元

class Building;
class Goodday {
public:
	Goodday();
	void visit();//参观函数 访问Building中的属性
	Building* building;

};

class Building {
	friend class Goodday;
public:
	Building();
public:
	string m_Sitingroom;//客厅
private:
	string m_Bedroom;//卧室
};

//类外写成员函数
Building::Building() {
	m_Bedroom = "卧室";
	m_Sitingroom = "客厅";
}

Goodday::Goodday() {
	//创建建筑物对象
	building = new Building;
}
void Goodday::visit() {
	cout << "好基友类正在访问：" << building->m_Bedroom << endl;
}

void test01() {
	Goodday gg;
	gg.visit();
}
int main() {
	test01();
	system("pause");
	return 0;
}