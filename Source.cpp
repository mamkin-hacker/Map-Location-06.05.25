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
			array[i][j]= '*';
			if (j == (amountStars-1)) 
			{
				cout << array[i][j] << endl;
			}
			else
			{
				cout << array[i][j];
			}

			if ((i == (x - 4)) && ((j != 0) && (j != (x + 4))))
			{
				array[i][j] = ' ';
			}
			
			if (((i == (x - 3)) || (i == (x + 3))) && ((j == (x - 4)) || (j == (x + 3))))
			{
				array[i][j] = ' ';
			}

			if (((i == 3) || (i == (x + 2))) && ((j == (x - 4)) || (j == (x + 3)) || (j == x + 1) || (j == x) || (j == (x - 1)) || (j == (x - 2))))
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
	/* «аполн€ем массив "звездами" 0 строку и выводим в консоль

	for (int i = 0; i < amountStars; i++)
	{
		for (int j = 0; j < amountStars; j++)
		{
			if ((i == 0) || (i == (amountStars-1)))
			{
				array[i][j] = '*';
			}

			if (j == 0) //|| (j == (amountStars - 1)))
			{
				array[0][j] = '*';
				array[amountStars - 1][j] = '*';
			}

			if (i == 2)
			{
				array[i][j] = '*';
				array[i][1] = ' ';
				array[i][amountStars - 2] = ' ';
			}
			if (i == 3)
			{
				array[i][j] = '*';
				array[i][1] = ' ';
				array[i][amountStars - 2] = ' ';
			}
		}
	}

		for (int i = 0; i < amountStars; i++)
		{
			for (int j = 0; j < amountStars; j++)
			{
				cout << array[i][j];
			}
		}
	*/

		Sleep(30);
	//	system("cls");
}
