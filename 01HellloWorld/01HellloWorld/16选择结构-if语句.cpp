#include <iostream>
using namespace std;


int main16()
{
	int score = 0;
	cout << "input: " << endl;
	cin >> score;
	cout << "score: " << score << endl;
	//�ж� if���治Ҫ�ӷֺţ�
	if (score > 600)
	{
		cout << "cong" << endl;
		//Ƕ���廪��ѧ
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