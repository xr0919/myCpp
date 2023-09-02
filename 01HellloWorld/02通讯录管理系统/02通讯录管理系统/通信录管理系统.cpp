#include <iostream>
using namespace std;
#include <string>  //stringͷ�ļ�
#define MAX 1000 //����곣��

//��ϵ�˽ṹ��
struct Person
{
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone; //�绰
	string m_Addr;
};
//ͨѶ¼�ṹ��
struct Addressbooks
{
	struct Person personArray[MAX]; //ͨѶ¼�б������ϵ������
	int m_Size; //ͨѶ¼����Ա����
};

//�˵���Ŀ
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}
//1.�����ϵ��
void addPerson(Addressbooks *abs)
{
	//���ж�ͨѶ¼�Ƿ����������˾Ͳ����
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		//��������
		string name;
		cout << "��������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//�Ա�
		
		while (true)
		{
			int sex;
			cout << "�Ա�" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else
			{
				cout << "��������" << endl;
			}
		}
		//����
		int age;
		cout << "enter your age" << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//��ϵ�绰
		string phone;
		cout << "enter your phone number" << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//��ַ
		string address;
		cout << "enter your address" << endl;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//����ͨѶ¼����
		abs->m_Size++;

		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");//����
	}
}
//2.��ʾ��ϵ��
void showPerson(struct Addressbooks *abs) {
	if (abs->m_Size == 0)
	{
		cout << "empty" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name << "\t";//ˮƽ�Ʊ�� ��8����
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");//�����������
	system("cls");//����
}
//3.�����ϵ�˴��ڣ������ڷ���-1
int isExist(struct Addressbooks *abs) {
	cout << "����ɾ���û�������" << endl;
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
//3.ɾ����ϵ��
void deletePerson(struct Addressbooks *abs) {
	int ret = isExist(abs);
	if (ret != -1)
	{
		//��Ҫɾ�������������ǰ�ƶ���������ͨѶ¼�м�¼����Ա����-1
		for (int i = ret; i < abs->m_Size; i++)
		{
			//����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "successfully delete" << endl;
	}
	else
	{
		cout << "not found" << endl;
	}
	system("pause");//�����������
	system("cls");//����
}
//4.������ϵ��
void findPerson(struct Addressbooks* abs) {
	int ret = isExist(abs);
	if (ret != -1)
	{
		cout << "������" << abs->personArray[ret].m_Name << "\t";//ˮƽ�Ʊ�� ��8����
		cout << "�Ա�" << (abs->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "סַ��" << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "not found" << endl;
	}
	//cout << "����ɾ���û�������" << endl;
	//string name;
	//cin >> name;
	//for (int i = 0; i < abs->m_Size; i++)
	//{
	//	if (abs->personArray[i].m_Name == name)
	//	{
	//		cout << "������" << abs->personArray[i].m_Name << "\t";//ˮƽ�Ʊ�� ��8����
	//		cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
	//		cout << "���䣺" << abs->personArray[i].m_Age << "\t";
	//		cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
	//		cout << "סַ��" << abs->personArray[i].m_Addr << endl;
	//	}
	//	else
	//	{
	//		cout << "not found" << endl;
	//	}
	//}
	system("pause");//�����������
	system("cls");//����
}
//5.�޸���ϵ��
void modifyPerson(struct Addressbooks* abs)
{
	int ret = isExist(abs);
	if (ret != -1)
	{
		//��������
		string name;
		cout << "��������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//�Ա�

		while (true)
		{
			int sex;
			cout << "�Ա�" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			else
			{
				cout << "��������" << endl;
			}
		}
		//����
		int age;
		cout << "enter your age" << endl;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		//��ϵ�绰
		string phone;
		cout << "enter your phone number" << endl;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		//��ַ
		string address;
		cout << "enter your address" << endl;
		cin >> address;
		abs->personArray[ret].m_Addr = address;
	}
	else
	{
		cout << "not found" << endl;
	}
	system("pause");//�����������
	system("cls");//����
}
//6.�����ϵ��(�߼���ռ��ɣ� ���ý�����Ĩ��)
void cleanPerson(Addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "�����" << endl;
	system("pause");//�����������
	system("cls");//����
}

int main()
{
	//����ͨѶ¼
	Addressbooks abs;
	//��ʼ��ͨѶ¼������
	abs.m_Size = 0;

	int select = 0;
	while (true) {
		//�˵�����
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
		//}//case����������������һ�У�Ҫ�ô�������ס
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