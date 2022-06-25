#include <iostream>

int random(int min, int max)
{
	int k = max - min + 1;
	return rand() % k + min;
}

int main()
{
	srand(time(0));

	int count = 0;
	int sum = 0;
	int average = 0;

	const int SIZE = 10;

	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = random(-20, 20);
	}

	std::cout << "Array: ";

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << "\nPositive numbers:\n";

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > 0)
		{
			count++;
			sum += arr[i];
		}
	}

	average = sum / count;

	std::cout << "Amount: " << count << "\n";
	std::cout << "Sum: " << sum << "\n";
	std::cout << "Average: " << average << "\n\n";
}