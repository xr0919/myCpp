#include <iostream>
using namespace std;

//

int main24()
{
	for (int i = 0; i < 10; i++)
	{
		//����������������ż�������
		if (i % 2 == 0) {
			continue;//ɸѡ������ִ�е��˾Ͳ�������ִ�У�ִ����һ��ѭ�������˳�ѭ��
		}
		cout << i << endl;

	}
	//cout << "hello C++" << endl;

	system("pause");

	return 0;
}