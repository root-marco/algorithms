#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int left, int right, int target)
{
  if (right >= left)
  {
    int mid = left + (right - left) / 2;
    if (arr[mid] < target)
      return binarySearch(arr, mid + 1, right, target);
    if (arr[mid] > target)
      return binarySearch(arr, left, mid - 1, target);
    return mid;
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
