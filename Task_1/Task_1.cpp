#include <iostream>

int main()
{
	const int SIZE = 5;

    int arr[SIZE];

	std::cout << "Enter 5 numbers:\n";

	for (int i = 0; i < SIZE; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << "Ok, thats your array in reverced order: ";

	for (int i = SIZE - 1; i >= 0; i--)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << "\n";
}