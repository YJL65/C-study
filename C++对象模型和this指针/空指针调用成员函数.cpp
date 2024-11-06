#include <iostream>
using namespace std;
class Person {
public:
	void classname() {
		cout << "this is Person class" << endl;
	}
	void showpersonage() {
		//报错原因是因为传入的指针是为NULL
		if (this == NULL) {
			return;
		}
		cout << "age = " << m_age << endl;
	}
	int m_age;
};
void test01() {
	Person* p = NULL;
	p->classname();
	p->showpersonage();
}
int main(){
	test01();
	system("pause");
	return 0;
}