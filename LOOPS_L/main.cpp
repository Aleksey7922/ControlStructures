// LOOPS ( ����� )

#include<iostream>
#include<conio.h> // ����� ��������� ������� _getch()
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define Escape 27
//#define WHILE_1
//#define WHILE_2

void main()

{

	setlocale(LC_ALL, "RUS");

#if defined WHILE_1
	int n; //��� �� ��������
	int i = 0; // ������� �����

	cout << "���������� �������� "; cin >> n;
	while (i < n)
	{
		cout << i << "�ello word\n";
		i++; //��� �����
	}
#endif //WHILE_1

#if defined WHILE_2

	int n; //���������� ��������
	cout << "����������  �������� "; cin >> n;
	while (n)
	{
		cout << n-- << "\t";
		//n--;
	}
	cout << endl;
#endif // WHILE_2

#ifdef Escape 27

	char key; //��� ����������      ����� ������� ��� ������
	do
	{

		key = _getch();//������� _getch() ������� ������� �������
						 //� ���������� ASCII-���������� �������
		cout << (int)key << "\t" << key << endl;// (int) key - ����� �������������� ���������� 'key'� ��� ������ 'int'
											   //��� ���� ����� ������� ��� ������� �������.

	} while (key != Escape);
#endif // Escape 27

	



}