//#include<iostream>
//#include<string>
//using namespace std;
////class calculator
////{
////public:
////	int getresult(string oper)
////	{
////		if (oper == "+") {
////			return m_num1 + m_num2;
////		}
////		else if (oper == "-") {
////			return m_num1 - m_num2;
////		}
////		else if (oper == "*") {
////			return m_num1 * m_num2;
////		}
////	}
////	int m_num1;
////	int m_num2;
////};
////void test1()
////{
////	calculator c;
////	c.m_num1 = 10;
////	c.m_num2 = 20;
////	cout << c.m_num1 << " + " << c.m_num2 << " = " << c.getresult("+") << endl;
////
////	cout << c.m_num1 << " - " << c.m_num2 << " = " << c.getresult("-") << endl;
////
////	cout << c.m_num1 << " * " << c.m_num2 << " = " << c.getresult("*") << endl;
////}
//
//
////利用多态
////实现计算器的的抽象类
//class AbstractCalculator
//{
//public:
//	
//	int getResult()
//	{
//		return 0;
//	}
//	int m_Num1;
//	int m_Num2;
//	
//};
//
//class AddCalculator:public AbstractCalculator
//{
//public:
//
//	int getResult()
//	{
//		return m_Num1+m_Num2;
//	}
//
//};
//
////减法计算器
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
////乘法计算器
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//
//void test02()
//{
//	//创建加法计算器
//	AbstractCalculator *abc = new AddCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;  //用完了记得销毁
//
//				 //创建减法计算器
//	abc = new SubCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//
//	//创建乘法计算器
//	abc = new MulCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//}
//
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}