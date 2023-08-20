#include <iostream>
using namespace std;


int main12()
{
	//1.整形
	int a = 0;
	cout << "input: " << endl;
	cin >> a;
	cout << "a = " << a << endl;

	//2.浮点型
	float f = 3.14f;
	cout << "input f: " << endl;
	cin >> f;
	cout << "f = " << f << endl;

	//3.字符型
	char ch = 'a';
	cout << "input ch: " << endl;
	cin >> ch;
	cout << "ch = " << ch << endl;

	//4.字符串型
	string str = "hello";
	cout << "input str: " << endl;
	cin >> str;
	cout << "str = " << str << endl;

	//5.布尔类型
	bool flag = false;
	cout << "input bool: " << endl;
	cin >> flag;
	cout << "flag = " << flag << endl;

	system("pause");

	return 0;
}