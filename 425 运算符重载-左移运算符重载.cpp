//#include<iostream>
//using namespace std;
//class person
//{
//public:
//	person(int a, int b);
//	friend ostream& operator<<(ostream &cout, person &p);
//	//void operator<<(person&p)成员函数 实现不了  p << cout 不是我们想要的效果
//private:
//	int m_a;
//	int m_b;
//};
//
//person::person(int a, int b)
//{
//	this->m_a = a;
//	this->m_b = b;
//}
//ostream& operator<<(ostream &cout,person &p)
//{
//	cout << "m_a" << p.m_a << "m_b" << p.m_b;
//	return cout;
//}
//void test1()
//{
//	person p(10,10);
//	//cout << p.m_a << endl;
//	//cout << p.m_b << endl;
//	cout << p << endl;
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}