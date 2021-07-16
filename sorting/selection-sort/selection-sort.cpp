#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void selectionSort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    int min_idx = i;
    for (int j = i + 1; j < size; j++)
      if (arr[j] < arr[min_idx])
        min_idx = j;
    swap(&arr[min_idx], &arr[i]);
  }
}

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main()
{
  int arr[] = {64, 25, 12, 22, 11};
  int size = sizeof(arr) / sizeof(arr[0]);
  selectionSort(arr, size);
  cout << "Sorted array: \n";
  printArray(arr, size);
  return 0;
}
