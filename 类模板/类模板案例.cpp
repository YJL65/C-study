#include <iostream>
using namespace std;
#include"MyArray.hpp"
void printArray(MyArray <int>& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr[i] << endl;		
	}
}
void test01() {
	MyArray <int> arr(5);
	/*MyArray <int> arr1(arr);
	MyArray <int> arr2(100);
	arr2 = arr;*/
	for (int i = 0; i < 5; i++) {
		arr.Push_Back(i);
	}
	cout << "arr1的打印输出：" << endl;
	printArray(arr);
	arr.Pop_Back();
	cout << arr.getSize() << endl;
}


class Person {
public:
	Person() {};
	Person(string name, int age) {
		this->m_Age = age;
		this->m_Name = name;
	}
	string m_Name;
	int m_Age;
};
void printArray(MyArray <Person>& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr[i].m_Age << endl;
		cout << arr[i].m_Name << endl;
	}
}
void test02() {
	MyArray<Person> arr(10);
	Person p1("haopa", 123);
	Person p2("inia", 123);
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	printArray(arr);
}

int main() {
	test02();

	system("pause");
	return 0;
}