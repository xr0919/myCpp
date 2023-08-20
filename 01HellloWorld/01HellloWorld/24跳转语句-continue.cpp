#include <iostream>
using namespace std;

//

int main24()
{
	for (int i = 0; i < 10; i++)
	{
		//如果是奇数就输出，偶数不输出
		if (i % 2 == 0) {
			continue;//筛选条件，执行到此就不再向下执行，执行下一次循环，不退出循环
		}
		cout << i << endl;

	}
	//cout << "hello C++" << endl;

	system("pause");

	return 0;
}