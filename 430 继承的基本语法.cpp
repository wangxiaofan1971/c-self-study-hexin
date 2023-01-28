//#include<iostream>
//using namespace std;
////class java
////{
////public:
////	void header()
////	{
////		cout << "首页、公开课、登录、注册...(公共头部)" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
////	}
////	void left()
////	{
////		cout << "jave、python、c++...(公共分类列表)";
////	}
////	void content()
////	{
////		cout << "java学科视频" << endl;
////	}
////};
////class cpp
////{
////public:
////	void header()
////	{
////		cout << "首页、公开课、登录、注册...(公共头部)" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
////	}
////	void left()
////	{
////		cout << "jave、python、c++...(公共分类列表)";
////	}
////	void content()
////	{
////		cout << "cpp学科视频" << endl;
////	}
////};
//
//
//class basepage
//{
//public:
//		void header()
//		{
//			cout << "首页、公开课、登录、注册...(公共头部)" << endl;
//		}
//		void footer()
//		{
//			cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//		}
//		void left()
//		{
//			cout << "jave、python、c++...(公共分类列表)";
//		}
//};
////
////继承的好处： == 可以减少重复的代码 ==
////
////class A : public B;
////
////A 类称为子类 或 派生类
////
////B 类称为父类 或 基类
//
//class java :public basepage
//{
//public:
//	void content()
//	{
//		cout << "java学科视频" << endl;
//	}
//};
//
//class cpp :public basepage
//{
//public:
//	void content()
//	{
//		cout << "cpp学科视频" << endl;
//	}
//};
//
//
//
//void test1()
//{
//	cout << "java下载视频页面如下：" << endl;
//	java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "--------------------------------"<<endl;
//	cout << "cpp下载视频页面如下：" << endl;
//	cpp cp;
//	cp.header();
//	cp.footer();
//	cp.left();
//	cp.content();
//
//
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}