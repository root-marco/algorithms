#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 4;
int a[N];
int n;
int k;

bool check(int dig)
{
  int ele = a[dig];
  if (k <= ele) return 1;
  else return 0;
}

void binsrch(int lo, int hi)
{
  while (lo < hi)
  {
    int mid = (lo + hi) / 2;
    if (check(mid)) hi = mid;
    else lo = mid + 1;
  }
  if (a[lo] == k)
    cout << "Element found at index " << lo;
  else
    cout << "Element doesnt exist in array";
}

int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  cin >> k;
  binsrch(0, n);
  return 0;
}
