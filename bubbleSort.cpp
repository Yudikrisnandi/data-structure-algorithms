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

void bubbleSort2(int a[], int n ){
  bool swapped;
  do {
    swapped = false;
    for(int i = 0; i < n; i++){
      if(a[i] > a[i+1]){
        swap(a[i], a[i+1]);
        swapped = true;
      }
    }
  }while(swapped);
}


int main(){
  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
  int arr2[] = {-4, 5, 4, -1, 5, -12, 8, 1, 3};

  int size = sizeof(arr) / sizeof(int);

  bubbleSort(arr, size);
  bubbleSort2(arr2, size);

  for(auto x : arr){
    cout << x << ", ";
  }

  cout << endl;

  for(auto x : arr2){
    cout << x << ", ";
  }
  return 0;
}
