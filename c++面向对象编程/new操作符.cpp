#include <iostream>
using namespace std;
int* func() {
	//利用new关键字开辟数据
	//指针本质是个局部变量，放在栈上，指针保存的数据是放在堆区

	int* p = new int(10);
	return p;
}
void test() {

	int* arr = new int[10];//10代表数组有10个元素
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	delete[] arr;//释放堆区数组的时候要加[];
}
int main() {
	//在堆区开辟数据
	test();
	int* p = func();
	cout << *p << endl;
	system("pause");
	return 0;
}