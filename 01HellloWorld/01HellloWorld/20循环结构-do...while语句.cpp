#include <iostream>
using namespace std;

//do while和while区别
//do会先执行一次循环语句

int main20()
{
	//打印0-9数字
	/*int num = 0;
	while (num < 10)//()填入循环的条件 1为死循环
	{
		cout << num << endl;

		num++;
	}*/
	int num = 0;
	do
	{
		cout << num << endl;
		num++;

	} while (num < 10);

	system("pause");

	return 0;
}