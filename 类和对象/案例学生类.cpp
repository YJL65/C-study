#include <iostream>
using namespace std;


//类中的属性和行为 统一称为 成员
//属性 成员属性  成员变量
//行为 成员函数  成员方法 
class student {
public:
	string name;
	int num;
	void show() {
		cout << "学生的姓名是：" << name << endl;;
		cout << "学生的学号是：" << num << endl;
	}
	void setname(string name1) {
		name = name1;
	}
};

int main() {
	student c1;
	c1.setname("张三");
	c1.num = 2022101204;
	c1.show();
	system("pause");
	return 0;
}