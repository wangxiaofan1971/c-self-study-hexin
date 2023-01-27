#include<iostream>
using namespace std;
class myinteger
{
	friend ostream & operator << (ostream &cout, myinteger myint);
public:
	myinteger()
	{
		m_num = 0;
	}
	myinteger& operator++()
	{
		m_num++;
		return *this;
	}
	myinteger operator++(int)
	{
		myinteger tmp=*this;
		this->m_num++;
		return tmp;
	}
	//注意：int在括号是为了向编译器说明这是一个后缀形式，而不是表示整数。

	//	前缀形式重载调用Check operator++()，后缀形式重载调用operator++（int）
private:
	int m_num;
};

ostream & operator << (ostream &cout, myinteger myint)
{
	cout << myint.m_num;
	return cout;
}
void test01()
{
	myinteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}
void test02()
{
	myinteger myint;
	cout << (myint++)++ << endl;
	cout << myint << endl;
}

int main()
{
	test02();
	system("pause");
	return 0;
}