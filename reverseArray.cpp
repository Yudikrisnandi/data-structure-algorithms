#include <bits/stdc++.h> 

using namespace std;

void reverse_array(int arr[], int n ){
  int s = 0;
  int e = n -1;
  while(s < e){
    swap(arr[s], arr[e]);
    s += 1;
    e -= 1;
  }
}

void printArray(int arr[], int n){
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
 
int main(){
  int arr[] = {1, 2, 3, 4, 5, 6};

  int size = sizeof(arr) / sizeof(int);

  printArray(arr, size);

  reverse_array(arr, size);

  printArray(arr, size);

  return 0;
}
