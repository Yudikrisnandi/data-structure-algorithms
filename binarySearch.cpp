#include <bits/stdc++.h> 
// todo : make linear search
using namespace std;

int binary_search(int arr[], int n, int target){
  int s = 0;
  int e = n - 1;
  while(s <= e){
    int mid = (s+e) / 2;
    if(arr[mid] == target){
      return mid;
    }else if(arr[mid] > target){
      e = mid - 1;
    }else{
      s = mid + 1;
    }
  }
  return -1;
}
 
int main(){
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(arr) / sizeof(int);

  int target; cin >> target;

  int index = binary_search(arr, size, target);

  cout << index << endl;

  return 0;
}
