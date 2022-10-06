#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
//#define TEMPERATURE
//#define TARGET
//#define CALC_1
//#define SWITHC_SINTAX 
//#define FRACT_NUMB


void main()

{
	setlocale(LC_ALL, "Rus");

#if defined TEMPERATURE   //начало блока
	int temperature;
	cout << "Введите температуру воздуха:"; cin >> temperature;
	if (temperature > 0)
	{
		cout << "На улице тепло " << endl;
	}
	else
	{
		cout << " На улице холодно" << endl;
	}
#endif // TEMPERATURE  конец блока


#ifdef TARGET // начало блока
	int n;
	cout << "Введите число"; cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "Цель поражена" << endl;
	}
	else
	{
		cout << "Вы промахнулись" << endl;
	}
#endif // TARGET  // конец блока


  // Если определенно CALC_1,то нижеследующий код. до дерективы #endif. будет виден компилятору
#ifdef CALC_1// начало блока
	double a, b;//ЧИСЛА  С КЛАВИАТУРЫ
	char s; //ЗНАК ОПРЕЦИИ 
	cout << "Введите простое выражение :";
	cin >> a >> s >> b; 
	cout << a << s << b << endl;
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	} 
	 else if (s == '/')
	{
		cout << a << "/" << b << "=" << a / b << endl;
	}
	else
	{
		cout << " Error : No operation !" << endl;
	}
#endif // CALC_1   конец блока


#ifdef SWITHC_SYNTAX

	int var = 0;
	int code1 = 0;
	int code2 = 0;
	int codeN = 0;
#define CONST_1 1
#define CONST_2 2
#define CONST_N 'N'

	
	switch (var)
	{
     case CONST_1: code1; break;
	 case CONST_2: code2; break;
     //........................
	 //........................
	 case CONST_N: codeN; break;
	 default: default_code;
		
					


	}
#endif // SWITHC_SINTAX					

	
#ifdef FRACT_NUMB
	double money;//обьявляем дробную переменную 
	cout << "введите сумму перевода :"; cin >> money;
	cout << money << endl;
	money += 1e-10;
	int grn = money;//неявное преобразование типов из double в int
	cout << grn << "грн.\n";
	int cop = (money - grn) * 100;
	cout << cop << "коп.\n";

#endif // FRACT_NUMB

}
