#include<iostream>

using namespace std;
//#ifdef FOR


void main()
{
	setlocale(LC_ALL, "RUS");




#ifdef FOR
	cout << " ������  FOR";
	int n;
	cout << "�������  ���������� �������� "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR





}