#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int width, length, line=1, symbol, rew=1; // row?
	char sing; // sign?
	
	cout << "введите длину от 2 до 30 = ";
	cin >> length;
	cout << "введите ширину от 2 до 30 = ";
	cin >> width;
	cout << "задайте символом которым выводить = ";
	cin >> sing;
	if (length < 2 ||
		length > 30)
	{
		cout << "вы ввели неправильно длину\n";
		return 1;
	}
	else if (width < 2 ||
		width > 30)
	{
		cout << "вы ввели неправильно ширину\n";
		return 1;
	}

	for (; line <= length; line++)
	{
		for (symbol = 1; symbol <= width; symbol++)
		{
			if (line == rew ||
				line == length ||
				symbol == rew ||
				symbol == width)
			{
				cout << sing;
			}
			else
			{
				cout << ' ';
			}
		}
		cout << endl;
	}
	return 0;
}


//Вывести на экран прямоугольник с заданными
//сторонами заданным символом.
