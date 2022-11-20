#include <bits/stdc++.h> 

#define pb push_back

using namespace std;

void merge(vector<int> &arr, int s, int e){
  int i = s;
  int m = (s+e) / 2;
  int j = m+1;
  vector<int> temp;

  while(i<=m and j<=e) {
    if(arr[i] < arr[j]){
      temp.pb(arr[i]);
      i++;
    }else {
      temp.pb(arr[j]);
      j++;
    }
  }

  while(i <= m){
    temp.pb(arr[i++]);
  }
  while(j <= e){
    temp.pb(arr[j++]);
  }

  int k = 0; 

  for(int idx = s; idx <= e; ++idx){
    arr[idx] = temp[k++];
  }
}

void mergeSort(vector<int> &arr, int s, int e){
  if(s >= e){
    return;
  }

  int mid = (s+e) / 2;
  mergeSort(arr, s, mid);
  mergeSort(arr, mid+1, e);
  return merge(arr, s, e);
}

void print(vector<int> arr){
  int n = arr.size();
  for(int i = 0; i < n; ++i){
    cout << arr[i] << " ";
  }
  cout << endl;
}
 
int main(){
  vector<int> arr = {10, 5, 2, 0, 7, 6, 4};
  int s = 0;
  int e = arr.size() - 1;
  mergeSort(arr, s, e);

  print(arr);
  return 0;
}
