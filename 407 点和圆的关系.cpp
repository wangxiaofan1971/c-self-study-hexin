//#include<iostream>
//#include<string>
//using namespace std;
//class point
//{
//public:
//	void setpx(int PX)
//	{
//		px = PX;
//	}
//	void setpy(int PY)
//	{
//		py = PY;
//	}
//	int getpx()
//	{
//		return px;
//	}
//	int getpy()
//	{
//		return py;
//	}
//
//
//private:
//	int px;
//	int py;
//};
//
//class circle
//{
//public:
//	void setox(int OX)
//	{
//		ox = OX;
//	}
//	void setoy(int OY)
//	{
//		oy = OY;
//	}
//	void setr(int R)
//	{
//		r = R;
//	}
//	int getox()
//	{
//		return ox;
//	}
//	int getoy()
//	{
//		return oy;
//	}
//	int getr()
//	{
//		return r;
//	}
//private:
//	int ox;
//	int oy;
//	int r;
//	point center;
//};
//int main()
//{
//	circle c1;
//	c1.setox(0);
//	c1.setoy(0);
//	c1.setr(3);
//	point p1;
//	p1.setpx(2);
//	p1.setpy(2);
//
//	int dis = (p1.getpx() - c1.getox())*(p1.getpx() - c1.getox()) + (p1.getpy() - c1.getoy()) *(p1.getpy() - c1.getoy());
//	if (dis > c1.getr()*c1.getr())
//	{
//		cout << "点在圆外" << endl;
//	}
//	else if (dis < c1.getr()*c1.getr())
//	{
//		cout << "点在圆内" << endl;
//	}
//	else
//	{
//		cout << "点在圆上" << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}