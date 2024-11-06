#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void myPrint(int val) {
	cout << val << endl;
}
void test01() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	//第一种
	//vector<int>::iterator ibegin = v.begin();//起始迭代器，指向容器中第一个元素
	//vector<int>::iterator iend= v.end();//结束...,指向容器中最后一个元素的下一个位置
	//while (ibegin!=iend) {
	//	cout << *ibegin << endl;
	//	ibegin++;
	//}
	//第二种
	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}*/
	//第三种
	for_each(v.begin(), v.end(),myPrint);
}

int main() {

	test01();
	system("pause");
	return 0;
}