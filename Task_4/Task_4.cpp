#include <iostream>

int random(int min, int max)
{
	int k = max - min + 1;
	return rand() % k + min;
}

char randomSym()
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	char symbols[] = "!@#$%^&*()_+=-~`{}[]:;'\"?/\\,<>";
	char numbers[] = "1234567890";

	int randInt = random(1, 3);

	switch (randInt)
	{
	case 1:
		return letters[random(0, 26)];
	case 2:
		return symbols[random(0, 30)];
	case 3:
		return numbers[random(0, 10)];
	}
}

int main()
{
	srand(time(0));

	int digit = 0;
	int letter = 0;
	int symbol = 0;

	const int SIZE = 100;

	char arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = randomSym();
		if (isdigit(arr[i]))
		{
			digit++;
		}
		else if (isalpha(arr[i]))
		{
			letter++;
		}
		else
		{
			symbol++;
		}
	}

	std::cout << "Array:\n";

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << " ";
		if (i % 25 == 0 && i != 0) std::cout << "\n";
	}

	std::cout << "\nDigits: " << digit << "\n";
	std::cout << "Letters: " << letter << "\n";
	std::cout << "Symbol: " << symbol << "\n\n";
}