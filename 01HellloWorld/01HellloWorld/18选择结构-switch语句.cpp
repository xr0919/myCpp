#include <iostream>
using namespace std;

//if��switch����
//switch�ṹ������ִ��Ч�ʸߣ�����ֻ���ж����λ����ַ��ͣ���������һ������

int main18()
{

	cout << "input" << endl;
	int score = 0;
	cin >> score;
	cout << "score = "<<score << endl;
	switch (score)
	{
	case 10:
		cout << "score = 10" << endl;
		break;//�˳���ǰ��֧
	case 9:
		cout << "score = 9" << endl;
		break;//�˳���ǰ��֧
	case 8:
		cout << "score = 8" << endl;
		break;//�˳���ǰ��֧
	default:
		cout << "score < 8" << endl;
		break;
	}


	system("pause");

	return 0;
}