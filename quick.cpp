#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1);
	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return (i + 1);
}
void quickSort(int *arr, int l, int h)
{
	if (l >= h)
	{
		return;
	}
	int c = partition(arr, l, h);
	quickSort(arr, l, c - 1);
	quickSort(arr, c + 1, h);
}
int main()
{
	int size;
	cin >> size;
	int *arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	quickSort(arr, 0, size - 1);
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
