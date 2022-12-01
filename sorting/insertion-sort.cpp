#include <bits/stdc++.h> 

using namespace std;

void print(string pre, vector<int> arr){
  int n = arr.size();
  cout << pre << " : ";
  for(int i = 0; i < n; ++i){
    cout << arr[i] << " ";
  }
  cout << endl;
}

void insertionSort(vector<int> &v){
  int n = v.size();
  for(int i = 1; i < n; ++i){
    int ce = v[i];
    int prevIndex = i-1;
    while(prevIndex >= 0 and v[prevIndex] > ce){
      v[prevIndex+1] = v[prevIndex];
      prevIndex--; 
    }
    v[prevIndex+1] = ce;
  }
}


int main(){
  vector<int> v = {-2, 3, 4, -1, 5, -12, 6, 1, 3};

  print("before", v);


  insertionSort(v);

  print("after", v);

  return 0;
}
