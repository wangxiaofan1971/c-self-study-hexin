#include<iostream>
using namespace std;
int * func2()
{
	int a = 10;
	return &a;
}

int main2() {

	int *p = func2();

	cout << *p << endl;
	cout << *p << endl;

	system("pause");

	return 0;
}