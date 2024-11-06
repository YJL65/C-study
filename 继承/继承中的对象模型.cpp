#include <iostream>
using namespace std;
class Basic {
public:
	static int m_D;
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class son :public Basic {
public:
	int m_D;
};
void test01() {
	//父类中所有非静态成员属性都会被子类继承下去
	//父类中私有成员属性 是被编译器隐藏了，因此访问不到，但是确实被继承下去了


	//利用开发人员命令提示工具查看对象模型
	//跳转文件路径名 cd 具体路径下（不包括exe文件）
	//查看命名
	//cl/d1 reportSingleClassLayout类名 文件名
	cout << sizeof(son) << endl;
}
int main() {
	test01();
	system("pause");
	return 0;
}