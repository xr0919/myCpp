#include <iostream>
using namespace std;

//单行注释

/*多行注释*/

int main14()
{
	//1.前置递增
	int a = 10;
	++a;
	cout << "a= " << a << endl;

	//2.后置递增
	int b = 10;
	b++;
	cout << "b= " << b << endl;

	//3.前置后置区别
	//前置 先让变量+1 然后进行表达式运算
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << "a2 = " << a2 << endl; //11
	cout << "b2 = " << b2 << endl; //110

	//后置 先进行表达式运算 然后让变量+1
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << "a3 = " << a3 << endl; //11
	cout << "b3 = " << b3 << endl; //100

	system("pause");

	return 0;
}