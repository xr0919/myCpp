#include <iostream>
using namespace std;

//����ע��

/*����ע��*/

int main14()
{
	//1.ǰ�õ���
	int a = 10;
	++a;
	cout << "a= " << a << endl;

	//2.���õ���
	int b = 10;
	b++;
	cout << "b= " << b << endl;

	//3.ǰ�ú�������
	//ǰ�� ���ñ���+1 Ȼ����б��ʽ����
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << "a2 = " << a2 << endl; //11
	cout << "b2 = " << b2 << endl; //110

	//���� �Ƚ��б��ʽ���� Ȼ���ñ���+1
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << "a3 = " << a3 << endl; //11
	cout << "b3 = " << b3 << endl; //100

	system("pause");

	return 0;
}