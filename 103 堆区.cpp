#include<iostream>
using namespace std;
int* func3()
{
	int* a = new int(10);
	return a;
}

int main3() {

	int *p = func3();

	cout << *p << endl;
	cout << *p << endl;

	system("pause");

	return 0;
}