#include<iostream>
using namespace std;
//函数占位参数 ，占位参数也可以有默认参数
//void func(int a, int) {
//	cout << "this is func" << endl;
//}

//函数占位参数 ，占位参数也可以有默认参数
void func(int a, int=0) {
	cout << "this is func" << endl;
}
int main2() {

	func(10); //占位参数必须填补

	system("pause");

	return 0;
}