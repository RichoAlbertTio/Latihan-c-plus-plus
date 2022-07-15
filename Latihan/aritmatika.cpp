#include <iostream>

using namespace std;

void tampilkan(int hitungan[], int counter)
{
	for (int i = 0; i < counter; i++)
	{
		cout << hitungan[i] << " ";
	}
}

void bubbleSort(int hitungan[], int counter)
{
	for (int i = 0; i < counter - 1; i++)
	{
		for (int j = 0; j < counter - 1; j++)
		{
			if (hitungan[j] > hitungan[j + 1])
			{
				swap(hitungan[j], hitungan[j + 1]);
			}
		}
	}
	tampilkan(hitungan, counter);
}

void selection(int hitungan[], int counter)
{
	int i, j, min;
	for (i = 0; i < counter - 1; i++)
	{
		min = i;
		for (j = i + 1; j < counter; j++)
			if (hitungan[j] > hitungan[min])
				min = i;
		swap(hitungan[i], hitungan[min]);
	}
	tampilkan(hitungan, counter);
}

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
	tampilkan(arr, n);
}

void shellSort(int arr[], int n)
{
	for (int gap = n / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < n; i += 1)
		{
			int temp = arr[i];

			int j;
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
				arr[j] = arr[j - gap];
			arr[j] = temp;
		}
	}
	tampilkan(arr, n);
}

void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	cout << "\t\t    SORTING\n\n";
	const int MAX = 11;
	int hitungan[MAX] = {15, 8, 0, -2, 19, 42, 31, 81, -72, 1, 2};
	cout << "Buble Sort     : ";
	bubbleSort(hitungan, MAX);
	cout << endl
		 << endl;
	cout << "Selection Sort : ";
	selection(hitungan, MAX);
	cout << endl
		 << endl;
	cout << "Insertion Sort : ";
	insertionSort(hitungan, MAX);
	cout << endl
		 << endl;
	cout << "Shell Sort     : ";
	shellSort(hitungan, MAX);
	cout << endl
		 << endl;

	return 0;
}
