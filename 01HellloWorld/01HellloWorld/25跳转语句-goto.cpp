#include <iostream>
using namespace std;

//goto 少用 不推荐

int main25()
{

	cout << "1.hello C++" << endl;
	cout << "2.hello C++" << endl;
	goto FLAG;
	cout << "3.hello C++" << endl;
	cout << "4.hello C++" << endl;
	FLAG:
	cout << "5.hello C++" << endl;

	system("pause");

	return 0;
}