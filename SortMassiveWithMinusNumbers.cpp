#include <iostream>

using namespace std;

template <class T>
void CreateMassive(T arr[], int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 40 - 20;
}
void PrintMassive(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << ' ';
}

void bubblesort(int arr[], int size)
{
	int min_right{};
	int min_left{};
	for (int i = 0; i < size; i++)
	{
		for (int y = 0; y < size / 2; y++)
		{
			if (arr[y] < 0)
			{
				min_left = y;
				break;
			}
		}

		for (int l = size - 1; l >= size / 2; l--)
		{
			if (arr[l] < 0)
			{
				min_right = l;
				break;
			}
		}

		for (int j = min_left + 1; j < min_right - 1; j++)
		{
			int left = j;
			int right = j + 1;
			if (arr[left] > arr[right])
				swap(arr[left], arr[right]);
		}
	}
}
int main()
{
	setlocale(0, "");
	srand(time(NULL));

	int const size = 10;
	int arr[size]{};

	CreateMassive(arr, size);
	PrintMassive(arr, size);
	cout << endl;

	bubblesort(arr, size);
	PrintMassive(arr, size);
	cout << endl;

	return 0;
}