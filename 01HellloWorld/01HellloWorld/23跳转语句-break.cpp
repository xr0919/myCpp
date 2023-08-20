#include <iostream>
using namespace std;

//

int main23()
{
	//switch
	int num = 0;
	cin >> num;
	switch (num)
	{
	case 1:
		cout << "1.easy" << endl;
		break;
	case 2:
		cout << "2.normal" << endl;
		break;
	case 3:
		cout << "3.hard" << endl;
		break;
	default:
		break;
	}

	//for
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
		if (i == 5) {
			break;
		}
	}

	//Ç¶Ì×
	for (int i = 0; i < 5; i++)
	{
		cout << "* ";
		for (int j = 0; j < 5; j++)
		{
			if (j == 2)
			{
				break;
			}
			cout << "* ";
			
		}
		cout << endl;
	}
	system("pause");

	return 0;
}