#include <iostream>
using namespace std;
#include <string>  //string头文件
#define MAX 1000 //定义宏常量

//联系人结构体
struct Person
{
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone; //电话
	string m_Addr;
};
//通讯录结构体
struct Addressbooks
{
	struct Person personArray[MAX]; //通讯录中保存的联系人数组
	int m_Size; //通讯录中人员个数
};

//菜单节目
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}
//1.添加联系人
void addPerson(Addressbooks *abs)
{
	//先判断通讯录是否已满，满了就不添加
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		//输入姓名
		string name;
		cout << "输入名字" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//性别
		
		while (true)
		{
			int sex;
			cout << "性别" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else
			{
				cout << "重新输入" << endl;
			}
		}
		//年龄
		int age;
		cout << "enter your age" << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//联系电话
		string phone;
		cout << "enter your phone number" << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//地址
		string address;
		cout << "enter your address" << endl;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//更新通讯录人数
		abs->m_Size++;

		cout << "添加成功" << endl;
		system("pause");
		system("cls");//清屏
	}
}
//2.显示联系人
void showPerson(struct Addressbooks *abs) {
	if (abs->m_Size == 0)
	{
		cout << "empty" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_Name << "\t";//水平制表符 空8个格
			cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话：" << abs->personArray[i].m_Phone << "\t";
			cout << "住址：" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");//按任意键继续
	system("cls");//清屏
}
//3.检测联系人存在，不存在返回-1
int isExist(struct Addressbooks *abs) {
	cout << "输入删除用户的名字" << endl;
	string name;
	cin >> name;
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			//cout << i << endl;
			return i;
		}
	}
	return -1;
}
//3.删除联系人
void deletePerson(struct Addressbooks *abs) {
	int ret = isExist(abs);
	if (ret != -1)
	{
		//将要删除后的数据做向前移动，并且让通讯录中记录的人员个数-1
		for (int i = ret; i < abs->m_Size; i++)
		{
			//数据前移
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "successfully delete" << endl;
	}
	else
	{
		cout << "not found" << endl;
	}
	system("pause");//按任意键继续
	system("cls");//清屏
}
//4.查找联系人
void findPerson(struct Addressbooks* abs) {
	int ret = isExist(abs);
	if (ret != -1)
	{
		cout << "姓名：" << abs->personArray[ret].m_Name << "\t";//水平制表符 空8个格
		cout << "性别：" << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
		cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
		cout << "住址：" << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "not found" << endl;
	}
	//cout << "输入删除用户的名字" << endl;
	//string name;
	//cin >> name;
	//for (int i = 0; i < abs->m_Size; i++)
	//{
	//	if (abs->personArray[i].m_Name == name)
	//	{
	//		cout << "姓名：" << abs->personArray[i].m_Name << "\t";//水平制表符 空8个格
	//		cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
	//		cout << "年龄：" << abs->personArray[i].m_Age << "\t";
	//		cout << "电话：" << abs->personArray[i].m_Phone << "\t";
	//		cout << "住址：" << abs->personArray[i].m_Addr << endl;
	//	}
	//	else
	//	{
	//		cout << "not found" << endl;
	//	}
	//}
	system("pause");//按任意键继续
	system("cls");//清屏
}
//5.修改联系人
void modifyPerson(struct Addressbooks* abs)
{
	int ret = isExist(abs);
	if (ret != -1)
	{
		//输入姓名
		string name;
		cout << "输入名字" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//性别

		while (true)
		{
			int sex;
			cout << "性别" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			else
			{
				cout << "重新输入" << endl;
			}
		}
		//年龄
		int age;
		cout << "enter your age" << endl;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		//联系电话
		string phone;
		cout << "enter your phone number" << endl;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		//地址
		string address;
		cout << "enter your address" << endl;
		cin >> address;
		abs->personArray[ret].m_Addr = address;
	}
	else
	{
		cout << "not found" << endl;
	}
	system("pause");//按任意键继续
	system("cls");//清屏
}
//6.清空联系人(逻辑清空即可， 不用将数据抹除)
void cleanPerson(Addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "已清空" << endl;
	system("pause");//按任意键继续
	system("cls");//清屏
}

int main()
{
	//创建通讯录
	Addressbooks abs;
	//初始化通讯录中人数
	abs.m_Size = 0;

	int select = 0;
	while (true) {
		//菜单调用
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1:
			addPerson(&abs);
			break;
		case 2:
			showPerson(&abs);
			break;
		case 3:
			deletePerson(&abs);
		//{
		//	if (isExist(&abs) == )
		//	{

		//	}
		//	int a = isExist(&abs);
		//	cout << a << endl;
		//}//case里面代码过长（大于一行）要用大括号括住
			break;
		case 4:
			findPerson(&abs);
			break;
		case 5:
			modifyPerson(&abs);
			break;
		case 6:
			cleanPerson(&abs);
			break;
		case 0:
			cout << "exit" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	

	system("pause");
	return 0;
}