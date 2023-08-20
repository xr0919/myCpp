#include <iostream>
using namespace std;

//水仙花数-----获取每位数字
/*
	获取个位 153%10 = 3
	获取十位 153/10=15   15%10=5
	获取百位 153/100=1
*/

int main201()
{
	//打印所有三位数
	int num = 100;
	int a = 0;//个位
	int b = 0;//十位
	int c = 0;//百位
	while (num < 1000)
	{
		a = num % 10;
		b = num / 10 % 10;
		c = num / 100 % 10;

		if (a*a*a+b*b*b+c*c*c == num)
		{
			cout << num << endl;
			//break;
		}
		//cout << num << endl;
		num++;
	}



	system("pause");

	return 0;
}