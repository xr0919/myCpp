#include <iostream>
using namespace std;


int main16()
{
	int score = 0;
	cout << "input: " << endl;
	cin >> score;
	cout << "score: " << score << endl;
	//判断 if后面不要加分号；
	if (score > 600)
	{
		cout << "cong" << endl;
		//嵌套清华大学
		if (score >650)
		{
			cout << "ur sick" << endl;
		}
		else
		{
			cout << "wonderful" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "it is OK" << endl;
	}
	else 
	{
		cout << "sry" << endl;
	}


	


	system("pause");

	return 0;
}