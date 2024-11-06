#include <iostream>
using namespace std;


//继承实现页面
//公共页面类
class BasePage {
public:
		void header() {
			cout << "首页、公开课" << endl;
		}
		void footer() {
			cout << "帮助中心、交流合作、站内地图" << endl;
		}
		void left() {
			cout << "java、python、c++" << endl;
		}
};
class Java : public BasePage {
public:
	void content() {
		cout << "JAVA学科视频" << endl;
	}
};

class Python : public BasePage {
public:
	void content() {
		cout << "python学科视频" << endl;
	}
};

class Cpp : public BasePage {
public:
	void content() {
		cout << "C++学科视频" << endl;
	}
};
void test01() {
	cout << "Java下载视频页面如下：" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "---------------------------------------" << endl;
	cout << "Python下载视频页面如下：" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "---------------------------------------" << endl;
	cout << "C++下载视频页面如下：" << endl;
	Cpp cp;
	cp.header();
	cp.footer();
	cp.left();
	cp.content();
}

int main() {
	test01();
	system("pause");
	return 0;
}
//继承的好处：减少重复代码
//语法：class 子类：继承方式 父类
//子类 也称为 派生类 
//父类 也成为 基类