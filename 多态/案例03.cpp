#include <iostream>
using namespace std;

class CPU {
public:
	virtual void calculator() = 0;
};
class VideoCard {
public:
	virtual void display() = 0;
};
class Memory {
public:
	virtual void storage() = 0;
};
class Computer {
public:
	Computer(CPU* c, VideoCard* v, Memory* m) {
		this->c = c;
		this->v = v;
		this->m = m;
	}
	~Computer() {
		if (c != NULL) {
			delete c;
			c = NULL;
		}
		if (v != NULL) {
			delete v;
			v = NULL;
		}
		if (m != NULL) {
			delete m;
			m = NULL;
		}
	}
	void work(){
		c->calculator();
		v->display();
		m->storage();
	}
private:
	CPU* c;
	VideoCard *v;
	Memory* m;
};

class intelCPU :public CPU {
public:
	virtual void calculator() {
		cout << "Intel的计算器正在运作" << endl;
	}
};

class intelVideoCard :public VideoCard {
public:
	virtual void display() {
		cout << "Intel的显卡正在运作" << endl;
	}
};
class intelMemory :public Memory {
public:
	virtual void storage() {
		cout << "Intel的内存正在运作" << endl;
	}
};
void test() {
	Computer *pc=new Computer(new intelCPU, new intelVideoCard, new intelMemory);
	pc->work();
	delete pc;
}
int main() {
	test();
	system("pause");
	return 0;
}