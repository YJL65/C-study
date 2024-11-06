#include <iostream>
#include <fstream>
using namespace std;
class person {
public:
	char m_Name[64];
	int m_Age;
};
void test01() {
	ofstream ofs;
	ofs.open("person.txt", ios::out | ios::binary);
	person p = { "张三",18 };
	ofs.write((const char*)&p,sizeof(person));
	ofs.close();
}
void test02() {
	ifstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "失败" << endl;
		return;
	}
	person p;
	ifs.read((char*)&p, sizeof(person));
	cout << "姓名：" << p.m_Name <<" 年龄："<<p.m_Age << endl;
	ifs.close();
}
int main() {
	test02();

	system("pause");
	return 0;
}