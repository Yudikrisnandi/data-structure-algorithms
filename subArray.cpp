#include <bits/stdc++.h> 

using namespace std;

// todo : printing pairs
void print_subarray(int arr[], int n ){
  for(int i = 0; i < n; i++){
    for(int j = i; j < n; j++){
      //cout << "(" << i << "," << j << "),";
      for(int k=i; k <= j; k++){
        cout << arr[k] << ", ";
      }
      cout << endl;
    }
  }
}
 
int main(){
  int arr[] = {1, 2, 3, 4, 5, 6};

  int size = sizeof(arr) / sizeof(int);

  print_subarray(arr, size);

  return 0;
}
