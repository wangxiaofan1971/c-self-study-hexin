#include<iostream>
using namespace std;
class Person {
public:

	//传统方式初始化
	//Person(int a, int b, int c) {
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}
	Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {}
	int m_A;
	int m_B;
	int m_C;
};
void test01()
{
	Person p(10, 20, 30);
	cout << p.m_A << endl;
	cout << p.m_B << endl;
	cout << p.m_C << endl;
}
int main()
{
	test01();

	system("pause");
	return 0;
}