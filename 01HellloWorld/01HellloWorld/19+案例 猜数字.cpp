#include <iostream>
using namespace std;
#include <ctime>//添加time系统头文件

//猜数字

int main191()
{
	//添加随机数种子 否则一直都是那一个随机数
	srand((unsigned int)time(NULL));
	//生成随机数
	int num = rand()%100 + 1; //rand()%100 生成0-99随机数
	cout << num << endl;
	cout << "猜数字,输入" << endl;
	int ipt = 0;
	while (ipt != num)
	{
		cin >> ipt;
		if (ipt>num)
		{
			cout << "过大" << endl;

		}
		else if (ipt < num)
		{
			cout << "过小" << endl;

		}
		else
		{
			cout << "bingo" << endl;
			break;//退出循环
		}

	}

	system("pause");

	return 0;
}