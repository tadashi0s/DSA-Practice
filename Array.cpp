#include <bits/stdc++.h>
using namespace std;

int *insertionAt(int size, int arr[], int position, int element)
{
    if (position <= 0 || position > size)
    {
        cout << "error->cannot insert " << endl;
    }
    else
    {
        for (int i = size - 1; i >= position - 1; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[position - 1] = element;
        size++;
    }
    return arr;
}
int *DeleteElement(int size, int arr[], int position)
{
    if (position <= 0 || position > size)
    {
        cout << "error->cannot Delete " << endl;
    }
    else
    {
        for (int i = position - 1; i <= size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }
    return arr;
}
void display(int arr[], int size)
{
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size, element, position;
    cout << "Enter the size of array " << endl;
    cin >> size;
    cout << "Enter the position where you want to insert the Element " << endl;
    cin >> position;
    cout << "Enter the Element you want to insert " << endl;
    cin >> element;
    int arr[size];
    cout << "Enter the array Elements " << endl;
    for (int i = 0; i <= size; i++)
    {
        cin >> arr[i];
    }
    insertionAt(size, arr, position, element);
    display(arr, size);
    cout << endl;
    cout << "Enter the position where you want to Delete the Element " << endl;
    cin >> position;
    DeleteElement(size, arr, position);
    size--;
    display(arr, size);
    return 0;
}