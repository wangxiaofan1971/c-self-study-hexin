//#include<iostream>
//using namespace std;
////在C++中，类内的成员变量和成员函数分开存储
//class person
//{
//	int m_a;//非静态成员变量 属于类的对象上
//	static int m_b;//静态成员变量 不属于类的对象上
//	void func() {};//非静态成员函数 不属于类的对象上
//	static void func2() {};//静态成员函数 不属于类的对象上
//};
//int person::m_b = 10;
////空对象占用空间1；为了区分空对象占内存的位置；
//void test01()
//{
//	person p1;
//	cout << sizeof(p1) << endl;
//}
////只有非静态成员变量才属于类的对象上
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}