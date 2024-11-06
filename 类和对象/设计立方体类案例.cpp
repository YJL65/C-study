#include <iostream>
using namespace std;

/// <summary>
///1.创建立方体类
/// 2..设计属性
/// 3.设计行为 分别获取立方体的面积和体积
/// 4.分别利用全局函数和成员函数 判断两个立方体是否相等
/// </summary>
class Cube {
	int m_H;
	int m_L;
	int m_W;
public:
	void seth(int h) {
		m_H = h;
	}
	int geth() {
		return m_H;
	}
	void setL(int l) {
		m_L = l;
	}
	int getL() {
		return m_L;
	}
	void  setw(int w) {
		m_W = w;
	}
	int getw() {
		return m_W;
	}
	int getarea() {
		return 2 * m_L * m_H + 2 * m_L * m_W + 2 * m_H * m_W;
	}
	int calculate() {
		return m_L * m_H * m_W;
	}
	bool issameclass(Cube &c) {
		if (m_L == c.getL())
		{
			return true;
		}
	}
};

bool issame(Cube &c1, Cube &c2) {
	if (c1.getL() == c2.getL()){
		return true;
	}
	return false;
}

int main() {
	Cube b1;
	b1.seth(10);
	b1.setL(10);
	b1.setw(10);
	
	cout << b1.getarea() << " " << b1.calculate() << endl;
	Cube c2;
	c2.seth(10);
	c2.setL(10);
	c2.setw(10);
	if (issame(b1,c2) ){
		cout << "相等" << endl;
	}
	if (b1.issameclass(c2)) {
		cout << "相等" << endl;
	}
	system("pause");
	return 0;
}