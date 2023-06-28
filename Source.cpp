#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	/*заполнить массив уникальными случайными числами*/
	const int size = 10;
	int arr[size] = { 0 };
	int value, min;
	bool count = false;
	srand(time(NULL));
	std::cout << "массив уникальных, случайных чисел от 1 до 20\n";
	for (int i = 0; i < size;)
	{
		count = false;
		value = rand() % 200+100;
		for (int j = 0; j <= i; j++)
		{
			if (arr[j] == value)
			{
				count = true;
				break;
			}
		}
		if (!count)
		{
			arr[i] = value;
			i++;
		}
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << "\nнайти наименьший элемент в массиве";
	std::cout << endl;
	min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
			min = arr[i];

	}
	std::cout << min;
	std::cout << endl;
	std::system("pause");
	return 0;
}