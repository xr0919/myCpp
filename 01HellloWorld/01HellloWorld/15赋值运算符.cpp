#include <iostream>
using namespace std;

//����ע��

/*����ע��*/

int main15()
{
	// =
	int a = 10;
	a = 100;
	cout << "a = " << a << endl;

	// +=
	a = 10;
	a += 2;
	cout << "a = " << a << endl;

	// -=
	a = 10;
	a -= 2;
	cout << "a = " << a << endl;

	// *=
	a = 10;
	a *= 2;
	cout << "a = " << a << endl; // 20

	// /=
	a = 10;
	a /= 2;
	cout << "a = " << a << endl;

	// %=
	a = 10;
	a %= 2;
	cout << "a = " << a << endl; // 0

	//---------------------------------------------
	cout << "-------�Ƚ������--------" << endl;
	//�Ƚ������
	//==
	int a1 = 10;
	int b1 = 20;
	cout << (a1==b1) << endl; // 0

	//!=
	cout << (a1 != b1) << endl; 

	//<
	cout << (a1 < b1) << endl;

	//>=
	cout << (a1 >= b1) << endl;

	//---------------------------------------------
	cout << "-------�߼������--------" << endl;
	//�߼������
	//! ��
	int a2 = 10;
	int b2 = 10;
	int c2 = 0;
	int d2 = 0;
	cout << !a2 << endl; // 0
	cout << !!a2 << endl; // 1

	//&& �߼��룺 ͬ��Ϊ�棬����Ϊ��
	cout << (a2 && b2) << endl; //1
	cout << (a2 && c2) << endl; //0 

	//|| �߼���: ͬ��Ϊ�٣�����Ϊ��
	cout << (a2 || b2) << endl; //1
	cout << (a2 || c2) << endl; //1
	cout << (d2 || c2) << endl; //0


	system("pause");

	return 0;
}