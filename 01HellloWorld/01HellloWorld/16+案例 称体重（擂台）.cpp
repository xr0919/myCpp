#include <iostream>
using namespace std;

//µ¥ĞĞ×¢ÊÍ

int main161()
{
	int a1 = 0;
	int a2 = 0;
	int a3 = 0;
	cout << "input a1: " << endl;
	cin >> a1;
	cout << "input a2: " << endl;
	cin >> a2;
	cout << "input a3: " << endl;
	cin >> a3;
	cout << "a1: " << a1 << endl;
	cout << "a2: " << a2 << endl;
	cout << "a3: " <<a3<< endl;

	//
	if (a1 > a2)
	{
		if (a1 > a3)
		{
			cout << "a1!" << endl;
		}
		else
		{
			cout << "a3!" << endl;
		}
	}
	else
	{
		if (a2 > a3)
		{
			cout << "a2!" << endl;
		}
		else
		{
			cout << "a3!" << endl;
		}
	}




	system("pause");

	return 0;
}