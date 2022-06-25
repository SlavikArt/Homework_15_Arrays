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

	int num;
	int count = 0;

	std::cout << "Enter a number (0 - 100): ";
	std::cin >> num;

	const int SIZE = 100;

	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = random(0, 100);
	}

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == num)
		{
			SetConsoleTextAttribute(h, 12);
			std::cout << arr[i] << " ";
			SetConsoleTextAttribute(h, 15);
			count++;
		}
		else
		{
			std::cout << arr[i] << " ";
		}
		if (i % 25 == 0 && i != 0) std::cout << "\n";
	}

	std::cout << "\nCount: " << count << "\n\n";
}