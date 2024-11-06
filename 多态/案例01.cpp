#include<iostream>
using namespace std;

class Abstractcal {
public:
	virtual int getres() {
		return 0;
	}
	int numA;
	int numB;
};
class chu :public Abstractcal {
public:
	int getres() {
		return numA / numB;
	}
};
void test01() {
	Abstractcal* abc = new chu;
	abc->numA = 20;
	abc->numB = 20;
	cout << "numA / numB= " << abc->getres() << endl;
	delete abc;
}
int main() {
	test01();
	system("pause");
	return 0;
}