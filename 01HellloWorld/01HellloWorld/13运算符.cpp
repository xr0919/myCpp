#include <iostream>
using namespace std;


int main13()
{
	//加减运算
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl; //3 两个整数相除结果依然是整数，将小数部分去除

	int a2 = 10;
	int b2 = 20;
	cout << a2 / b2 << endl; //0 两个整数相除结果依然是整数，将小数部分去除

	/*int a3 = 10;
	int b3 = 0;
	//cout << a3 / b3 << endl; //报错 除数不能为0*/
 
	//两个小数可以相除
	double d1 = 0.5;
	double d2 = 0.22;
	cout << d1 / d2 << endl; //运算结果也可以是小数
	//取模运算时 除数不能为0
	//两个小数不能做取模运算


	//------------------------------------------------------------------------------
	//取模
	cout << "取模" << endl;
	cout << a1 % b1 << endl; //1


	system("pause");

	return 0;
}