#include <iostream>
using namespace std;


int main17()
{
	int a = 10;
	int b = 20;
	int c = 0;
	c = (a > b ? a : b);
	cout << "c= " << c << endl;
	//��Ŀ��������ص��Ǳ��������Լ�����ֵ
	(a > b ? a : b)=100;
	cout << "a= " << a << endl;//10
	cout << "b= "<< b << endl;//100

	system("pause");

	return 0;
}