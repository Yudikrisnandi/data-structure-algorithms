#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
  if (n == 0 or n == 1) {
    return true;
  }
  if (arr[0] < arr[1] and isSorted(arr + 1, n - 1)) {
    return true;
  }
  return false;
}

int main() {
  int arr[] = {1, 2, 3, 5, 4, 6, 7};
  int arr2[] = {1, 2, 3, 4, 5, 6, 7};
  int n = sizeof(arr) / sizeof(int);
  cout << "unsorted, " << isSorted(arr, n) << endl;
  cout << "sorted, " << isSorted(arr2, n) << endl;

  return 0;
}
