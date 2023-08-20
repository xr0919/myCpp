#include <iostream>
using namespace std;

//if与switch区别
//switch结构清晰，执行效率高，但是只能判断整形或者字符型，不可以是一个区间

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
		break;//退出当前分支
	case 9:
		cout << "score = 9" << endl;
		break;//退出当前分支
	case 8:
		cout << "score = 8" << endl;
		break;//退出当前分支
	default:
		cout << "score < 8" << endl;
		break;
	}


	system("pause");

	return 0;
}