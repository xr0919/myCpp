#include <iostream>
using namespace std;
#include <ctime>//���timeϵͳͷ�ļ�

//������

int main191()
{
	//������������ ����һֱ������һ�������
	srand((unsigned int)time(NULL));
	//���������
	int num = rand()%100 + 1; //rand()%100 ����0-99�����
	cout << num << endl;
	cout << "������,����" << endl;
	int ipt = 0;
	while (ipt != num)
	{
		cin >> ipt;
		if (ipt>num)
		{
			cout << "����" << endl;

		}
		else if (ipt < num)
		{
			cout << "��С" << endl;

		}
		else
		{
			cout << "bingo" << endl;
			break;//�˳�ѭ��
		}

	}

	system("pause");

	return 0;
}