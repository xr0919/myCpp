#include <iostream>
using namespace std;

//单行注释

/*多行注释*/

int main15()
{
	// =
	int a = 10;
	a = 100;
	cout << "a = " << a << endl;

	// +=
	a = 10;
	a += 2;
	cout << "a = " << a << endl;

	// -=
	a = 10;
	a -= 2;
	cout << "a = " << a << endl;

	// *=
	a = 10;
	a *= 2;
	cout << "a = " << a << endl; // 20

	// /=
	a = 10;
	a /= 2;
	cout << "a = " << a << endl;

	// %=
	a = 10;
	a %= 2;
	cout << "a = " << a << endl; // 0

	//---------------------------------------------
	cout << "-------比较运算符--------" << endl;
	//比较运算符
	//==
	int a1 = 10;
	int b1 = 20;
	cout << (a1==b1) << endl; // 0

	//!=
	cout << (a1 != b1) << endl; 

	//<
	cout << (a1 < b1) << endl;

	//>=
	cout << (a1 >= b1) << endl;

	//---------------------------------------------
	cout << "-------逻辑运算符--------" << endl;
	//逻辑运算符
	//! 非
	int a2 = 10;
	int b2 = 10;
	int c2 = 0;
	int d2 = 0;
	cout << !a2 << endl; // 0
	cout << !!a2 << endl; // 1

	//&& 逻辑与： 同真为真，其余为假
	cout << (a2 && b2) << endl; //1
	cout << (a2 && c2) << endl; //0 

	//|| 逻辑或: 同假为假，其余为真
	cout << (a2 || b2) << endl; //1
	cout << (a2 || c2) << endl; //1
	cout << (d2 || c2) << endl; //0


	system("pause");

	return 0;
}