#include <iostream>
using namespace std;


int main7()
{
	//1.单精度 float
	//2.双精度 double
	//默认情况输出一个销售，会显示6位有效数字， 小数点前的数字也算有效数字
	float f1 = 3.1415926f;//加f表示单精度
	double d1 = 3.1415926;

	cout << "f1 = " << f1 << endl;
	cout << "d1 = " << d1 << endl;

	//科学计数法（少用）
	float f2 = 3e2; //3*10^2

	system("pause");

	return 0;
}