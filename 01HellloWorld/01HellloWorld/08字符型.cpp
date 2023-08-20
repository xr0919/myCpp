#include <iostream>
using namespace std;

//单行注释

/*多行注释*/

int main8()
{
	//1.字符型变量创建方式
	char ch = 'a';

	cout << "a : " << ch << endl;
	cout << "char占用内存： " << sizeof(char) << endl;

	//3.常见错误
	//char ch = "b";//双引号
	// char ch = 'afavadv'; 

	system("pause");

	return 0;
}