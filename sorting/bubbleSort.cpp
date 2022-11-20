#include <bits/stdc++.h> 

using namespace std;

void bubbleSort(int a[], int n ){
  for(int i = 0; i < n; i++){
    bool isSwap = false;
    for(int j = 0; j <= n - i - 1; j++){
      if(a[j] > a[j+1]){
        isSwap = true;
        swap(a[j], a[j+1]);
      }
    }
    if(isSwap) break;
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

void print(string pre, int arr[], int n){
  cout << pre << " : ";
  for(int i = 0; i < n; ++i){
    cout << arr[i] << " ";
  }
  cout << endl;
}


int main(){
  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
  int arr2[] = {-4, 5, 4, -1, 5, -12, 8, 1, 3};

  int size = sizeof(arr) / sizeof(int);

  print("before", arr, size);
  print("before", arr2, size);


  bubbleSort(arr, size);
  bubbleSort2(arr2, size);

  print("after", arr, size);
  print("after", arr2, size);

  return 0;
}
