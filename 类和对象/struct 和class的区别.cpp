#include <iostream>
using namespace std;
//stuct 默认权限位public
//class 默认权限是private

class c1 {
	int m_a;//默认权限
};

struct c2
{
	int M_a;
};
int main() {
	c1 C1;
	c2 C2;
	C2.M_a = 10;
	system("pause");
	return 0;
}