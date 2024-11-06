#include <iostream>
using namespace std;

class yinpin {
	
public:
	yinpin() {
		cout << "父类的构造函数" << endl;
	}
	virtual~yinpin() = 0;
	virtual void Boil() = 0;
	virtual void Brew() = 0;
	virtual void Pourcup() = 0;
	virtual void Putsth() = 0;
};
yinpin::~yinpin() {
	cout << "父类的析构函数" << endl;
}
class coffee :public yinpin {
public:
	virtual void Boil() {
		cout << "煮水" << endl;
	}
	virtual void Brew() {
		cout << "冲洗coffee" << endl;
	}
	virtual void Pourcup() {
		cout << "倒杯中" << endl;
	}
	virtual void  Putsth() {
		cout << "加入东西" << endl;
	}
};
class tea :public yinpin {
	
public:
	tea(int n) {
		cout << "tea的构造" << endl;
		b = new int(n);
	}
	~tea() {
		if (b != NULL) {
			delete b;
			b = NULL;
		}
		cout << "tea的析构" << endl;
	}
	virtual void Boil() {
		cout << "煮水" << endl;
	}
	virtual void Brew() {
		cout << "冲洗tea" << endl;
	}
	virtual void Pourcup() {
		cout << "倒杯中" << endl;
	}
	virtual void  Putsth() {
		cout << "加入东西" << endl;
	}
	int* b;
};
void test() {
	yinpin* a = new tea(8);
	delete a;
}
int main() {
	test();
	system("pause");
	return 0;
}