#include <iostream>
using namespace std;

//常量定义方式
//1. #define 宏常量
//2. const 修饰的变量

//1.#define 宏常量
#define Day 7

int main4() {

	//Day = 14; //报错day是常量
	cout << "total day " << Day << endl;

	//2.const修饰的变量
	const int month = 12;
	//month = 24; // 报错，const修饰的变量也称为常量
	cout << "total month " << month << endl;

	system("pause");

	return 0;
}