#include <iostream>

int random(int min, int max)
{
	int k = max - min + 1;
	return rand() % k + min;
}

int main()
{
	srand(time(0));

	int sum = 0;

	bool isNegative = false;

	const int SIZE = 20;

	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = random(-10, 30);
	}

	for (int i = 0; i < SIZE; i++)
	{
		if (isNegative)
		{
			sum += arr[i];
		}
		else if (arr[i] < 0)
		{
			isNegative = true;
		}
	}

	std::cout << "Array:\n";

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << " ";
		if (i % 25 == 0 && i != 0) std::cout << "\n";
	}

	std::cout << "\nSum after 1 negative: " << sum << "\n\n";
}