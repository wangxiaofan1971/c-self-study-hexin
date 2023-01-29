//#include<iostream>
//using namespace std;
////**案例描述：**
////
////制作饮品的大致流程为：煮水 - 冲泡 - 倒入杯中 - 加入辅料
////
////
////
////利用多态技术实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶
//class abstractdrinking
//{
//public:
//	virtual void Boil() = 0;
//	virtual void Brew() = 0;
//	virtual void PourInCup() = 0;
//	virtual void PutSomething() = 0;
//	void makedrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//
//};
//class coffee :public abstractdrinking
//{
//public:
//	//烧水
//	virtual void Boil() {
//		cout << "煮农夫山泉!" << endl;
//	}
//	//冲泡
//	virtual void Brew() {
//		cout << "冲泡咖啡!" << endl;
//	}
//	//倒入杯中
//	virtual void PourInCup() {
//		cout << "将咖啡倒入杯中!" << endl;
//	}
//	//加入辅料
//	virtual void PutSomething() {
//		cout << "加入牛奶!" << endl;
//	}
//};
//class tea :public abstractdrinking
//{
//public:
//	//烧水
//	virtual void Boil() {
//		cout << "煮自来水!" << endl;
//	}
//	//冲泡
//	virtual void Brew() {
//		cout << "冲泡茶叶!" << endl;
//	}
//	//倒入杯中
//	virtual void PourInCup() {
//		cout << "将茶水倒入杯中!" << endl;
//	}
//	//加入辅料
//	virtual void PutSomething() {
//		cout << "加入枸杞!" << endl;
//	}
//};
//
////业务函数
//void DoWork(abstractdrinking* drink) 
//{
//	drink->makedrink();
//	delete drink;
//}
//
//void test01() {
//	DoWork(new coffee);
//	cout << "--------------" << endl;
//	DoWork(new tea);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}