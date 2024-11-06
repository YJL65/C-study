#include <iostream>
using namespace std;
//成员属性设置位私有
//1.可以自己控制读写权限
//2.对于写可以检测数据的有效性

class Person {
private:
	string m_name;//名字可读可写
	int m_gae;//年龄 只读
	string m_lover;// 情人 只写
public:
	//写姓名
	void setname(string name) {
		m_name = name;
	}
	//获取姓名
	string getname() {
		return m_name;
	}
	//获取年龄 可读可写 如果想修改（年龄的范围是0—150之间）
	int getage() {
		return m_gae;
	}
	//设置年龄
	void setage(int age) {
		if (age < 0 || age>150) {
			m_gae = 0;
			cout << "输入有误" << endl;
			return;
		}
		m_gae = age;
	}
	//设置情人
	void setlover(string name) {
		m_lover = name;
	}
};
int main() {
	Person p;
	p.setname("zhangsan");
	p.setlover("zhiuadai");
	p.setage(1000);
	cout << p.getage() << endl;


	cout << p.getname() << endl;
	system("pause");
	return 0;
}