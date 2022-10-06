#include<iostream>
using namespace std;
using std::cout;

//#define PRIM_NUMB
//#define ТESTED_CYCLE
//#define MULTIPLICATION_TABLE
//#define PYTHAGRAS_TABLE




void main()

{

	setlocale(LC_ALL, "");

#ifdef PRIM_NUMB
	int n;
	cout << "Введите предельное число:  "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true;// предпологаем ,что число простое,
		//но это нужно проверить:
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
	for (int i = 0; i < 10; i++)//основной (внешний) цикл
	{
		//счетчика j еще нет
		for (int j = 0; j < 10; j++)//вложеный for 
		{
			cout << j << "\t" << j << endl;
		}
		//счетчика j уже нет
	}
#endif // TESTED_CYCLE

#ifdef MULTIPLICATION_TABLE


	for (int i = 1; i <= 10; i++)
	{
		cout << "Таблица умножения на" << i << ":\n";
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
			cout . width(5);// это свойство задает ширину поля вывода в знакопозициях
			//если вывод был меньше заданной ширины,то следующуе значение выведется за пределы
			//заданного поля , в дааном случе 5 знакопозиций
			//если выводимое значение требует больше знакопозиций ,то оно займет больше места на эеране
			//сout.width(x);неявно включает выравниванивание по правому краю поля 
			//заданной ширины, то есть фактически выполняет cout<< right;
			//по умолчанию вывод выравнивается по левому краю // cout << left; 
			cout << i * j ;
		}
		cout << endl;
	}

#endif // PYTHAGRAS_TABLE





}
