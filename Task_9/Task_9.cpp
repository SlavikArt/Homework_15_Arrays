#include <iostream>
#include <Windows.h>

int random(int min, int max)
{
	int k = max - min + 1;
	return rand() % k + min;
}

int main()
{
	srand(time(0));

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	int one_digit = 0;
	int two_digit = 0;
	int three_digit = 0;

	const int SIZE = 200;

	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = random(0, 200);
	}

	std::cout << "Array:\n";

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] >= 0 && arr[i] < 10)
		{
			SetConsoleTextAttribute(h, 9);
			std::cout << arr[i];
			SetConsoleTextAttribute(h, 15);
			one_digit++;
		}
		else if (arr[i] >= 10 && arr[i] < 100)
		{
			SetConsoleTextAttribute(h, 10);
			std::cout << arr[i];
			SetConsoleTextAttribute(h, 15);
			two_digit++;
		}
		else if (arr[i] >= 100)
		{
			SetConsoleTextAttribute(h, 12);
			std::cout << arr[i];
			SetConsoleTextAttribute(h, 15);
			three_digit++;
		}

		if (i % 20 == 0 && i != 0)
		{
			std::cout << "\n";
		}
		else
		{
			std::cout << " ";
		}
	}

	std::cout << "\nStatistics:\n";

	one_digit /= 20;
	two_digit /= 20;
	three_digit /= 20;

	if (one_digit <= 1)
	{
		SetConsoleTextAttribute(h, 9);
		std::cout << (char)178;
		SetConsoleTextAttribute(h, 15);
	}
	else
	{
		for (int i = 0; i < one_digit; i++)
		{
			SetConsoleTextAttribute(h, 9);
			std::cout << (char)178;
			SetConsoleTextAttribute(h, 15);
			one_digit -= 1;
		}
	}

	for (int i = 0; i < ceil(two_digit); i++)
	{
		SetConsoleTextAttribute(h, 10);
		std::cout << (char)178;
		SetConsoleTextAttribute(h, 15);
	}

	for (int i = 0; i < three_digit; i++)
	{
		SetConsoleTextAttribute(h, 12);
		std::cout << (char)178;
		SetConsoleTextAttribute(h, 15);
	}
	
	std::cout << "\n";
}