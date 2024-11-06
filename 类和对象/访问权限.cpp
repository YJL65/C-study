#include <iostream>
using namespace std;
//访问权限：公共权限（public)  类内可以访问，类外也可以访问 
//保护权限(protected)			类内可以访问，类外不可以访问   儿子可以访问父亲中的保护内容
//私有权限(private)			类内可以访问，类外不可以访问		儿子不可以访问父亲的私有内容

class person
{
public:
	string name;
protected:
	string car;
private:
	string password;
public:
	void func()
	{
		name = "zhangdan";
		car = "拖拉机";
		password = 1564;
	}
};

int main() {
	person p1;
	p1.name = "李四";
	p1.func();
	/*p1.car = "asada";*/
	/*p1.password = 1654;*/
	system("pause");
	return 0;
}