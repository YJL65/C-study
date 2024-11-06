#include <iostream>
using namespace std;

class Person {
public:
    int m_a;
    int m_b;
    int* m_c;

    Person(int a, int b, int c) : m_a(a), m_b(b) {
        m_c = new int(c);
    }
    Person() : m_a(0), m_b(0) {}
    ~Person() {
        if (m_c != NULL) {
            delete m_c;
            m_c = NULL;
            cout <<"内存已释放" << endl;
        }
    }
    Person* operator+(const Person& p) const {
        Person *temp = new Person();
        temp->m_a = p.m_a + m_a;
        temp->m_b = p.m_b + m_b;
        temp->m_c = new int( * p.m_c + *m_c);
        cout << "m_c= " << *temp->m_c << endl;
        return temp;
    }

    Person& operator=(const Person& obj2) {
        m_a = obj2.m_a;
        m_b = obj2.m_b;
        m_c = new int( * obj2.m_c);
        return *this;
    }

    void print() const {
        cout << "m_a=" << m_a << " " << "m_b=" << m_b << " " << "m_c=" << *m_c << endl;
    }
};

Person *operator+(const Person& p, int num) {
    Person *temp =new  Person();
    temp->m_a = p.m_a + num;
    temp->m_b = p.m_b + num;
    temp->m_c = new int( * p.m_c + num);
    return temp;
}

int main() {
    Person p1(10, 20, 30);
    Person p2(20, 30, 40);
    Person *p3 = p1 + 20;
    cout << "m_a=" << p3->m_a << " " << "m_b=" << p3->m_b << " " << "m_c=" << *p3->m_c << endl;
    if (p3 != NULL) {
        delete p3;
        p3 = NULL;
        cout << "内存已经释放" << endl;
    }
    system("pause");
    return 0;
    
}
