#include <bits/stdc++.h> 

using namespace std;

class Compare {
  public:
    bool operator()(int a, int b){
      return a < b;
    }
};

 
int main(){
  int arr[] = {10, 15, 20, 13, 6, 90};
  int n = sizeof(arr)/sizeof(int);

  //priority_queue<int> heap; // default max heap

  //buildin comparater
  //priority_queue<int, vector<int>, greater<int>> heap; // min heap

  // our own comparator
  priority_queue<int, vector<int>, Compare> heap; // min heap

  for(auto x: arr){
    heap.push(x);
  }

  while(!heap.empty()){
    cout << heap.top() << endl;
    heap.pop();
  }
  return 0;
}
