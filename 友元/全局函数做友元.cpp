#include <iostream>
using namespace std;

class Building {
	//gooday全局函数时Building好朋友 ，可以访问building私有成员
	friend void gooday(Building* building);
public:
	Building() {
		m_bedroom = "卧室";
		m_sittingroom = "客厅";
	}
public:
	string m_sittingroom;
private:
	string m_bedroom;
};

//全局函数
void gooday(Building* building) {
	cout << "好基友全局函数 正在访问：" << building->m_sittingroom << endl;
	cout << "好基友全局函数 正在访问：" << building->m_bedroom << endl;

}
void test01() {
	Building building;
	gooday(&building);
}
int main() {
	test01();
	system("pause");
	return 0;
}