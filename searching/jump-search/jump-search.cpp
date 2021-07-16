#include <bits/stdc++.h>
using namespace std;

int jumpSearch(int arr[], int target, int size)
{
  int step = sqrt(size);
  int prev = 0;
  while (arr[min(step, size) - 1] < target)
  {
    prev = step;
    step += sqrt(size);
    if (prev >= size)
      return -1;
  }
  while (arr[prev] < target)
  {
    prev++;
    if (prev == min(step, size))
      return -1;
  }
  if (arr[prev] == target)
    return prev;
  return -1;
}

int main()
{
  int arr[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610};
  int target = 55;
  int size = sizeof(arr) / sizeof(arr[0]);
  int index = jumpSearch(arr, target, size);
  cout << "Number " << target << " is at index " << index << "\n";
  return 0;
}
