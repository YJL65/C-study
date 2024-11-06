#include <iostream>
using namespace std;
void swap(int a, int b) {
	int tem = a;
	a = b;
	b = tem;
	cout << a << " " << b << endl;
}
void swap2(int *a, int *b) {
	int tem = *a;
	*a = *b;
	*b = tem;
}
void swap3(int &a, int& b) {//引用传参
	int tem = a;
	a = b;
	b = tem;
}
int main() {
	int a = 10;
	int b = 20;
	swap(a, b);
	/*cout << a << " " << b << endl;
	swap2(&a, &b);*/
	cout << a << " " << b << endl;
	swap3(a, b);//引用传递，形参会修饰实参的
	cout << a << " " << b << endl;
	system("pause");
	return 0;
}