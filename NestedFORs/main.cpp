#include<iostream>
using namespace std;
using std::cout;

//#define PRIM_NUMB
//#define �ESTED_CYCLE
//#define MULTIPLICATION_TABLE
//#define PYTHAGRAS_TABLE




void main()

{

	setlocale(LC_ALL, "");

#ifdef PRIM_NUMB
	int n;
	cout << "������� ���������� �����:  "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true;// ������������ ,��� ����� �������,
		//�� ��� ����� ���������:
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)cout << i << "\t";
	}
#endif // PRIM_NUMB

#ifdef TESTED_CYCLE
	for (int i = 0; i < 10; i++)//�������� (�������) ����
	{
		//�������� j ��� ���
		for (int j = 0; j < 10; j++)//�������� for 
		{
			cout << j << "\t" << j << endl;
		}
		//�������� j ��� ���
	}
#endif // TESTED_CYCLE

#ifdef MULTIPLICATION_TABLE


	for (int i = 1; i <= 10; i++)
	{
		cout << "������� ��������� ��" << i << ":\n";
		for (int j = 1; j <= 10; j++)
		{
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i * j < 100)cout << " ";
			if (i * j < 10)cout << " ";
			cout << i * j << endl;
		}
		cout << endl;
	}

#endif  //MULTIPLICATION_TABLE

#ifdef PYTHAGRAS_TABLE

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout . width(5);// ��� �������� ������ ������ ���� ������ � �������������
			//���� ����� ��� ������ �������� ������,�� ��������� �������� ��������� �� �������
			//��������� ���� , � ������ ����� 5 ������������
			//���� ��������� �������� ������� ������ ������������ ,�� ��� ������ ������ ����� �� ������
			//�out.width(x);������ �������� ���������������� �� ������� ���� ���� 
			//�������� ������, �� ���� ���������� ��������� cout<< right;
			//�� ��������� ����� ������������� �� ������ ���� // cout << left; 
			cout << i * j ;
		}
		cout << endl;
	}

#endif // PYTHAGRAS_TABLE





}
