#include <iostream>
using namespace std;

class Animal {
public:
	int m_Age;
};
//利用虚继承 解决菱形继承的问题
// 在继承之前 加上关键字 virtual 变为虚继承
// Animal 变为虚基类
//羊类
class Sheep :virtual public Animal{};
//驼类
class Tuo:virtual public Animal{};
//羊驼类
class sheepTuo:public Sheep,public Tuo{};
void test01() {
	sheepTuo st;
	st.Sheep:: m_Age = 18;
	st.Tuo::m_Age = 28;
	//当菱形继承，两个父类拥有相同数据，需要加以作用域区分
	cout << "st.Sheep:: m_Age =" << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	cout << "st.m_Age=" << st.m_Age << endl;
	//菱形继承有两份，只要一份就可以了

}
int main() {

	test01();
	system("pause");
	return 0;
}