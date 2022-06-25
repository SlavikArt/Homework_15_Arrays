#include <iostream>

int random(int min, int max)
{
	int k = max - min + 1;
	return rand() % k + min;
}

void maxNum(int arr[], const int SIZE, int* max, int* maxIndex)
{
	*max = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] > *max)
		{
			*max = arr[i];
			*maxIndex = i;
		}
	}
}

void minNum(int arr[], const int SIZE, int *min, int *minIndex)
{
	*min = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] < *min)
		{
			*min = arr[i];
			*minIndex = i;
		}
	}
}

int main()
{
	srand(time(0));

	int max;
	int min;
	
	int maxIndex = 0;
	int minIndex = 0;

	const int SIZE = 20;

	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = random(-100, 100);
	}

	maxNum(arr, SIZE, &max, &maxIndex);
	minNum(arr, SIZE, &min, &minIndex);

	std::cout << "Array:\n";

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << " ";
		if (i % 5 == 0 && i != 0) std::cout << "\n";
	}

	std::cout << "\nMax: " << max << "\n";
	std::cout << "Max index: " << maxIndex << "\n";
	std::cout << "Min: " << min << "\n";
	std::cout << "Min index: " << minIndex << "\n\n";
}