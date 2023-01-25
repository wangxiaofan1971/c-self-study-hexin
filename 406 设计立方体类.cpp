//#include<iostream>
//using namespace std;
////**练习案例1：设计立方体类**
////
////设计立方体类(Cube)
////
////求出立方体的面积和体积
////
////分别用全局函数和成员函数判断两个立方体是否相等。
//int calarea(int a)
//{
//	return 6 * a*a;
//}
//
//int calvol(int a)
//{
//	return a*a*a;
//}
//class cube
//{
//public:
//	void seta(int xa,int xb,int xc)
//	{
//		a = xa;
//		b = xb;
//		c = xc;
//	}
//	int geta()
//	{
//		return a;
//	}
//	int getb()
//	{
//		return b;
//	}
//	int getc()
//	{
//		return c;
//	}
//
//	int area()
//	{
//		return 2*(a*b+a*c+b*c);
//	}
//
//	int vol()
//	{
//		return a*b*c;
//	}
//	bool issamebyclass(cube &C)
//	{
//		if (a == C.geta() && b == C.getb() && c == C.getc())
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//private:
//	int a;
//	int b;
//	int c;
//};
//bool issame(cube &c1, cube &c2)
//{
//	if (c1.geta() == c2.geta() && c1.getb() == c2.getb() && c1.getc() == c2.getc())
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//int main()
//{
//	cube c1;
//	c1.seta(3,4,5);
//	cout << "c1成员函数面积" << c1.area() << endl;
//	cout << "c1成员函数体积" << c1.vol() << endl;
//
//	cube c2;
//	c2.seta(4,3,5);
//
//	cout << "c2成员函数面积" << c2.area() << endl;
//	cout << "c2成员函数体积" << c2.vol() << endl;
//
//
//
//	cout << "c1全局函数面积" << calarea(c1.geta()) << endl;
//	cout << "c1全局函数体积" << calvol(c1.geta()) << endl;
//
//	cout << "c2全局函数面积" << calarea(c2.geta()) << endl;
//	cout << "c2全局函数体积" << calvol(c2.geta()) << endl;
//
//	bool ret = issame(c1, c2);
//	if (ret)
//	{
//		cout << "相等" << endl;
//	}
//	else 
//	{
//		cout << "不相等" << endl;
//	}
//	bool retbyclass = c1.issamebyclass(c2);
//	if (retbyclass)
//	{
//		cout << "相等";
//	}
//	else
//	{
//		cout << "不相等";
//	}
//
//	system("pause");
//	return 0;
//}