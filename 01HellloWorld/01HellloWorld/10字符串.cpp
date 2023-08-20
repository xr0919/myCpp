#include <iostream>
using namespace std;
//#include<string>

int main10()
{
	//1.C风格字符串
	//注意事项 char 字符串名[]； 等号后面要用双引号
	char str[] = "hello world";

	cout << str << endl;
	//2.C++风格字符串
	//要包含一个头文件 #include<string>
	string str2 = "hello world2";
	cout << str2 << endl;


	system("pause");

	return 0;
}