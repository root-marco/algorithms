#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int left, int right, int target)
{
  while (left <= right)
  {
    int mid = left + (right - left) / 2;
    if (arr[mid] == target)
      return mid;
    if (arr[mid] < target)
      left = mid + 1;
    if (arr[mid] > target)
      right = mid - 1;
  }
  return -1;
}

int main(void)
{
  int arr[] = {2, 3, 4, 10, 40};
  int target = 10;
  int size = sizeof(arr) / sizeof(arr[0]);
  int result = binarySearch(arr, 0, size - 1, target);
  (result == -1)
      ? cout << "Element is not present in array"
      : cout << "Element is present at index " << result << "\n";
  return 0;
}
