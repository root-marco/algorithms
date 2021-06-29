// time complexity: O(log(n))

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
  while (l <= r)
  {
    int mid = l + (r - l) / 2;
    if (arr[mid] == x)
      return mid;
    if (arr[mid] < x)
      l = mid + 1;
    if (arr[mid] > x)
      r = mid - 1;
  }
  return -1;
}

int main(void)
{
  int arr[] = {2, 3, 4, 10, 40};
  int x = 10;
  int n = sizeof(arr) / sizeof(arr[0]);
  int result = binarySearch(arr, 0, n - 1, x);
  (result == -1)
      ? cout << "Element is not present in array"
      : cout << "Element is present at index " << result;
  return 0;
}
