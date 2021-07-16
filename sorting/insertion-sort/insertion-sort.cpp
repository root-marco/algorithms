#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size)
{
  int i, key, j;
  for (i = 1; i < size; i++)
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
}

void printArray(int arr[], int size)
{
  int i;
  for (i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main()
{
  int arr[] = {12, 11, 13, 5, 6};
  int size = sizeof(arr) / sizeof(arr[0]);
  insertionSort(arr, size);
  printArray(arr, size);
  return 0;
}
