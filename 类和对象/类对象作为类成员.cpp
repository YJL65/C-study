#include <iostream>
using namespace std;


//手机类
class phone {
public:

	string m_Pname;//手机品牌名称
	phone(string name) 
	{
		cout << "phone 的构造函数调用" << endl;
		m_Pname = name;
	}
	~phone() {
		cout << "phone的析构" << endl;
	}
};

//人类
class person {
public:
	person(string name, string pname) :m_Name(name),m_phone(pname)
	{
		cout << "person的构造函数" << endl;
	}
	~person() {
		cout << "person析构" << endl;
	}
	//姓名
	string m_Name;
	//手机
	phone m_phone;
};

//当其他类对象作为本类成员，构造时先构造类对象，再构造自身,析构的顺序与构造相反

void testo1() {
	person p("张三","iphone");
	cout << p.m_Name << " " << p.m_phone.m_Pname << endl;
}

int main() {

	testo1();
	system("pause");
	return 0;
}