#include <iostream>
using namespace std;

template<class T>
void myswap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template<class T>
void sort(T arr[], int len) {
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++) {
			if (arr[max] < arr[j]) {
				max = j;
			}
		}
		if (max != i) {
			myswap(arr[max], arr[i]);
		}
	}
}
template<class T>
void print(T arr[], int len) {
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}
void test01() {
	char charArr[] = "adad";
	int num = sizeof(charArr) / sizeof(char);
	sort(charArr, num);
	print(charArr, num);
}
void test02() {
	int  intArr[] = {6,1,15,3,4 };
	int num = sizeof(intArr) / sizeof(int);
	sort(intArr, num);
	print(intArr, num);
}
int main() {
	test02();

	system("pause");
	return 0;
}