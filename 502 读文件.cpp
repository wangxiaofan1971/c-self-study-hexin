#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main2()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败！！";
	}
	//char buf[1024] = {0};
	//while (ifs>>buf)
	//{
	//	cout << buf << endl;
	//}

	//char buf[1024] = { 0 };
	//	while (ifs.getline(buf,sizeof(buf)))
	//	{
	//		cout << buf << endl;
	//	}

	//string buf;
	//while (getline(ifs,buf))
	//{
	//	cout << buf << endl;
	//}

	char c;
	while ((c = ifs.get()) != EOF) //end of file
	{
		cout << c;
	}

	ifs.close();

	ifs.close();
	system("pause");
	return 0;
}