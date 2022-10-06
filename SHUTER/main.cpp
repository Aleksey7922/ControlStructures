#include<iostream>
#include<conio.h>

using namespace std;

#define Escape 27
#define Enter 13
#define UP_ARROW  72
#define DOWN_ARROW 80
#define LEFT_ARROW 75
#define RIGHT_ARROW 77

//#define IF_SHUTER
void main()

{
	setlocale(LC_ALL, "");


	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		//(int)key €вное преоброзование типов
#ifdef IF_SHUTER
		if (key == 'w' || key == 'W' || key == UP_ARROW)
		{
			cout << "вперед";
		}
		else if (key == 's' || key == 'S' || key == DOWN_ARROW)
		{
			cout << "назад";
		}
		else if (key == 'a' || key == 'A' || key == LEFT_ARROW)

		{
			cout << "влево";
		}
		else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)
		{
			cout << "вправо";
		}
		else if (key == ' ')
		{
			cout << "прыжок";
		}
		else if (key == Enter)
		{
			cout << "ќ√ќЌ№";
		}
		else

		{
			if (key != -32 && key != Escape)cout << "error";

		}
		cout << endl;
#endif // IF_SHUTER


		switch (key)
		{
		case UP_ARROW:
		case'w':
		case'W':cout << "впкркд" << endl; break;
		case DOWN_ARROW:
		case's':
		case'S':
		case LEFT_ARROW:cout << "вправо" << endl; break;
		case'a':cout << "вправо" << endl; break;
		case'A':cout << "вправо" << endl; break;
		case RIGHT_ARROW:cout << "назад" << endl; break;
		case'D':cout << "назад" << endl; break;
		case' ':cout << "прыжок" << endl; break;
		case Enter:cout << "огонь" << endl; break;	
		case -32:break;
		default:cout << "error" << endl;
		}
	} while (key != Escape);




}