// LOOPS ( ПЕТЛИ )

#include<iostream>
#include<conio.h> // здесь находится функция _getch()
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
	int n; //кол во итераций
	int i = 0; // счетчик цикла

	cout << "количество операций "; cin >> n;
	while (i < n)
	{
		cout << i << "Нello word\n";
		i++; //шаг цикла
	}
#endif //WHILE_1

#if defined WHILE_2

	int n; //количество итераций
	cout << "количество  итераций "; cin >> n;
	while (n)
	{
		cout << n-- << "\t";
		//n--;
	}
	cout << endl;
#endif // WHILE_2

#ifdef Escape 27

	char key; //эта переменная      будет чранить код клавиш
	do
	{

		key = _getch();//функция _getch() ожидает нажатие клавиши
						 //и возвращает ASCII-коднажатой клавиши
		cout << (int)key << "\t" << key << endl;// (int) key - явное преобразование переменной 'key'в тип данных 'int'
											   //для того чтобы увидеть код нажатой клавиши.

	} while (key != Escape);
#endif // Escape 27

	



}