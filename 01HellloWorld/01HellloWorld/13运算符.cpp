#include <iostream>
using namespace std;


int main13()
{
	//�Ӽ�����
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl; //3 ����������������Ȼ����������С������ȥ��

	int a2 = 10;
	int b2 = 20;
	cout << a2 / b2 << endl; //0 ����������������Ȼ����������С������ȥ��

	/*int a3 = 10;
	int b3 = 0;
	//cout << a3 / b3 << endl; //���� ��������Ϊ0*/
 
	//����С���������
	double d1 = 0.5;
	double d2 = 0.22;
	cout << d1 / d2 << endl; //������Ҳ������С��
	//ȡģ����ʱ ��������Ϊ0
	//����С��������ȡģ����


	//------------------------------------------------------------------------------
	//ȡģ
	cout << "ȡģ" << endl;
	cout << a1 % b1 << endl; //1


	system("pause");

	return 0;
}