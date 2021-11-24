#include <bits/stdc++.h> 

using namespace std;

void bubbleSort(int a[], int n ){
  for(int i = 0; i < n; i++){
    for(int j = 0; j <= n - i - 1; j++){
      if(a[j] > a[j+1]){
        swap(a[j], a[j+1]);
      }
    }
  }  
}


int main(){
  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};

  int size = sizeof(arr) / sizeof(int);

  bubbleSort(arr, size);

  for(auto x : arr){
    cout << x << ", ";
  }

  return 0;
}
