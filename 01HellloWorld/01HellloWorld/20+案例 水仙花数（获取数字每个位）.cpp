#include <iostream>
using namespace std;

//ˮ�ɻ���-----��ȡÿλ����
/*
	��ȡ��λ 153%10 = 3
	��ȡʮλ 153/10=15   15%10=5
	��ȡ��λ 153/100=1
*/

int main201()
{
	//��ӡ������λ��
	int num = 100;
	int a = 0;//��λ
	int b = 0;//ʮλ
	int c = 0;//��λ
	while (num < 1000)
	{
		a = num % 10;
		b = num / 10 % 10;
		c = num / 100 % 10;

		if (a*a*a+b*b*b+c*c*c == num)
		{
			cout << num << endl;
			//break;
		}
		//cout << num << endl;
		num++;
	}



	system("pause");

	return 0;
}