#include <iostream>
using namespace std;

//数组
/*
	数组特点：
	放在一块连续的内存空间中
	数组中每个元素都是相同数据类型

	1.数据类型 数组名[ 数组长度 ]；
	2.数据类型 数组名[ 数组长度 ] = { 值1， 值2 ...}；
	3.数据类型 数组名[ ] = { 值1， 值2 ...}；
*/

int main()
{
	//1.数据类型 数组名[数组长度]；
	int arr1[5];

	arr1[0] = 10;
	arr1[1] = 20;
	arr1[2] = 30;
	arr1[3] = 40;
	arr1[4] = 50;
	cout << arr1[0] << endl;

	//2.数据类型 数组名[数组长度] = { 值1， 值2 ... }；
	int arr2[5] = {10,20,30}; //用0填充未填写完的数据
	cout << arr2[1] << endl;
	//循环输出数组
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << endl;
	}

	//3.数据类型 数组名[] = { 值1， 值2 ... }；
	int arr3[] = { 90,80,70,60,50 };



	system("pause");

	return 0;
}