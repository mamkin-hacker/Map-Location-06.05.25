#include <iostream>
#include <array>

using namespace::std;

int main()
{
	const int amountStars = 22;
	int x = amountStars / 2;
	int count = 0;

	char array[amountStars][amountStars];
	// ��������� ������  

	for (int i = 0; i < amountStars; i++)
	{
		for (int j = 0; j < amountStars; j++)
		{
			array[i][j] = ' ';

		//�������� amountStars

			if (amountStars % 2 != 0)
			{

			//���������

				if (x % 2 == 0)
				{
					if (((i <= x && (i % 2 == 0) && (j >= i && j <= (amountStars - 1 - i)))) || ((j <= x && (j % 2 == 0) && (i >= j && i <= (amountStars - 1 - j)))))
					{
						array[i][j] = '*';
					}

					if ((((i >= x && (i % 2 == 0) && (j <= i && j >= (amountStars - 1 - i)))) || (((j >= x) && (j % 2 == 0) && (i <= j && i >= (amountStars - 1 - j))))))
					{
						array[i][j] = '*';
					}
				}
				else
				{
					if (((i <= x && (i % 2 != 0) && (j >= i && j <= (amountStars - 1 - i)))) || ((j <= (x) && (j % 2 != 0) && (i >= j && i <= (amountStars - 1 - j)))))
					{
						array[i][j] = '*';
					}

					if (((i >= x && (i % 2 != 0) && (j <= i && j >= (amountStars - 1 - i)))) || (((j >= x) && (j % 2 != 0) && (i <= j && i >= (amountStars - 1 - j)))))
					{
						array[i][j] = '*';
					}
				}
			}

		//������ amountStars

			else
			{
			// x/2 == ������ ��������

				if ((x % 2) == 0)
				{
			//���������

					if (((i <= (x - 1) && (i % 2 != 0) && (j >= i && j <= (amountStars - 1 - i)))) || ((j <= (x - 1) && (j % 2 != 0) && (i >= j && i <= (amountStars - 1 - j)))))
					{
						array[i][j] = '*';
					}

					if ((((i >= x) && (i % 2 == 0) && (j <= i && j >= (amountStars - 1 - i)))) || (((j >= x) && (j % 2 == 0) && (i <= j && i >= (amountStars - 1 - j)))))
					{
						array[i][j] = '*';
					}


				}
				else
			// x/2 == �������� ��������
				{
					if (((i <= (x - 1) && (i % 2 == 0) && (j >= i && j <= (amountStars - 1 - i)))) || ((j <= (x - 1) && (j % 2 == 0) && (i >= j && i <= (amountStars - 1 - j)))))
					{
						array[i][j] = '*';
					}

					if ((((i >= x) && (i % 2 != 0) && (j <= i && j >= (amountStars - 1 - i)))) || (((j >= x) && (j % 2 != 0) && (i <= j && i >= (amountStars - 1 - j)))))
					{
						array[i][j] = '*';
					}
				}
			}
		}
	}

	cout << endl;

	//������� - ������ ������� � �������
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
