#include <iostream>
using namespace std;

//7的倍数  num%7 == 0
//个位有7 num%10 == 7
//十位有7 num / 10 % 10 == 7

int main211()
{
	for (int i = 1; i < 100; i++)
	{
		if (i % 7 == 0 || i % 10 == 7 || i / 10 % 10 == 7) {
			cout << "you find it: " << i << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
	//cout << "hello C++" << endl;

	system("pause");

	return 0;
}