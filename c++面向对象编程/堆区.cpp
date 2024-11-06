#include <iostream>
using namespace std;
//堆区：堆在内存中位于BSS区和栈区之间。一般由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收。
int* func() {
	
	//new返回是该数据类型的指针
	 int *p =new int(10);
	 return p;
}

int main() {
	//在堆区开辟数据
	int* p = func();
	cout << *p << endl;//堆区的数据由程序员管理开辟和释放
	system("pause");
	return 0;
}