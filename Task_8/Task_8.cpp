#include <iostream>
#include <Windows.h>

int randInt(int min, int max)
{
	int k = max - min + 1;
	return rand() % k + min;
}

double randDouble(int min, int max)
{
	float fl;
	if (randInt(0,100) > 70)
	{
		fl = randInt(0, 99);
		fl = fl > 10 ? fl / 100 : fl / 10;
	}
	else
	{
		fl = randInt(0, 30);
		fl = fl > 10 ? fl / 100 : fl / 10;
	}
	return randInt(0, 100) + fl;
}

int main()
{
	srand(time(0));

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	int count = 0;

	const int SIZE = 100;

	double arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = randDouble(0, 100);
	}

	std::cout << "Array:\n";

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == (int)arr[i])
		{
			SetConsoleTextAttribute(h, 12);
			std::cout << (double)arr[i] << " ";
			SetConsoleTextAttribute(h, 15);
			count++;
		}
		else
		{
			std::cout << arr[i] << " ";
		}
		if (i % 10 == 0 && i != 0) std::cout << "\n";
	}

	std::cout << "\nCount: " << count << "\n\n";
}