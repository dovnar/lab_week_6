#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int entry, go=0;

	srand(time(NULL)); 

	cout << "Игра «Угадай число»." "\n" "Программа загадывает число в диапазоне от 1 до 500. Попытайтесь его угадать""\n"
		"в случае если надоело угадывать число выход = 0""\n""Удачи!!!";
	int secret = rand() % 500 + 1;
	unsigned int startTime = clock();
	// уменьшите отступ
		do {
		// увеличьте отступ внутри do-while
		cout << "Угадай число (от 1 до 500): ";
		cin >> entry;
		if (entry < 0 ||
			entry > 500)
		{
			cout << "Значение не является диапазоном поиска!!!\n";
		}
		else if (entry == 0)
		{
			break;
		}
		else if (secret < entry)
		{
			cout << "Секретное число меньше\n";
		}
		else if (secret > entry)
		{
			cout << "Секретное число больше\n";
		}
		go++;
		} while (secret != entry);
	unsigned int endTime = clock();
	unsigned int searchTime = endTime - startTime;
	if (entry == 0)
	{
		cout << "Вы проиграли\n";
	}
	else
	{
		cout << "Мои поздравления!!!\n";
	}
	cout << "Вы потратили " << go << " попыток" "\n"
		<< "и " << searchTime/1000 << " секунд" "\n";
	return 0;
}


//Написать игру «Угадай число».Программа загадывает число 
//в диапазоне от 1 до 500. Пользователь пытается его угадать.
// каждой попытки программа выдает подсказки, больше или
//меньше его число загаданного.В конце программа выдает
//статистику : за сколько попыток угадано число, сколько
//времени это заняло.Предусмотреть выход по 0, в случае,
//если пользователю надоело угадывать число.
