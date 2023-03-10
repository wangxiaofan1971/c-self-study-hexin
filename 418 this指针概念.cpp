//#include<iostream>
//using namespace std;
////通过4.3.1我们知道在C++中成员变量和成员函数是分开存储的
////
////每一个非静态成员函数只会诞生一份函数实例，也就是说多个同类型的对象会共用一块代码
////
////那么问题是：这一块代码是如何区分那个对象调用自己的呢？
////
////
////
////c++通过提供特殊的对象指针，this指针，解决上述问题。**this指针指向被调用的成员函数所属的对象**
////
////
////
////this指针是隐含每一个非静态成员函数内的一种指针
////
////this指针不需要定义，直接使用即可
////
////
////
////this指针的用途：
////
////*  当形参和成员变量同名时，可用this指针来区分
//class person
//{
//public:
//	person(int age)
//	{
//		this->age = age;//。**this指针指向被调用的成员函数所属的对象**
//	}
//	person  personaddage(person&p)
//	{
//		this->age += p.age;
//		return *this;//*  在类的非静态成员函数中返回对象本身，可使用return *this
//	}
//	int age;
//};
//void test1()
//{
//	person p1(18);
//	cout << p1.age << endl;
//}
//
//void test2()
//{
//	person p2(18);
//	p2.personaddage(p2).personaddage(p2);//链式编程思想
//	cout << p2.age << endl;
//}
//int main()
//{
//	test2();
//	system("pause");
//	return 0;
//}