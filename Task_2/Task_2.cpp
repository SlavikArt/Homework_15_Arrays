#include <iostream>

int random(int min, int max)
{
	int k = max - min + 1;
	return rand() % k + min;
}

int main()
{
	srand(time(0));

	const int SIZE = 20;

	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = random(0, 100);
	}

	std::cout << "\nArray:\t\t";

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << "\nEven indexes:\t";

	for (int i = 0; i < SIZE; i++)
	{
		if (i % 2 == 0)
		{
			std::cout << arr[i] << "    ";
		}
	}

	std::cout << "\n";
}