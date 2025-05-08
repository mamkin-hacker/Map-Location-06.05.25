#include <iostream>
#include <locale>
#include <array>
#include <Windows.h> // не работает setConsole
using namespace::std;

int main()
{
	setlocale(LC_ALL, "RU");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int amountStars = 10;
	int x = amountStars / 2;

	char array[amountStars][amountStars];
	// «аполн€ем массив "пустотой" 
	for (int i = 0; i < amountStars; i++)
	{
		for (int j = 0; j < amountStars; j++)
		{
			array[i][j] = '*';
			
			if ((i == (x - 4)) && ((j != 0) && (j != (amountStars - 1))))
			{
				array[i][j] = ' ';
			}

			if (((i == (x - 3)) || (i == (x + 3))) && ((j == (x - 4)) || (j == (x + 3))))
			{
				array[i][j] = ' ';
			}

			if (((i == (x - 2)) || (i == (x + 2))) && ((j == (x - 4)) || (j == (x + 3)) || (j == x + 1) || (j == x) || (j == (x - 1)) || (j == (x - 2))))
			{
				array[i][j] = ' ';
			}

			if (((i == (x - 1)) || (i == (x + 1)) || (i == x)) && ((j == (x - 4)) || (j == (x + 1)) || (j == (x + 3)) || (j == x - 2)))
			{
				array[i][j] = ' ';
			}
		}
	}

	cout << endl << endl;
	//»змененный массив выводим в консоль
	for (int i = 0; i < amountStars; i++)
	{
		for (int j = 0; j < amountStars; j++)
		{

			if (j == (amountStars - 1))
			{
				cout << array[i][j] << endl;
			}
			else
			{
				cout << array[i][j];
			}
		}
	}
}
